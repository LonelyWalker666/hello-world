#include<stdio.h>
int func(double a,double b,double c,double d,double e,double f );
int main(){
	double a,b,c,d,e,f;
	printf("ax+by=c\ndx+ey=f\n����������a,b,c,d,e,f��ֵ");
	scanf("%lf\n%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&e,&f);
	func(a,b,c,d,e,f); 
	return 0;
} 
int func(double a,double b,double c,double d,double e,double f){
	double x=(e*c-b*f)/(e*a-b*d);
	double y=(d*c-a*f)/(b*d-a*e);
	printf("%lf\n%lf",x,y);
	return 0;
}
