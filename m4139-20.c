#include<stdio.h>

main()
{
	int n=5,i,j;
	    for (i = 1; i <= n; i++) 
	{
        for (j = n; j >= i; j--)
	    {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

