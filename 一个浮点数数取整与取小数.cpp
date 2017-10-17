#include<stdio.h>
int func(float a);
int main(){
	float a;
	scanf("%f",&a);
	func(a);
  return 0;
}

int func(float a){ 
  int z=a;
   double x=a-z;
   printf("%d\n%lf",z,x);
   return 0;
}
