#include<stdio.h>
int main(){
	double a , b;
	printf("����һ������\n");
	scanf("%lf",&a);
	printf("�����������\n");
	scanf("%lf",&b);
	double x=a>b?a:b;
	printf("%lf",x);
	return 0;
} 
