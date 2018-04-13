#include <stdio.h>

/*multi-space replacement by 1 space*/
main()
{
	int c, cs;

	cs = 0;
	while ((c = getchar()) != EOF){
		if (c == ' '){
			if (cs == 0){
				putchar(c);
				cs = 1;
			}
		}
		if (c != ' '){
			putchar(c);
			cs = 0;
		}	
	}
}
