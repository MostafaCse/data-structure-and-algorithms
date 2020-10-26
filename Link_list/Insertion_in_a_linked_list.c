#include <stdio.h>
#include <stdlib.h>

struct Link_list
{
    int info;
    struct Link_list *link;
};
typedef struct Link_list node;
node *start, *ptr;

void create()
{
    int n, i;

    start = malloc(sizeof(node));
    ptr = start;

    printf("How many elements: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        printf("Location: %d\tElement[%d] = ", ptr, i);
        scanf("%d", &ptr->info);
        //ptr->info = rand();

        if (i != n)
        {
            ptr->link = malloc(sizeof(node));
            ptr = ptr->link;
        }
    }
    ptr->link = 0;

    return;
}

void display()
{
    ptr = start;
    printf("Status of the list: ");
    while (ptr != 0)
    {
        printf("%d\t", ptr->info);
        ptr = ptr->link;
    }

    return;
}

int main()
{
    int t, n, i, item;
    node *ptr, *loc, *save, *avail, *neew;
    create();

    printf("\nItem to insert: ");
    scanf("%d", &item);

    if (start == 0)
        loc = 0;

    else if (item < (start->info))
        loc =0;

    else
    {
        save = start;
        ptr = start->link;

        while (ptr != 0)
        {
            if (item < (ptr->info))
            {
                loc = save;
                break;
            }
            else
            {
                save = ptr;
                ptr = ptr->link;
            }
        }
        loc = save;
    }

    avail = malloc(sizeof(node));

    if (avail == 0)
    {
        printf("Overflow\n");
        return 0;
    }

    neew = avail;
    avail = avail->link;
    neew->info = item;

    if (loc == 0)
    {
        neew->link = start;
        start = neew;
    }
    else
    {
        neew->link = loc->link;
        loc->link = neew;
    }

    display();


    return 0;
}
