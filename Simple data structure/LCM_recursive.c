#include <stdio.h>

int GCD(int a,int b)
{
    if(b!=0)
    {
        return GCD(b, a%b);
    }
    else
        return a;
}

int main()
{
    int N, i, j, L, n1, n2, k;


    while(1)
    {
        printf("How many integers? ");
        if(scanf("%d", &N) == EOF)
            return 0;

        printf("Enter the Integers: ");

        scanf("%d", &n1);

        for(i=2; i<=N; i++)
        {
            scanf("%d", &n2);

            if(n1 <= n2)
            {
                k=n1, j=n2;
            }

            else
            {
                k=n2, j=n1;
            }

            L=(n1*n2)/GCD(j,k);
            n1 = L;
        }
        printf("GCD : %d\n", L);
    }

    return 0;
}
