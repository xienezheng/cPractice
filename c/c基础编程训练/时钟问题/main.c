#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float g,a,b,c,d,e,t=1,k=12,h=t/k;
int n;

    while((scanf("%f%f%f",&a,&b,&c))!=EOF)
    {
        d=(c/60+b)*6;
        if((a<12)&&(a>0))
        {
            e=30*a+h*d;
        }
        if((a>=12)&&(a<24))
           {
               e=(a-12)+d/12;
           }
           if((a==24)&&(a==0))
            {
                e=d/12;
            }
            if(d>=e)
            {
                g=d-e;
            }
            if(d<e)
            {
            g=e-d;
            }
            if(g>180)
            {
                g=360-g;
            }
n=(int)(g);
            printf("%d\n",n);
    }
    return 0;
}
