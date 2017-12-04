#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int i,x,n;
    float y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x<-2)
        {
            y=pow(x,-2)*sin(x);
        }
        if((x>=-2)&&(x<=2))
        {
            y=x+pow(2,x);

        }
        if(x>2)
        {
            y=x*x+x+1;
        }
printf("%.2f",y);
    }

  return 0;
}
