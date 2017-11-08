#include<stdio.h>
int main (){
	double x,y,z;
	scanf("%lf%lf%lf",&x,&y,&z);
	if(x>y){
		if(x>z){
			if(y>z)
			printf("%lf\t%lf\t%lf",x,y,z);
			else
			printf("%lf\t%lf\t%lf",x,z,y); 
		}
		else
		printf("%lf\t%lf\t%lf",z,x,y);	
		}
		else{if(z>y)
		printf("%lf\t%lf\t%lf",z,y,x);
		else{
			if(x>z)printf("%lf\t%lf\t%lf",y,x,z);
			else printf("%lf\t%lf\t%lf",y,z,x);
		}
		}
		
		
	}

