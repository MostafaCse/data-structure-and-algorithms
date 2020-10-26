#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,X1,X2,X,M;
    printf("Enter the THREE values: \n");
    scanf("%lf%lf%lf", &a, &b, &c);

    M = b*b-4*a*c;

    if(M>0)
    {
        X1=(-b+sqrt(M))/(2*a);
        X2=(-b-sqrt(M))/(2*a);
        printf("Roots are %.2lf & %.2lf\n", X1,X2);
    }
    else if(M==0)
    {
        X= -b/(2*a);
        printf("Roots are %.2lf\n",X);
    }
    else
        printf("No real solution");
    return 0;
}
