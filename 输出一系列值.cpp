#include<stdio.h>

int main()
  {
	int x=2.2;
	short y=0x7fff;
	short z=0xffff;
	unsigned short w=0xffff;
	float u=0.177;
	double m= 1.7e+308; 
	printf("%d\t%d\t%d\t%d\t%f\n%lf",x,y,z,w,u,m);
	return 0;
  }
