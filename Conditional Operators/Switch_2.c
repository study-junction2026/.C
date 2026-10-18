#include<stdio.h>

int main(){
    char day;
    printf("Enter day (1-7) : ");
    scanf("%s", &day);

    switch(day){
        case 'S': printf("Sunday");//case 'Su': printf("Sunday"); -> warning: multi-character character constant [-Wmultichar]
        break;
        case 'M': printf("Monday");
        //break;
        case 'T': printf("Tueday");
        break;
        case 'W': printf("Wednesday");
        break;
        case 't': printf("Thuday");
        break;
        case 'F': printf("Friday");
        break;
        case 's': printf("Saturday");
        break;
        default:printf("Not a valid day");
        
    }
}