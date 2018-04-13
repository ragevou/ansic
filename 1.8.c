#include <stdio.h>

main()
{
	int c, tab, sp, ent;

	tab = 0;
	sp = 0;
	ent = 0;

	while ((c = getchar()) != EOF){
		if (c == '\t')
			++tab;
		if (c == ' ')
			++sp;
		if (c == '\n')
			++ent;
	}
	printf ("%s %d\n %s %d\n %s %d\n", "tabs: ", tab, "spaces: ", sp, "lines: ", ent);
}
