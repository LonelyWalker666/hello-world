#include<stdio.h>
int func();
int main(){
	printf("������һ������\n");
	func();
	return 0;
} 

int func(){
	int a;
	double x;
	scanf("%lf",&x);
	a=x;
	int z=x-a>0.5?a+1:a;
	printf("%d",z);
	return 0;
}
