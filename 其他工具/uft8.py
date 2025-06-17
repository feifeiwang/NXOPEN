def octal_to_utf8(octal_str):
    """将八进制表示的UTF-8编码转换为中文字符"""
    try:
        # 分割八进制字符串并转换为字节
        octal_list = [octal for octal in octal_str.split('\\') if octal]
        bytes_data = bytes([int(octal, 8) for octal in octal_list])
        # 解码为UTF-8字符串
        decoded_text = bytes_data.decode('utf-8')
        return decoded_text
    except Exception as e:
        return f"解码错误: {str(e)}"


def utf8_to_octal(text):
    """将中文字符转换为八进制表示的UTF-8编码"""
    try:
        # 编码为UTF-8字节
        encoded_bytes = text.encode('utf-8')
        # 转换为八进制字符串
        octal_str = ''.join([f'\\{b:03o}' for b in encoded_bytes])
        return octal_str
    except Exception as e:
        return f"编码错误: {str(e)}"


def main():
    print("==== UTF-8八进制编码转换器 ====")
    print("1. 八进制转UTF-8字符")
    print("2. UTF-8字符转八进制")
    print("3. 退出")

    while True:
        choice = input("\n请选择功能 (1/2/3): ")

        if choice == '1':
            octal_input = input("请输入八进制编码 (例如: \\345\\274\\200\\345\\247\\213): ")
            result = octal_to_utf8(octal_input)
            print(f"解码结果: {result}")

        elif choice == '2':
            text_input = input("请输入中文字符: ")
            result = utf8_to_octal(text_input)
            print(f"编码结果: {result}")

        elif choice == '3':
            print("感谢使用，再见！")
            break

        else:
            print("无效选择，请重新输入")


if __name__ == "__main__":
    main()