#include<stdio.h>
#include<math.h>
double cifang(double n,int m);
int main(){
	double a,y,x=1;
	int n;
	printf("你要求几次根\n");
	 scanf("%d",&n);
	 printf("你要求那个数的%d次根？\n",n);
	 scanf("%lf",&a);
	 if(n%2==0&&a<0)
	 printf("error！");
	 else{
	 while(x!=y){
	 	y=x;//如果没有这里，则可能造成死循环。因为由于数字位数的关系，x的每次计算值都一样，但n次方后不=a。 
	 	x=(a-cifang(x,n))/(n*cifang(x,n-1))+x;
	 }
	 printf("结果=\t%.2lf",x);
}
	 return 0;
} 
double cifang(double n,int m){
	double z=n;
	for(int i=1;i<m;i++)
	z=z*n;
	return z;}
