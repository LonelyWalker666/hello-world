#include<stdio.h>
double func(double x,double y);
int main(void)
{double a=100,b,p;
printf("����һ��ֵ:");
scanf("%lf",&b);
p=func(a,b);
printf("�����%lf.\n",p);
return 0;
}
double func(double x,double y){double z;
z=(x+y)*(x-y);
return z;
} 
