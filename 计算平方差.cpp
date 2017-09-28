#include<stdio.h>
double func(double x,double y);
int main(void)
{double a=100,b,p;
printf("输如一个值:");
scanf("%lf",&b);
p=func(a,b);
printf("结果是%lf.\n",p);
return 0;
}
double func(double x,double y){double z;
z=(x+y)*(x-y);
return z;
} 
