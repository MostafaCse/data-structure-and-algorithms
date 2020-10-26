//prime or not prime
#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("enter ur number");
    scanf("%d",&n);
    for(i=2; i<=n/2; i++){
        if(n%i==0){
          flag=1;
          break;
        }
    }
if(flag==0)
    printf("ur number is prime");
    else
          printf("ur number isnot prime");
    return 0;
}
