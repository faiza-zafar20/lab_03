#include<stdio.h>
int main() {
    int age;
    float height;
    char grade;
    printf("enter you age:");
    scanf("%d", &age);
    printf("age:%d\n", age);
    printf("enter your height: ");
    scanf("%f", &height);
    printf("height:%f\n", height);
    getchar();
    printf("enter your grade: ");
    scanf("%c", &grade);
    printf("grade:%c", grade);
    return 0;
}