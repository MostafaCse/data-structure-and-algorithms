#include <stdio.h>
#define n 10
int f=0, r=0, i;
int q[n];

void qinsert()
{
    int item;

    if ((f==1 && r==n) || (f==r+1)){
        printf("Overflow\n");
        return;
    }
    printf("Enter item: ");
    scanf("%d", &item);

    if (f==0)
        f=1, r=1;
    else if (r==n)
        r=1;
    else
        r=r+1;
    q[r] = item;
    printf("\t%d is inserted.\n\n", item);

    return;
}

void qdelete()
{
    int item;
    if (f==0)
    {
        printf("Underflow\n");
        return;
    }

    item = q[f];

    if (f==r)
        f=r=0;
    else if (f == n)
        f = 1;
    else
        f= f+1;
        printf("\t%d is deleted.\n\n", item);

    return;

}

void show()
{
    if (f==0){
        printf("Queue is empty.\n\n");
        return;
    }

    printf("Status of the queue: ");

    if(f<=r)
    {
        for(i=f; i<=r; i++)
        {
            printf("%d ", q[i]);
        }
    }

    else
    {
        for(i=f; i<=n; i++)
        {
            printf("%d ", q[i]);
        }
        for(i=1; i<=r; i++)
        {
            printf("%d ", q[i]);
        }
    }
    printf("\n\n");

    return;
}

int menu()
{
    int choice;
        printf("1---->qinsert\n");
        printf("2---->qdelete\n");
        printf("3---->show\n");
        printf("4---->Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

    return(choice);
}

int main()
{
    printf("\t\t\t\t***Welcome to my Queue***\n");

    int choice;
    do
    {
        choice = menu();
        switch(choice)
        {
        case 1:
            qinsert();
            break;
        case 2:
            qdelete();
            break;
        case 3:
            show();
            break;
        case 4:
            printf("Program ends. Thank You.\n");
            break;
        default:
            printf("Wrong choice. Try again.\n\n");

        }
    }
    while (choice != 4);
    }
