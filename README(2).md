a.项目简介及其相关用法
本程序通过读取文本文档实现了以下功能
wc.exe -c(文件路径) 显示文件字符数
wc.exe -l(文件路径) 显示文件行数
wc.exe -w(文件路径) 显示文件单词数
wc.exe -a(文件路径) 显示文件空行数，代码行数，注释行数

并且以生成result.txt的文本文档的形式显示结果

b.文件列表及其相关说明
t1.txt    测试文件1；
t2.txt    测试文件2；
t3.txt    测试文件3；
wc.exe    功能文件；

c.例程运行及其相关结果（单元测试）
测试一：
测试文件：t1.txt
I have a dream!
I have a dream!
I have a dream!
I have a dream!

命令行：wc.exe -c C:\Users\lenovo\Desktop\t1.txt
测试结果：
字符数：62

命令行：wc.exe -m C:\Users\lenovo\Desktop\t1.txt
测试结果：no function

命令行：wc.exe -c C:\Users\lenovo\Desktop\t.txt
测试结果：file read failure.

命令行：wc.exe -l C:\Users\lenovo\Desktop\t1.txt
测试结果：
总行数：4

命令行：wc.exe -l C:\Users\lenovo\Desktop\t.txt
测试结果：file read failure.

命令行：wc.exe -w C:\Users\lenovo\Desktop\t1.txt
测试结果：
单词数：16

命令行：wc.exe -w C:\Users\lenovo\Desktop\t.txt
测试结果：file read failure.

命令行：wc.exe -a C:\Users\lenovo\Desktop\t1.txt
测试结果：
代码行：4
空行：0
注释行：0

命令行：wc.exe -a C:\Users\lenovo\Desktop\t.txt
测试结果:file read failure.

测试二：
测试文件：t2.txt
//三个数比较大小
#include<iostream>
using namespace std;
int main()
{
int result,max( int x ,int y, int z);//对max函数做声明
int a,b,c;
cout<<"a="<<endl;
cin>>a;
cout<<"b="<<endl;
cin>>b;
cout<<"c="<<endl;
cin>>c;
result=max(a,b,c);
cout<<"max="<<result<<endl;
return 0;
}
int max(int x,int y, int z)//定义max函数
{
 int m;
 if (x>=y)
 {
   if (x>=z)
	   m=x;
   else 
	   m=z;
 }
 else
 {
   if(y>=z)
	   m=y;
   else
	   m=z;
 }
 return m;
}
命令行：wc.exe -c C:\Users\lenovo\Desktop\t2.txt
测试结果：
字符数：443

命令行：wc.exe -c C:\Users\lenovo\Desktop\t.txt
测试结果：file read failure.

命令行：wc.exe -l C:\Users\lenovo\Desktop\t2.txt
测试结果：
总行数：36

命令行：wc.exe -l C:\Users\lenovo\Desktop\t.txt
测试结果：file read failure.

命令行：wc.exe -w C:\Users\lenovo\Desktop\t2.txt
测试结果：
单词数：114

命令行：wc.exe -w C:\Users\lenovo\Desktop\t.txt
测试结果：file read failure.

命令行：wc.exe -a C:\Users\lenovo\Desktop\t2.txt
测试结果：
代码行：31
空行：8
注释行：3

命令行：wc.exe -a C:\Users\lenovo\Desktop\t.txt
测试结果：file read failure.

测试文件三：t3.txt
//类与函数引用
#include <iostream>
using namespace std;
class Time
{
public:
	int hour;
	int minute;
	int sec;

};
int main()
{
 void settime(Time&t);          //函数声明
 void showtime(Time&t);         //函数声明
 Time t1;                      //定义t1为Time类对象
 settime(t1);                  //调用settime函数，向t1对象中的数据成员输入数据
 showtime(t1);                 //调用showtime函数，输出t1对象中的数据
 Time t2;
 settime(t2);
 showtime(t2);
 return 0;
}
void settime(Time&t)           //定义函数settime，形参t是引用变量
{
 cin>>t.hour;     
 cin>>t.minute;
 cin>>t.sec;
}
void showtime(Time&t)
{
cout<<t.hour<<":"<<t.minute<<":"<<t.sec<<endl;
}
命令行：wc.exe -c C:\Users\lenovo\Desktop\t3.txt
测试结果：
字符数：656

命令行：wc.exe -c C:\Users\lenovo\Desktop\t.txt
测试结果：file read failure.

命令行：wc.exe -l C:\Users\lenovo\Desktop\t3.txt
测试结果：
总行数：32

命令行：wc.exe -l C:\Users\lenovo\Desktop\t.txt
测试结果：file read failure.

命令行：wc.exe -w C:\Users\lenovo\Desktop\t3.txt
测试结果：
单词数：174

命令行：wc.exe -w C:\Users\lenovo\Desktop\t.txt
测试结果：file read failure.

命令行：wc.exe -a C:\Users\lenovo\Desktop\t3.txt
测试结果：
代码行：24
空行：9
注释行：7

命令行：wc.exe -a C:\Users\lenovo\Desktop\t.txt
测试结果：file read failure.