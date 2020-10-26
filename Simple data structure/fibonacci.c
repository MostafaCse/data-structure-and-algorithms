#include<stdio.h>
int fibonacci(int count);
int main()
{
  int n,count;
    printf("n= ");
    scanf("%d",&n);
   for(count=1; count<=n; ++count)
    printf("\ni=%d F=%d",count,fibonacci(count));
}
int fibonacci(int count)
{
    static int f1=1,f2=1;
    int f;
    f=(count<3)?1:f1+f2;
    f2=f1;
    f1=f;
    return(f);
}
