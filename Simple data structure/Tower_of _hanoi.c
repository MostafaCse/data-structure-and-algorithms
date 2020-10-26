#include <stdio.h>

int tower(int n, char beg, char aux, char end)
{
    static int cnt=0;

    if (n==1)
    {
        printf("%c --> %c\n", beg, end);
        cnt++;
        return;
    }

    tower(n-1, beg, end, aux);
    printf("%c --> %c\n", beg, end);
    cnt++;

    tower(n-1, aux, beg, end);

    return cnt;
}

int main()
{
    int n, moves;
    char i, beg='A', aux='B', end='C';

    scanf("%d", &n);
    //scanf(" %c %c %c", &beg, &aux, &end);

    moves = tower(n, beg, aux, end);
    printf("Total Moves: %d\n", moves);

    return 0;
}
