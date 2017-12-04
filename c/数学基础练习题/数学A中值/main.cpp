#include <iostream>
#include<algorithm>
#include<vector>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
    vector<float>v;
    int n,i,j;
    float temp,val;
    while((scanf("%d",&n))!=EOF)
    {
    if(n%2==0)
    {
    for(i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    val=(v[n/2]+v[n/2-1])/2;
    printf("%.2f\n",val);
    v.clear();
    }
    if(n%2!=0)
    {
        for(i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
     sort(v.begin(),v.end());
     j=n-1;
     val=v[j/2];
      printf("%.2f\n",val);
     v.clear();
    }
    }
    return 0;
}

