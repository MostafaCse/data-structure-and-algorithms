#include<stdio.h>
int main()
{
    int i,j,Data[30],Length_students,Count_pass=0;
    printf("how many students :\n");
    scanf("%d",&Length_students);
    printf("enter %d students marks :\n",Length_students);
    for(i=0; i<Length_students; i++)
    {
       scanf("%d",&Data[i]);
    }
    for(i=0; i<Length_students; i++)
    {
        if(Data[i]>=40)
        {
           Count_pass=Count_pass+1;
        }
    }
    printf("passing students number is: %d",Count_pass);
    return 0;
}
