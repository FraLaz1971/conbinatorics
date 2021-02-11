#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define EX_BADARGS  85          /* Wrong number of arguments */

/* shows all the possible couples 
 * (without repetition) in a set of n elements 
 { s1,s2, ... sn } */
/* global variable section */
unsigned int n,i,j, res, oval;
/* define a 2D array of r rows and c columns 
 each element is a possible couple */
int *ptr, **arr; 
/* r is the number of rows of the 2D array 
   c is the number of columns of the 2D array 
   len is the length of the memory array to allocate */
unsigned int r,c,len; 
int count; 

/* functions section */
int show_couples(int n);
int allocate_array(int n);
int allocate_2darray(int n, int m);
int deallocate_array(void);
int ncouples();
int ifac(int);
int rfac(int);
