#include<stdio.h>
// function to check if a number is prime 
int isprime(int a){
int i;
for(i=2;i<a;i++)
   if (a%i==0)
   return 0; // not prime if divisible by any number from 2
   else
   return 1; // prime otherwise
}
// function to display prime numbers in a given range
void displayprime(int start,int end){
    printf("prime numbers between %d and %d are:\n",start,end);
    for (int i= start;i<=end;i++)
       if (isprime(i))
        printf("%d\n",i);

}
// main function
int main(){
    int start,end;
    printf("Enter the range:");
    scanf("%d %d",&start,&end);
    displayprime(start,end);
    return 0;


}




