#include<stdio.h>
#include<math.h>
double cifang(double n,int m);
int main(){
	double a,y,x=1;
	int n;
	printf("��Ҫ�󼸴θ�\n");
	 scanf("%d",&n);
	 printf("��Ҫ���Ǹ�����%d�θ���\n",n);
	 scanf("%lf",&a);
	 if(n%2==0&&a<0)
	 printf("error��");
	 else{
	 while(x!=y){
	 	y=x;//���û���������������ѭ������Ϊ��������λ���Ĺ�ϵ��x��ÿ�μ���ֵ��һ������n�η���=a�� 
	 	x=(a-cifang(x,n))/(n*cifang(x,n-1))+x;
	 }
	 printf("���=\t%.2lf",x);
}
	 return 0;
} 
double cifang(double n,int m){
	double z=n;
	for(int i=1;i<m;i++)
	z=z*n;
	return z;}
