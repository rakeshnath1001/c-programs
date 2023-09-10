#include<stdio.h>
int max(int a, int b) {
    if (a>b) {
    return a;
    }
    else {
        return b;
    } 
}
int main (){
    int x,y,z;
    printf("enter the two number ");
    scanf("%d%d", &x,&y);

    z=max(x,y);
    printf("the result is %d", z);
    return 0;
}
