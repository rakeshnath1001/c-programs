#include<stdio.h>
int main()
{
    int a,b,c;
    printf("input length of three sides of the triangle");
    scanf("%u %u %u",&a,&b,&c);
    if (a+b>c && b+c>a && c+a>b){
     printf("%u %u and %u are valid length of three sides of a triangle",a,b,c);
      if(a==b && b==c)
      printf("\n equilateral triangle");
         else if("a==b || b==c || c==a")
         printf("\n isosceles triangle");
          else
          printf("\n scalene triangle");
           if("a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b")
           printf("\n right angle triangle");
    }
    else printf("%u %u and %u are not valid length of threevsides of of a triangle",a,b,c);
    return 0;
}