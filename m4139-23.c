#include <stdio.h>

main() {
    int i, j;

    for (i = 1; i <= 5; i++) 
	{
        for (j = 1; j <= i; j++)
		 {
            printf("%d ", j);
        }
        for (j = 5 - i; j >= 1; j--) 
		{
            printf("    ");
        }
        for (j = i; j >= 1; j--) 
		{
            printf("%d ", j);
        }
        printf("\n");
    }

}

