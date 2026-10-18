//Print the number from 0 to n; if n is given by usear

#include<stdio.h>

int main () {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int i=0;
    while(i<=n) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}