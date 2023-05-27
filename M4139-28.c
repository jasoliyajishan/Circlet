#include <stdio.h>

int main() {
    int n=5, i, j;

    

    for (i = n; i >= 1; i--) 
	{
        for (j = n; j >= i; j--)
		{
			if(j%2==0)
	    	{
	    		printf("0");
			}
			else
			{
				printf("1");
			}
           
        }
        printf("\n");
    }

    return 0;
}

