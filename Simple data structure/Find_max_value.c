#include<stdio.h>
int main()
{
    int Values,Data[30],Max_number,i,j;
    printf("how many value do u want:\n ");
    scanf("%d",&Values);
    printf("enter u %d values :\n",Values);
    i=0;
    while(i<Values)
    {
        scanf("%d",&Data[i]);
        i++;
    }
    Max_number=Data[i];
    for(j=1; j<Values; j++)
    {
        if(Max_number<Data[j])
        {
            Max_number=Data[j];
        }

    }
    printf("the largest value is: %d\n",Max_number);
    return 0;
}

