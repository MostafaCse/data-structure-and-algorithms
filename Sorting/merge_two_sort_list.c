#include<stdio.h>
int main()
{
    int a[100],b[100],c[200],r,s,i,na=1,nb=1,ptr=1,z;

    printf("enter how many numbers in A list\n");
    scanf("%d",&r);
    printf("enter sorted %d elements\n",r);
    for(i=1; i<=r; i++)
    {
        scanf("%d",&a[i]);
    }

     printf("enter how many numbers in B list\n");
    scanf("%d",&s);
    printf("enter sorted %d elements\n",s);
    for(i=1; i<=s; i++)
    {
        scanf("%d",&b[i]);
    }

    while(na<=r && nb<=s)
    {
        if(a[na]<b[nb])
        {
            c[ptr]=a[na];
            na=na+1;
            ptr=ptr+1;
        }
        else
        {
            c[ptr]=b[nb];
            nb=nb+1;
            ptr=ptr+1;
        }
    }

        if(na>r)
        {
           for(i=0; i<=s-nb; i++)
           {
               c[ptr+i]=b[nb+i];
           }
        }
        else
        {
            for(i=0; i<=r-na; i++)
           {
               c[ptr+i]=a[na+i];
           }
        }
        z=r+s;
        for(i=1; i<=z; i++)
        {
            printf("%d\t",c[i]);
        }

        return 0;
    }


