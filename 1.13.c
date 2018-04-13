#include <stdio.h>

main()
{
	int c, i, p, max, mid;
	int wd[15];
	
	for (i = 0; i < 15; i++)
		wd[i] = 0;
	i = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t')
			i = i + 1;
		else 
			wd[i] = wd[i] + 1;	
	}

	max = 0;
	for (i = 0; i < 15; i++){
		if (wd[i] > max)
			max = wd[i];
	}
	
	mid = max;
	for (p = 1; p <= max; p++) {
		for (i = 0; i < 15; i++) {
			if (wd[i] < mid)
				printf(" ");
			else 
				printf("+");
		}
		printf("\n");
		mid = mid - 1;

	}
}
