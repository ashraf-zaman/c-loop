#include <stdio.h>
int main()
{
    int i=1;

start:
    printf("%d\t",i);
    i++;

    if(i<=10)
        goto start;

    getch();
    return 0;
}
