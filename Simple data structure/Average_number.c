// Average number
#include<stdio.h>
int main ()
{
int i,Sum=0,Number;
float Average;
for(i=0; i<8; i++){
printf("enter ur numbers :");
scanf("%d",&Number);
Sum=Sum+Number;
}
Average=Sum/7;
printf("the sum is=%d\nthe average is=%0.2f",Sum,Average);
return 0;
}
