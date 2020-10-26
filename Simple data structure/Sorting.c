
#include<stdio.h>
void reorder(int n, int Data[])
{
    int i, Item, Temp;
    for(Item=1; Item< n; Item++)
    {
        for(i=Item+1; i<= n; i++)
        {
            if(Data[i] < Data[Item])
            {
                Temp = Data[Item];
                Data[Item] = Data[i];
                Data[i] = Temp;
            }
        }
    }
    return;
}

int main()
{
    int i,Length_number,Data[100];
    printf("How many numbers to sort?\n");
    scanf("%d", &Length_number);
    printf("Enter the numbers: ");
    for(i=1; i<=Length_number; i++)
    {
        scanf("%d", &Data[i]);
    }
    reorder(Length_number,Data);
    printf("Numbers after sorting: ");
    for(i=1; i<=Length_number;i++)
    {
        printf("%d ", Data[i]);
    }
}


