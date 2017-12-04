#ifndef PEOPLE_H
#define PEOPLE_H
#include<stdio.h>
class people
{

    int num;
    char name[10];
public:
    void setnum(int x);
    void setname(char *);
    int getnum()
    {
    return(num);
    }
    void display()
    {
        printf("%s",name);
    }
    char *getname()
    {
        return((char *)name);
    }
    people(char *s);

};

#endif // PEOPLE_H
