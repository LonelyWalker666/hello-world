#include<stdio.h>
int weishu(int k);int func(int k);int sushu(int s);
int main (){
	int j,m,x=0,sum=0,max=0;
	for (int k=100;k<=9999;k++)
	{
		m=0;
		for(int i=2;i<=k-1;i++){
			if(k%i!=0)
			m++;
		}
		if(m==k-2){
		if(func(k)==1){
		j++;
		sum=sum+k;
		if(max<k)
		max=k;
		}
		}
	}
	printf("%d\n%d\n%d\n",j,sum,max);
	return 0;
}
int func(int k){
	int sum=0,prd=1,pfh=0;
	int n=weishu(k);
	int a[n];
	for(int i=0;i<n;i++){
		a[i]=k%10;
		k=k/10;
	}
	for(int l=0;l<=n-1;l++){
		sum+=a[l];
		prd=prd*a[l];
		pfh+=a[l]*a[l];
	}
	if(sushu(sum)==1&&sushu(prd)==1&&sushu(pfh)==1)
	return 1;
	else
	return 0;
}
int sushu(int s){
		int m=0;
		for(int i=2;i<=s-1;i++){
			if(s%i!=0)
			m++;
}
		if(m==s-2)
		return 1;
		else
		return 0;
}
int weishu(int k){
	int a=0;
	while(k!=0){
		k=k/10;
		a++;
	}
	return a;
}
