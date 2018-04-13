#include <stdio.h>

main()
{
	int c;
	
	c = (getchar() != EOF);
	printf("\n");
	if (c == 1)
		printf("equal 1\n");
	if (c == 0)
		printf("equal 0\n");
}
