#include <stdio.h>

 main() {
    int n=5, i, j;

  
   

    for (i = 1; i <= n; i++) 
	{
		for(n=i;n<=4;n++)
		{
			printf(" ");
		}
        for (j = 1; j <= i; j++) 
		{
            printf("%d", j);
        }
        printf("\n");
    }

	 
}

