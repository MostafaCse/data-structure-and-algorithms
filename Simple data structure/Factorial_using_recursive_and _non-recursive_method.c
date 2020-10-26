#include <stdio.h>

int factorial(int Number)        ///Recursive factorial function
{
    int Total=1;

    if (Number == 0)
        return Total;

    Total = factorial(Number-1);
    Total = Number * Total;
}

int main()
{
    int Number, i, Total=1;

    printf("Enter the number: ");
    scanf("%d", &Number);

    i=Number;
    while (i != 0)          ///Non-Recursive Method
    {
        Total = Total * i;
        i--;
    }

    printf("%d! = %d\n", Number, Total);

    Total = factorial(Number);        ///Recursive Method

    printf("%d! = %d\n", Number, Total);

    return 0;
}
