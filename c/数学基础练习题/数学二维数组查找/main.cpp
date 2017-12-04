#include <iostream>
#include<stdio.h>
using namespace std;
 int i,j,m,n,k,l,cnt;
void hanshu(int a[100][100],int k)
{
    for(i=0;i<=m-1;i++)
      {
          for(j=0;j<=n-1;j++)
          {
              if(a[i][j]==k)
              {
                  cout<<"Yes"<<endl;
                  break;
              }

          }
      }
      cnt=0;
      for(i=0;i<=m-1;i++)
      {
          for(j=0;j<=n-1;j++)
          {
              if(a[i][j]!=k)
              {
                  cnt++;
              }

          }

      }
        if(cnt==m*n)
      {
          cout<<"No"<<endl;
      }

}
int main()
{
  int a[100][100];

  while(scanf("%d%d",&m,&n)!=EOF)
  {
      cin>>k;
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              cin>>a[i][j];
          }
      }
      hanshu(a,k);


  }
}








