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


    printf("enter the postion :\n");
    scanf("%d",&Position);
      Item=Data[Position];
     printf("%d is delete\n",Item);
    for(j=Position; j<=Numbers; j++)
    {
        Data[j]=Data[j+1];
    }

        Numbers--;

            printf("outputs :\n");
    for(i=1; i<=Numbers; i++)
    {
        printf("%d\t",Data[i]);
    }


        return 0;
}

