#include<stdio.h>
int main()
{
    int i,j,Position,Numbers,Item,Data[20];
    printf("how many numbers :");
    scanf("%d",&Numbers);


    printf("insert data :\n");
    for(i=1; i<=Numbers; i++)
    {
        scanf("%d",&Data[i]);
    }


    printf("enter the number and postion :\n");
    scanf("%d%d",&Item,&Position);


    for(j=Numbers; j>=Position; j--)
    {
        Data[j+1]=Data[j];
    }
        Data[Position]=Item;
        Numbers++;

            printf("outputs :\n");
    for(i=1; i<=Numbers; i++)
    {
        printf("%d\t",Data[i]);
    }


        return 0;
}
