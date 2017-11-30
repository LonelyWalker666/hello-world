#include<stdio.h>
int main(){
  int m,n,h=0,l=0;
  scanf("%d%d",&m,&n);
  int a[m][n];
  for(int i=0;i<m*n-1;i++){
  	a[h][l]=i;
  	if(h==0||h==m-1||l==0||l==n-1){
	if(h==0)//第一行向右移 
  	  {
  	   a[h][l+1]=i+1;
  	   i+=2;
  	   h++;
  	   a[h][l]=i;
  	   if(l-1>=0){
  	   h++;
  	   l--;
       }
       else
       l++;
  	  }
  	if(l==0)//第一列向下移
	  {
	  	a[h+1][l]=i+1;
	  	i+=2;
	  	l++;
	  	a[h][l]=i;
	  	if(h-1>=0){
	  	h--;
	  	l++;}
	  	else
	  	h++;
	  }
	if(h==m-1)//最后一行向右移
	 {
	 	l++;
	 	a[h][l]=i+1;
	 	i+=2;
	 	if(l+1<n){
	 	h--;
	 	l++;
	 	a[h][l]=i;}
	 	else{
	 	  ;
	 	}
	 }
    if(l==n-1)//最后一列向下移 
    {
    	h++;
    	a[h][l]=i+1;
    	i+=2;
    	h++;
    	l--;
    	a[h][l]=i;
    	if(h+1<m){
    	h++;
    	l--;}
    	else
    	  l++;
    }  
    }
    else{
    if((h+l)%2!=0){
      h++;
      l--;
    }
    if((h+l)%2==0){
      h--;
      l++;
    }
    }
  }
  for(int o=0;o<m;o++){
    for(int q=0;q<n;q++)
      printf("%d\t",a[o][q]);
    printf("\n");
}
  return 0;
}

