#include<stdio.h>

int main()
{
    int m,n;
    scanf("%d %d", &m, &n);

    for(int i=m; i<=n; i++) //for number of table
    {
        printf("Multiplication table for %d: \n", i);
        printf("\n");
        for(int j=1; j<=10; j++) //for making table
        {
            printf("%d X %d = %d\n", j,i, (i*j));

        }
        printf("\n");
    }

    return 0;
}
