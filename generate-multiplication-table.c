/*
    Enter any number : 5
    5 x 1 = 5
    5 x 2 = 10
    5 x 3 = 15
    ..........
    5 x 10 = 50
*/
#include <stdio.h>
int main()
{
        int num, i, result;

        printf("Enter any number : ");
        scanf("%d",&num);

        for(i=1; i<=10; i++)
        {
            result = num * i;
            printf("%d x %d = %d\n",num, i, result);
        }

    getch();
    return 0;
}
