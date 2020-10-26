#include <stdio.h>
#include <stdlib.h>
#define null 0
struct Link_list
{
    int info;
    struct Link_list *link;
};
typedef struct Link_list node;

node *start, *ptr;

void create()           ///Creation of the linked list
{
    int n, i=null;
    start = malloc(sizeof(node));
    ptr = start;

    printf("HOw many elements: ");
    scanf("%d", &n);

    while (++i <= n)
    {
        printf("Location: %d\tElement[%d]: ", ptr, i);
        scanf("%d", &ptr->info);

        if (i!=n)
        {
            ptr->link = malloc(sizeof(node));
            ptr = ptr->link;
        }
    }
    ptr->link = null;

    return;
}
void display()          ///Display the list
{
    ptr = start;
    int i=0;

    printf("\nStatus of the linked list:\n");

    while (ptr != null)
    {
        printf("Location:%d\t Element[%d]: %d\n", ptr, ++i, ptr->info);
        ptr = ptr->link;
    }

    return;
}
int main()
{
    node *save, *loc, *locp, *avail;
    int item;

    create();

    printf("\nEnter item to delete: ");
    scanf("%d", &item);

    ///finding location of item

    if (start == null)
    {
        loc = null, locp = null;
    }

    else if ((start->info) == item)
    {
        loc = start, locp = null;
    }

    else
    {
        save = start, ptr = start->link;

        while (ptr != null)
        {
            if ((ptr->info) == item)
            {
                loc = ptr, locp = save;
                break;
            }

            else
            {
                save = ptr, ptr = ptr->link;
            }
        }

        if (ptr == null)
            loc = null;
    }

    ///Delete the node of the item

    if (loc == null)
    {
        printf("%d is not in the list.\n", item);
        return 0;
    }

    if(locp == null)
        start = start->link;

    else
        locp->link = loc->link;

    avail = malloc(sizeof(node));

    loc->link = avail, avail = loc;

    display();

    return 0;
}
