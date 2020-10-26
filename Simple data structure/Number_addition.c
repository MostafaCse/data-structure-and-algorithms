//Number addition
#include<stdio.h>
int main()
{
    int Number,Digit,Sum=0;
    printf("enter ur number :");
    scanf("%d",&Number);
    while(Number!=0){
        Digit=Number%10;
        Sum=Sum+Digit;
        Number=Number/10;
    }
printf("the sum is %d",Sum);
return 0;
}
