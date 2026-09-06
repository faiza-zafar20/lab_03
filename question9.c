#include<stdio.h>

int main(){
    char name[50];
    int quantity;
    float price;

    printf("enter product name: ");
    fgets(name, sizeof(name), stdin);
    printf("product name is: %s", name);

    printf("enter product quantity: ");
    scanf("%d", &quantity);
    printf("product quantity is: %d\n", quantity);
    
    printf("enter product price: ");
    scanf("%f", &price);
    printf("product price is: %.2f\n", price);
return 0;
}