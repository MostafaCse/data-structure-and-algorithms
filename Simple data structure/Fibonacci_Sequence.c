#include <stdio.h>

int fibonacci(int TermNumber)        ///Recursive function
{
    int Total=1;

    if (TermNumber<2)
        return TermNumber;

    Total= fibonacci(TermNumber-2) + fibonacci(TermNumber-1);

    return Total;
}

int main()
{
    int TermNumber, Temp_1=0, Temp_2, i, Total=1;

    printf("Enter the n'th term: ");
    scanf("%d", &TermNumber);

    if (TermNumber<2)
        Total = TermNumber;

    else
    {
        for (i=2; i<=TermNumber; i++)        ///Iterative Method
        {
            Temp_2=Total;
            Total = Total +Temp_1;
            Temp_1=Temp_2;
        }
    }
    printf("%d\n", Total);




    Total = fibonacci(TermNumber);         ///Recursive Method
    printf("%d\n", Total);


    return 0;
}
