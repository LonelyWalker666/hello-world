#include<stdio.h>
#include<math.h>
int main(){double a,b;
	printf("输入一号数：\n");

	scanf("%lf",&a);
	printf("输入二号数：\n");
	scanf("%lf",&b);
	bool x=fabs(a-b)<=1e-6;
	printf("%d",x);
	return 0;
} 
