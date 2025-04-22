#include<stdio.h>
#include<limits.h>

int arr[100];
int mcm(int i,int j);
int main(){
int n;
  printf("Enter the no of array");
  scanf("%d",&n);
  printf("enter the sizes of array");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  
  printf("%d",mcm(1,n-1));
}

int mcm(int i,int j){
   if(i==j){
     return 0;
     }
     int min=INT_MAX;
     for(int k=j;k<j;k++)
       {
       int val=mcm(i,k)+mcm(k+1,j)+(arr[i-1]*arr[k]*arr[j]);
       printf("VALUE- %d\n",val);
        if(val<min){
           min=val;
            printf("MIN -%d\n",min);
          }
        }
       return min;
       } 
