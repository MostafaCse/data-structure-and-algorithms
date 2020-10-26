#include <stdio.h>
#include <stdlib.h>

struct linklist
{
    int info;
    struct linklist *link;
};
typedef struct linklist node;


int main()
{
    int Elements, i;
    node *start, *ptr;

    start = malloc(sizeof(node));
    ptr = start;

    printf("How many elements? ");
    scanf("%d", &Elements);

    for (i=1; i<=Elements; i++)
    {
        printf("element[%d]: ", i);
        scanf("%d", &ptr->info);

        if (i!=Elements)
        {
            ptr->link = malloc(sizeof(node));
            ptr = ptr->link;
        }
    }
    ptr->link = 0;

    ptr = start;
    while (ptr != 0)
    {
        printf("%d\t", ptr->info);
        ptr = ptr->link;
    }

    return 0;
}
