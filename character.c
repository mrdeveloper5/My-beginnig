#include <stdio.h>
int main()
{
    int n, i, j;
    char ch;
    printf("Enter number of lines=");
    scanf("%d", &n);
    ch = 'A';
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
        ch++;
    }
    return 0;
}