#include<stdio.h>
int main(){
	int x=2.2;
	short y=0x7fff;
	short z=0xffff;
	unsigned short w=0xffff;
	float u=0.177;
	double n=1.79769e+038;
	double m=2.22507e-308;
	printf("%d\n%d\n%d\n%d\n%f\n%f\n%f",x,y,z,w,u,n,m);
	return 0;
} 
