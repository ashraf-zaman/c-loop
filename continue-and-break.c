#include <stdio.h>
int main()
{
    int i;

    for (i=1; i<=20; i++)
    {
        if(i%3==0)
            continue;

        printf("%d\n",i);

        if(i==14)
            break;
    }

    getch();
    return 0;
}
