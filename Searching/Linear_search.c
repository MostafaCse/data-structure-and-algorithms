#include<stdio.h>
int main()
{
    int i,Data[20],Length_data,Item,Location=0,Count=0;
    printf("how many data do u enter :\n");
    scanf("%d",&Length_data);
     for(i=1; i<=Length_data; i++)
     {
         scanf("%d",&Data[i]);

     }
     printf("enter which number do u want to search :\n");
     scanf("%d",&Item);

     for(i=1; i<=Length_data; i++)
     {
         if(Data[i]==Item)
         {
             Location=i;
             Count=1;
             break;
         }
     }
     if(Count==1)
        printf("search sucessful\n the position of number is %d",Location);
     else
        printf("item not found\n");


     return 0;
}
