#include <stdio.h>
#include <stdlib.h>
#include "conbinatorics.h"
#define EX_BADARGS  85          /* Wrong number of arguments */
#define EX_ARGSLIMITS  86       /* an argument is out of allowed limits */

int main(int argc, char **argv){
    if (argc != 2){
        fprintf(stderr, "%s: returns factorial n*(n-1)* ... *1\n", argv[0]);
        fprintf(stderr, "usage:%s <n> (0 <= n <= %u)\n", argv[0], 18);
   		PAUSE(argv[0]);
        return EX_BADARGS;
    } else {
        n = atoi(argv[1]);
        if ( (n<0) || (n>18) ) {
            fprintf(stderr,"%s: %s (%d)\n",argv[0],"illegal input", n);
            PAUSE(argv[0]);
            return  EX_ARGSLIMITS;
        }
        printf("%s: factorial of %d is %u\n",argv[0] , n, ifac(n));
        PAUSE(argv[0]);
        return EXIT_SUCCESS;
    }
}

