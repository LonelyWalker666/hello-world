#include<stdio.h>
int main(){
	int year;
	int x,y,z;
	printf("��������ݣ�");
	scanf("%d",&year);
	if(year%100==0){
		if(year%400==0)
		printf("��һ��������");
		else
		printf("��һ����ƽ��");
	}
	else{
		if(year%4==0)
		printf("��һ��������\n");
		else
		printf("��һ����ƽ��\n");
	}
	return 0;
} 
