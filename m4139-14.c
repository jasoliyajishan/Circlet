#include <stdio.h>

main()
{
 n=5, i, j;

    

    for (i = n; i >= 1; i--) 
	{
        for (j = n; j >= i; j--)
		{
            printf("%d", j);
        }
        printf("\n");
    }

  
}

