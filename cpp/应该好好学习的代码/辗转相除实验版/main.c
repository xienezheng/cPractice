#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
  int t=1,o,i,j,k=0,m,n,h;

  while(scanf("%d",&m)&&m!=0)
  {
      for(j=m;j<1000;j++)
      {
  o=n=j;t=1;k=0;h=0;
  while(n>0)
  {
      n=n/10;
      k++;
  }

  for(i=1;i<k;i++)
  {
      t=t*10;
  }

  for(i=0;i<k;i++)
  {
      a[i]=o/t;
      o=o%t;
      t=t/10;
  }
  printf("%d",k);


}
  }
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
  int t=1,i,j,k=0,m,n;
  scanf("%d",&m);
  n=m;
  while(m>0)
  {
      m=m/10;
      k++;
  }
m=n;
  for(i=1;i<k;i++)
  {
      t=t*10;
  }

  for(i=0;i<k;i++)
  {
      a[i]=m/t;
      m=m%t;
      t=t/10;
      printf("%5d\n",a[i]);

  }
}

