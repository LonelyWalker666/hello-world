#include<stdio.h>
#include<math.h>
int main(){double a,b;
	printf("����һ������\n");

	scanf("%lf",&a);
	printf("�����������\n");
	scanf("%lf",&b);
	bool x=fabs(a-b)<=1e-6;
	printf("%d",x);
	return 0;
} 
