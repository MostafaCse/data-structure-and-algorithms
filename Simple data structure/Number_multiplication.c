//Number multiplication
#include<stdio.h>
int main ()
{
    int Number,i,Total;
    printf("enter ur x= ");
    scanf("%d",&Number);
    for(i=1; i<=10; i++){
        Total=Number*i;
        printf("%d*%d=%d\n",Number,i,Total);
    }
    return 0;
}
