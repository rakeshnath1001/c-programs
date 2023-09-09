#include <stdio.h>

int main() {
    int price, discount, discountvalue, totalprice, totalvalue;

    printf("Enter the price: ");
    scanf("%d", &price);

    printf("Enter the discount value: ");
    scanf("%d", &discount);

    discountvalue = (discount * price) / 100;  

    printf("The discount value is: %d\n", discountvalue);

    totalvalue = price - discountvalue;

    printf("The total price is: %d\n", totalvalue);
    
    return 0;
}