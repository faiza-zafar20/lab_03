#include<stdio.h>
int main() {
    char name[50];
    int age;
    char city[50];
    printf("enter your name: ");
    fgets(name, 50, stdin);
    printf("name:%s\n", name);
    printf("enter your age: ");
    scanf("%d", &age);
    printf("age:%d\n", age);
    getchar();
    printf("enter your city: ");
    fgets(city, 50, stdin);
    printf("city:%s", city);
    return 0;

}