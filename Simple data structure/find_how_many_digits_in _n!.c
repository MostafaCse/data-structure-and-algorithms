#include<stdio.h>
int main()
{
    int Number,i,Count=0;
    unsigned long long int Sum=1;
    printf("enter the factorial number:\n");
    scanf("%d",&Number);

    for(i=1; i<=Number; i++)
    {
        Sum=Sum*i;
    }
   // printf("%ulld\n",sum);

    i=0;
    while(Sum!=0)
    {
        Sum=Sum/10;
        Count++;
        i++;
    }
    printf("%d digits in the %d!",Count,Number);

    return 0;
}
