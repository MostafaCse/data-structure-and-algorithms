#include <stdio.h>
#include <stdlib.h>

struct Link_list
{
    int info;
    struct Link_list *link;
};
typedef struct Link_list node;

int main()
{
    int  Elements, i, Item;
    node *start, *ptr, *loc;

    start = malloc(sizeof(node));
    ptr = start;

    printf("How many elements: ");
    scanf("%d", &Elements);

    for (i=1; i<=Elements; i++)
    {
        printf("Location: %d\tElement[%d] = ", ptr, i);
        scanf("%d", &ptr->info);
       if (i != Elements)
        {
            ptr->link = malloc(sizeof(node));
            ptr = ptr->link;
        }
    }
    ptr->link = 0;

    while (1)
    {
        printf("Enter item to search: ");
        if (scanf("%d", &Item) == EOF)
            return 0;

        ptr=start, i=1, loc=0;
        while (ptr!=0)
        {
            if (ptr->info == Item)
            {
                loc = ptr;
                printf("position: %d\tlocation: %d\n", i, loc);
                break;
            }
            ptr = ptr->link, i++;
        }
        if (loc==0)
            printf("%d was not found\n", Item);
    }

    return 0;
}
