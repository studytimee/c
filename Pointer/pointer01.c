/*
 * pointer01.c
 *
 *  Created on: 24 Mar 2014
 *      Author: ali
 */

#include <stdio.h>

int main()
{
    int x;            /* A normal integer*/
    int *p;           /* A pointer to an integer ("*p" is an integer, so p
                       must be a pointer to an integer) */
    x = 10;
    printf(" X hold value %d\n",x);

    p = &x;           /* Read it, "assign the address of x to p" */
    scanf( "%d", &x );          /* Put a value in x, we could also use p here */
    printf("Above typed value inserted in x = %d\n",x);
    printf("Now pointer p also pointing to x vlaue\n");
    printf( "%d\n", *p ); /* Note the use of the * to get the value */
    getchar();
}


