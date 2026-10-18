#include<stdio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if(num>=0){
        printf("Number is positive");
        if(num % 2 == 0){
            printf(" and even");
        }
        else{
            printf(" and odd");
        }
    }
    else{
        printf("Number is negative");
    }
}