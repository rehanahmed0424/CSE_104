#include <stdio.h>


int main()
{
    int a,b,n,sum;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        sum=0;

        for(int j=a; j<=b; j++)
        {
            if(a<=b && j%2 !=0)
            {
                sum=sum+j;

            }
        }

        printf("Case %d: %d\n", i,sum);
    }


    return 0;
}
