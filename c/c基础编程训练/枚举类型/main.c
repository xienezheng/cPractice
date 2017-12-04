#include <stdio.h>
#include <stdlib.h>

int main()
{
   enum color{red,yellow,blue,white,black};
   enum color i,j,k,t;
   int n=0,h;
   for(i=red;i<=black;i++)
   {
       for(j=red;j<=black;j++)
       {
           if(i!=j)
           {
               for(k=red;k<=black;k++)
               {
                   if((k!=i)&&(k!=j))
                   {
                       n++;
                       printf("%5d",n);
                       for(h=1;h<=3;h++)
                       {
                           switch(h)
                           {
                               case 1:t=i;break;
                               case 2:t=j;break;
                               case 3:t=k;break;
                               default:break;
                           }
                           switch(t)
                           {
                               case red:printf("%10s","red");break;
                               case yellow:printf("%10s","yellow");break;
                               case blue:printf("%10s","blue");break;
                               case white:printf("%10s","white");break;
                               case black:printf("%10s","black");break;
                               default:break;
                           }
                       }
                       printf("\n");
                   }
               }
           }
       }
       return 0;
   }



}
