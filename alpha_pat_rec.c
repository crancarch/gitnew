#include <stdio.h>
#include <stdlib.h>

void printPatternRowRecur(int n,int c)
{
    if (n < 1)
        return;

    printf("%c",(char)c);
    c++;

    printPatternRowRecur(n-1,c);
}

void printPatternRecur(int n,int c)
{

    if (n < 1)
        return;

    printPatternRowRecur(n,c);

    printf("\n");
    c+=n;

    printPatternRecur(n-1,c);

}

int main()
{
    int n = 5,c=65;
    printPatternRecur(n,c);
    return 0;
}
