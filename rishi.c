#include<stdio.h>
int main()
{
    int n,i;
    printf("input a number");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0){
   printf("factor is %d\n",i);
        }
    }
   return 0; 
 }