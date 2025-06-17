# NXOPEN
Practice on NX secondary development（NX11、C++）

学习NX二次开发的程序记录，供自己以后参考用
  
#如有侵权，请联系删除

learn_nxopen文件夹下是学习的内容记录  
教程地址：https://www.bilibili.com/video/BV1nV411j7oU/  

NX官方文档地址
https://docs.sw.siemens.com/documentation/external/PL20190529153442596/en-US/nx/11/nx_api_sc/en_US/ugopen_doc/search.html
  一部分官方文档内容打印成pdf，在官方文档--帮助文件下  
  官方NXopen的示例程序以及官方的头文件之类在官方文档--程序与官方示例下  
  官方文档文件夹下内容与本项目无直接关系，仅作为资料收集使用（企图后续让大模型去学习）  
  

程序均在void MyClass::do_it()类中，其余由向导生成  

目录：  
L8：创建长方体  
L9：创建长方体、圆柱以及求和  
L10：创建点和直线，分配释放内存  
L13：创建圆锥、球体，用NX4以前的交互界面  
L15：指定点生成长方体，用NX6~10的交互界面，其中界面是由nx生成的，需要添加到头文件中#include "L15NX10UI.hpp"  
L17：链表创建练习，创建三根线围成三角形，并拉伸为体  
L18：查询对象的边、面，调用ask_feat系列函数（UF_MODL_ask_feat_edges、UF_MODL_ask_feat_faces）  （第08章02NX10二次开发之关于特征体对象面等之间的转换方法很重要）    
—————————————从该讲开始，写好备注，附加dll运行文件———————————  
L19：创建一个立方体，并对所有竖直边倒圆（对应视频第08章03）  
L20：向量操作，以及求两点直线距离（对应视频第08章05）（向量操作参考UF_VEC Functions）（矩阵操作参考UF_MTX Functions）  
L25：坐标系操作（函数参考UF_CSYS Functions）  
L27：在工作坐标系上创建一块（对应视频第08章11）  
L28：用户若将工作坐标系挪走可能会导致错误，该程序举了个例子，解决方案就是吧工作坐标系挪回原点（我觉得是）（对应视频第08章12）  
L29：创建圆弧（对应视频第08章13）  
L30：图层操作（对应视频第08章14）（函数参考UF_LAYER Functions）  
L32：遍历图层元素，实例：删除图层中所有内容（对应视频第08章16）  
L34：对象操作（设置相关set）（对应视频第08章18）（函数参考UF_OBJ Functions）   
L35：对象操作（获取相关ask）（对应视频第08章19）  
L36：表达式操作（对应视频第08章20）    
属性操作NX11更新了函数，老函数还能凑效  
L38：删除属性（函数参考UF_ATTR Functions）（对应视频第09章01）  
L39:创建属性（对应视频第09章02） （NX11的帮助文件写了UF_ATTR_set_user_attribute替代了UF_ATTR_assign，但是我试了试新的函数老是不成功，代码在注释里，不知道问题出在哪里。）  
L40：查找属性 （对应视频第09章03）   


暂时跳过   





  



