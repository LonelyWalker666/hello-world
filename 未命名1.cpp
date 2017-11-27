#include<stdio.h>
int main(){
  int m,n;
  scanf("%d%d",&m,&n);
  int k=0,j=0,a[m][n];
  for(int i=0;i<m*n;i++){
    a[j][k]=i+1;
    if(k%2==0&&j==0&&k+1<n)
      k++;
    if(j%2!=0&&k==0&&j+1<m)
      j++;
    if(j==m-1&&m%2==0&&j%2==0&&k+1<n)
      k++;
    if(k==n-1&&n%2==0&&k%2!=0&&j+1<m)
      j++;
    if(j==m-1&&m%2!=0&&j%2!=0&&k+1<n)
      k++;
    if(k==n-1&&n%2!=0&&k%2==0&&j+1<m)
      j++;
    if(k%2!=0&&j==0){
      j++;
      k--;
    }
    if(k==0&&j%2==0&&j-1>=0){
      j--;
      k++;
    }
    if(n%2==0&&j%2==0&&k==n-1){
      j++;k--;
    }
    if(n%2!=0&&j%2!=0&&k==n-1&&j+1<m){
      j++;k--;
    }
    if(j==m-1&&m%2==0&&k%2!=0&&k+1<n){
      j--;k++;
    }
    if(j==m-1&&m%2!=0&&k%2==0&&k+1<n){
      j--;k++;
    }
    if(j!=0&&j!=m&&k!=0&&k!=n)
      if((j+k)%2==0){
      	j--;k++;
      }
      else{
      	j++;k--;
      }
  }
  for(int i=0;i<m;i++){
    for(int q=0;q<n;q++){
      printf("%d ",a[i][q]);
    }
    printf("\n");
}
  return 0;
}
