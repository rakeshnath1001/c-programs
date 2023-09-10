#include<stdio.h>
float area(float radius){
    const float pi=3.14;
   float Area= pi*radius*radius;
   return Area;
}
int main(){
    float radius;
    printf("entwer the radius of the circle");
    scanf("%f",&radius);
    float Area= area(radius);
    printf("the area of thge circle is %f",Area);
    return 0;
}
    