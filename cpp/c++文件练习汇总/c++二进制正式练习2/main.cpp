/*
int main( )
{
   student stud[3]={"Li",1001,18,'f',"Fun",1002,19,'m',"Wang",1004,17,'f'};
   ofstream outfile("stud.dat",ios::binary);
   if(!outfile)
   {
      cerr<<"open error!"<<endl;
      abort( );//ÍË³ö³ÌÐò
   }
   for(int i=0;i<3;i++)
      outfile.write((char*)&stud[i],sizeof(stud[i]));
      outfile.close( );
   return 0;






   #include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
#include <fstream>
using namespace std;
struct student
{
   char name[20];
   int num;
   int age;
   char sex;
};
int main( )
{
   student stud[3]={"Li",1001,18,'f',"Fun",1002,19,'m',"Wang",1004,17,'f'};
   ofstream outfile("stud.dat",ios::binary);
   if(!outfile)
   {
      cerr<<"open error!"<<endl;
      abort( );//退出程序
   }
   for(int i=0;i<3;i++)
      outfile.write((char*)&stud[i],sizeof(stud[i]));
      outfile.close( );
   return 0;
}
用成员函数write向stud.dat输出数据，从前面给出的write函数的原型可以看出： 第1个形参是指向char型常变量的指针变量buffer，之所以用const声明，是因为不允许通过指针改变其指向数据的值。形参要求相应的实参是字符指针或字符串的首地址。现在要将结构体数组的一个元素（包含4个成员）一次输出到磁盘文件stud.dat。&tud[i] 是结构体数组第i个元素的首地址，但这是指向结构体的指针，与形参类型不匹配。因此 要用(char *)把它强制转换为字符指针。第2个参数是指定一次输出的字节数。sizeof (stud[i])的值是结构体数组的一个元素的字节数。调用一次write函数，就将从&tud[i]开始的结构体数组的一个元素输出到磁盘文件中，执行3次循环输出结构体数组的3个元素。

其实可以一次输出结构体数组的个元素，将for循环的两行改为以下一行：
   outfile.write((char*)&stud[0],sizeof(stud));
执行一次write函数即输出了结构体数组的全部数据。

abort函数的作用是退出程序，与exit作用相同。

可以看到，用这种方法一次可以输出一批数据，效率较高。在输出的数据之间不必加入空格，在一次输出之后也不必加回车换行符。在以后从该文件读入数据时不是靠空格作为数据的间隔，而是用字节数来控制。

[例13.15] 将刚才以二进制形式存放在磁盘文件中的数据读入内存并在显示器上显示。
复制纯文本新窗口

#include <fstream>
using namespace std;
struct student
{
   string name;
   int num;
   int age;
   char sex;
};
int main( )
{
   student stud[3];
   int i;
   ifstream infile("stud.dat",ios::binary);
   if(!infile)
   {
      cerr<<"open error!"<<endl;
      abort( );
   }
   for(i=0;i<3;i++)
   infile.read((char*)&stud[i],sizeof(stud[i]));
   infile.close( );
   for(i=0;i<3;i++)
   {
      cout<<"NO."<<i+1<<endl;
      cout<<"name:"<<stud[i].name<<endl;
      cout<<"num:"<<stud[i].num<<endl;;
      cout<<"age:"<<stud[i].age<<endl;
      cout<<"sex:"<<stud[i].sex<<endl<<endl;
   }
   return 0;
}
#include <fstream>
using namespace std;
struct student
{
   char name[20];
   int num;
   int age;
   char sex;
};
}
#include<iostream>
#include<fstream>
using namespace std;
struct  one
{
    int num;
    string name;

}a[3];
int main()
{
    int i=0;
   struct one a[3]={11,"xie",12,"ne",3,"zheng"};
    ofstream out("save.txt",ios::binary);
    for(i=0;i<2;i++)
    {
        out.write((char*)&a[i],sizeof(a[i]));
    }
    out.close();
}

#include<iostream>
#include<fstream>
using namespace std;
struct  one
{
    int num;
    string name;

}a[3];
int main()
{
    int i=0;
   struct one a[3];
    ifstream in("save.txt",ios::binary);
   for(i=0;i<3;i++)
   {
   in.read((char*)&a[i],sizeof(a[i]));
    cout<<a[i].num<<a[i].name<<endl;

   }


   in.close();
}

#include<iostream>
#include <fstream>
using namespace std;
struct student
{
   char name[20];
   int num;
   int age;
   char sex;
};
int main( )
{
   student stud[3]={"Li",1001,18,'f',"Fun",1002,19,'m',"Wang",1004,17,'f'};
   ofstream outfile("stud.txt",ios::binary);
   if(!outfile)
   {
      cout<<"open error!"<<endl;

   }
   for(int i=0;i<3;i++)
      outfile.write((char*)&stud[i],sizeof(stud[i]));
      outfile.close( );
   return 0;
}
*/
#include<iostream>
#include <fstream>
using namespace std;
struct student
{
   char name[20];
   int num;
   int age;
   char sex;
};
int main( )
{
   student stud[3];
   ifstream in("stud.txt",ios::binary);
   if(!in)
   {
      cout<<"open error!"<<endl;

   }
   for(int i=0;i<3;i++)
   {
      in.read((char*)&stud[i],sizeof(stud[i]));
      cout<<stud[i].name<<stud[i].num<<stud[i].age<<stud[i].sex<<endl;
   }
      in.close( );
   return 0;
}


