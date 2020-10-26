#include<stdio.h>
int main()
{
  int Data[30],Temp,j,Length_data,ptr,i;

    printf("how many numbers\n");
    scanf("%d",&Length_data);

    printf("\nenter %d number\n",Length_data);
    for(j=0; j<Length_data; j++)
    {
      scanf("%d",&Data[j]);
    }

    for(j=1; j<=Length_data-1; j++)
    {

        Temp=Data[j];
        ptr=j-1;
           while((Temp<Data[ptr]) && (ptr>=0))
            {
            Data[ptr+1]=Data[ptr];
            ptr=ptr-1;
            }

       Data[ptr+1]=Temp;
    }
    for(j=0; j<Length_data; j++)
    {
        printf("%d\t",Data[j]);
    }

    return 0;
}

