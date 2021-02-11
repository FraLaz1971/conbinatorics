#include <stdio.h>
#include <stdlib.h>
#include "conbinatorics.h"
#define EX_IOERR  74          /* input/output error */
#define EX_BADARGS  85          /* Wrong number of arguments */
#define EX_ARGSLIMITS  86       /* an argument is out of allowed limits */
#define DEBUG 1

int main(int argc, char **argv){
        #if defined DEBUG && DEBUG == 1
        fprintf(stderr, "%s: returns factorial n*(n-1)* ... *1\n", argv[0]);
        fprintf(stderr, "batch usage: echo '<n>' | %s  (0 <= n <= %u)\n", argv[0], 18);
        #endif
        count = 0;
         do {
            res = -1; n=-1;
            #if defined DEBUG && DEBUG == 1
            fprintf(stderr, "\n%s: please enter a natural number (0 <= n <= %u) or EOF to quit\n", argv[0], 18);
            #endif
            res = scanf("%u", &n);
            #if defined DEBUG && DEBUG == 1
            fprintf(stderr,"%s: read %d value(s), element %d, n is %d\n",argv[0],res, count++,n);
            #endif
            if (res == -1) break;
            if (res == 0) {
                if ( scanf("%*s"))
                    fprintf(stderr,"%s: %s (%d)\n",argv[0],"illegal non int input", n);
            }
            if ( (n<0) || (n>18) ) {
                fprintf(stderr,"%s: %s (%d)\n",argv[0],"illegal input", n);
                oval = 0;
                printf("%d ", oval);
            } else {
                oval = ifac(n);
                #if defined DEBUG && DEBUG == 1
                fprintf(stderr,"\n%s: factorial of %d is %u\n",argv[0] , n, oval);
                #endif
                printf("%u ", oval);
            }
        } while (res != -1) ; 
        return EXIT_SUCCESS;
}

