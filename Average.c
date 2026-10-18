#include<stdio.h>

int main(){
    int a; //int a, b, c;
    printf("enter 1st number : ");
    scanf("%d", &a);
    int b;
    printf("enter 2nd number : ");
    scanf("%d", &b);
    int c;
    printf("enter 3rd number : ");
    scanf("%d", &c);
    float average = (a + b + c) / 3.0;
    printf("average of 3 number is %f", average);
    return 0;
}