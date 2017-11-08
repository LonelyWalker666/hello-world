#include<stdio.h>
int main(){
	int year;
	int x,y,z;
	printf("请输入年份：");
	scanf("%d",&year);
	if(year%100==0){
		if(year%400==0)
		printf("这一年是闰年");
		else
		printf("这一年是平年");
	}
	else{
		if(year%4==0)
		printf("这一年是闰年\n");
		else
		printf("这一年是平年\n");
	}
	return 0;
} 
