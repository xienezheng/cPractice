#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;



class student
{
    int num;
    string name;
    char sex;
public:
   student(int n=1,string m="s",char s='m');//Ĭ�Ϻ���Ҫȫ

    void display();


};
#endif // STUDENT_H
