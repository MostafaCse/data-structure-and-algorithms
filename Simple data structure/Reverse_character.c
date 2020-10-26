#include<stdio.h>
#define EOLN '\n'
void reverse(void);
main()


{
    printf("please enter the line");
    reverse();
}
void reverse(void)
{
    char c;
    if((c=getchar()) !=EOLN)reverse();
    putchar(c);
    return;
}
