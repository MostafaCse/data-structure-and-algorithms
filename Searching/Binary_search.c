//Binary searching
#include<stdio.h>
int main()
{
    int Mid,i,SearchNumber,Elements[100],b=1,ArrayNumbers;

    printf("Enter how many elements in the array:\n ");
    scanf("%d", &ArrayNumbers);

    printf("Enter array elements(sorted):\n ");
    for(i=1; i<=ArrayNumbers; i++)
    {
        scanf("%d", &Elements[i]);
    }

    Mid=(b+ArrayNumbers)/2;
    printf("Enter a number to search: ");
    scanf("%d", &SearchNumber);
    while(b<=ArrayNumbers && Elements[Mid] != SearchNumber)
    {
        if(SearchNumber<Elements[Mid])
        {
            ArrayNumbers=Mid-1;
        }
        else
        {
            b=Mid+1;
        }
        Mid=(b+ArrayNumbers)/2;
    }
    if(Elements[Mid]==SearchNumber)
    {
        printf("%d found at index %d\n",SearchNumber,Mid);
    }
    else
    {
        printf("Item not found\n");
    }
    return 0;
}
