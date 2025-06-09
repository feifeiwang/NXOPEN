# NXOPEN
Practice on NX secondary development（NX11、C++）

学习NX二次开发的程序记录，供自己以后参考用

learn_nxopen文件夹下是学习的内容记录  
教程地址：https://www.bilibili.com/video/BV1nV411j7oU/  
NX官方文档地址（需安装NX，该版本为NX11）
https://docs.sw.siemens.com/documentation/external/PL20190529153442596/en-US/nx/11/nx_api_sc/en_US/ugopen_doc/search.html


程序均在void MyClass::do_it()类中，其余由向导生成  

目录：  
L8：创建长方体  
L9：创建长方体、圆柱以及求和  
L10：创建点和直线，分配释放内存  
L13：创建圆锥、球体，用NX4以前的交互界面  
L15：指定点生成长方体，用NX6~10的交互界面，其中界面是由nx生成的，需要添加到头文件中#include "L15NX10UI.hpp"  
L17：链表创建练习，创建三根线围成三角形，并拉伸为体  
L18：查询对象的边、面，调用ask_feat系列函数（UF_MODL_ask_feat_edges、UF_MODL_ask_feat_faces）  （第08章02NX10二次开发之关于特征体对象面等之间的转换方法很重要）    
————————————————————————
L19：创建一个立方体，并对所有竖直边倒圆（对应视频第08章03）  



