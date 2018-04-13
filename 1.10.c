#include <stdio.h>

main()
{
    int c, ct;

    while ((c = getchar()) != EOF){
      ct = 0;
        if (c == '\t'){
            printf("\\t");
            ct = 1;
        }
        if (c == '\b'){
            printf("\\b");
            ct = 1;
        }
        if (c == '\\'){
            printf("\\\\");
            ct = 1;
        }
        if (ct == 0){
            putchar(c);
        }
    }
}
