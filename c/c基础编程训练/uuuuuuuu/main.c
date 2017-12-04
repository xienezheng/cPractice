#include <stdio.h>
#include <math.h>
#define PI 3.1415
int main()
{
	float a,b,c,d,x,A;
    scanf("%f%f%f",&b,&c,&A);
    x=(A*PI)/180;
	d=cos(x);
    a=sqrt(b*b+c*c-2*b*c*d);
	printf("a=%f\n",a);
	return 0;
}
