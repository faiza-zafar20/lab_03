#include<stdio.h>
int main(){
    char name[50];
    int age;
    float height;
    char grade;
    float CGPA;
    printf("enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("name: %s\n", name);
    printf("enter your age: ");
    scanf("%d", &age);
    printf("age: %d\n", age);
    printf("enter your height: ");
    scanf("%f", &height);
    printf("height: %.2f\n", height);
    printf("enter your grade: ");
    scanf(" %c", &grade);
    printf("grade: %c\n", grade);
    printf("enter your CGPA: ");
    scanf("%f", &CGPA);
    printf("CGPA: %f\n", CGPA);
    return 0;


}