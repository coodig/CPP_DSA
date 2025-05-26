#include <stdio.h>
int main()
{
    int n;
    int m;
    printf("enter the value for n");
    scanf("%d", &n);
    printf("enter the value for m");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("x");
        }

        printf("\n");
    }
    return 0;
}