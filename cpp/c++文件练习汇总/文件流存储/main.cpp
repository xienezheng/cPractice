#include <iostream>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
    vector<string>s;
    string save;
   ofstream out;
    out.open("D:\\save2.txt");
   if(out.is_open())
   {
    while(cin>>save&&save!="end")
    {
        out<<save;
    }
   }
   out.close();

}
/*pp] view plain copy print?
  // writing on a text file
 #include <fiostream.h>
 int main () {
     ofstream out("out.txt");
     if (out.is_open())
    {
         out << "This is a line.\n";
         out << "This is another line.\n";
         out.close();
     }
     return 0;
 }
//结果: 在out.txt中写入：
This is a line.
This is another line
从文件中读入数据也可以用与 cin>>的使用同样的方法：
[cpp] view plain copy print?
// reading a text file
   #include <iostream.h>
   #include <fstream.h>
   #include <stdlib.h>

   int main () {
       char buffer[256];
       ifstream in("test.txt");
       if (! in.is_open())
       { cout << "Error opening file"; exit (1); }
       while (!in.eof() )
       {
           in.getline (buffer,100);
           cout << buffer << endl;
       }
       return 0;
   }
   //结果 在屏幕上输出
    This is a line.
    This is another line*/
