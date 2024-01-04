#include <stdio.h>
int main()
{
    int n, i, j, so;
    printf("enter n (n >= 2): ");
    scanf("%d", &n);
    while (n < 2)
    {
        printf("n must be >= 2, enter n: ");
        scanf("%d", &n);
        printf("n must be >= 2,");
        break;
    }
    printf("Prime numbers up to %d: ", n, i);

    for (i = 2; i <= n; i++)
    {
        so = 0;
        for (j = 2; j*j<=i; ++j)
        {
            if (i % j == 0)
            {
                so++;
                break;
            }
        }

        if (so == 0)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

	
		
	
	
		
