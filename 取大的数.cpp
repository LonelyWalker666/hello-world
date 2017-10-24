#include<stdio.h>
int main(){
	double a , b;
	printf("输入一号数：\n");
	scanf("%lf",&a);
	printf("输入二号数：\n");
	scanf("%lf",&b);
	double x=a>b?a:b;
	printf("%lf",x);
	return 0;
} 
