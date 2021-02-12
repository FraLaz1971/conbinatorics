#include <stdio.h>
#include <stdlib.h>
#include "conbinatorics.h"

int allocate_array(int n){
    r=n;c=n; len=0; count=0;
    /* allocate dynamically 2D array arr in RAM */
    len = sizeof(int *) * r + sizeof(int) * c * r;
    arr = (int **)malloc(len);

    /* ptr is now pointing to the first element of 2D array */
    ptr = (int *)(arr + r);

    /* for loop to point rows pointer to appropriate location in 2D array */
    for(i = 0; i < r; i++)
        arr[i] = (ptr + c * i);

    /* initialise 2D array to all zeros */
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            arr[i][j] = 0; // OR *(*(arr+i)+j) = ++count
    return 0;
}

int allocate_2darray(int n, int m){
    r=n;c=m; len=0; count=0;
    /* allocate dynamically 2D array arr in RAM */
    len = sizeof(int *) * r + sizeof(int) * c * r;
    arr = (int **)malloc(len);

    /* ptr is now pointing to the first element of 2D array */
    ptr = (int *)(arr + r);

    /* for loop to point rows pointer to appropriate location in 2D array */
    for(i = 0; i < r; i++)
        arr[i] = (ptr + c * i);

    /* initialise 2D array to all zeros */
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            arr[i][j] = 0; // OR *(*(arr+i)+j) = ++count
    return 0;
}

int deallocate_array(void){
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ",arr[i][j]); // OR *(*(arr+i)+j) = ++count
        puts("");
    }
    free(arr);
    return 0;
}

int show_couples(int n){
    i=1; j=1;
    /* allocate dynamically 2D array arr in RAM */
    allocate_array(n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if ( (i != j) && ( arr[j-1][i-1] != 1) ){
                printf("{s%d,s%d} ", i, j);
                arr[i-1][j-1] = 1;
            }
        }
        puts("");
    }

    /* deallocate the 2D array arr from RAM */
    deallocate_array();

    return 0;
}

/* compute factorial of n! iteratively
 * and gives result in output */
int ifac(int n){
    if ((n==1)||(n==0)){
        return 1;
    }
    else {
        res=n;
        for (i=n-1; i>1; i--) {
            res = res*i;
        }
    }
    return res;
}

/* compute factorial of n! recursively
 * and gives result in output */

int rfac(int n){
    return 0;
}

void PAUSE(const char *av){
	char *s1 = (char*)malloc(32*sizeof(char)); int ret;
	printf("\n%s:\n*** press any key and then enter to close ***\n", av);
	ret = scanf("%s", s1);
}
