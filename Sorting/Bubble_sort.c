#include <stdio.h>

int sort(int n, int a[]);

int main()
{
    int Data[100], Number, i, j;

    scanf("%d", &Number);

    for(i=1; i<=Number; i++){
        scanf("%d", &Data[i]);
    }

    sort(Number, Data);

    for(i=1; i<=Number; i++){
        printf("%d ", Data[i]);
    }

    return 0;
}

int sort(int n, int a[])
{
    int Temp, i, j;

    for(i=1; i<=n-1; i++){
        for(j=1; j<=n-i; j++){
            if(a[j]>a[j+1]){
                Temp=a[j];
                a[j]=a[j+1];
                a[j+1]=Temp;
            }
        }
    }
}
