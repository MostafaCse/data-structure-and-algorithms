#include<stdio.h>
int main()
{
    int Data[30],k,Temp,Loc,min,j,Length_data;

     printf("how many numbers\n");
    scanf("%d",&Length_data);
    printf("enter %d number\n",Length_data);
    for(k=0; k<Length_data; k++)
    {
      scanf("%d",&Data[k]);
    }

    for(k=0; k<Length_data; k++)
    {
        min=Data[k];
        Loc=k;
        for(j=k+1; j<Length_data; j++)
        {
            if(min>Data[j])
            {
                min=Data[j];
                Loc=j;
            }
        }
        Temp=Data[k];
        Data[k]=Data[Loc];
        Data[Loc]=Temp;
    }
     for(k=0; k<Length_data; k++)
    {
        printf("%d\t",Data[k]);
    }

    return 0;
}
