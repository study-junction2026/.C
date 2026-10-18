#include<stdio.h>

int main(){
    int x;
    printf("Enter age : ");
    scanf("%d", &x);
    x>=18 ? printf("Adult") : printf("not adult");
}