/*
 * Pointer.c
 *
 *  Created on: 22 Mar 2014
 *      Author: ali
 */

int main(){
	int x;
	x = 10; printf("intiger x hold value %d\n", x);

	// Pointer p can replace valus of x
	int *p;
	p = &x;
	*p = 20;printf("Pointer p replaced value of x = %d\n", x );

	// Double pointer **pp
	int **pp;
	pp = &p;
	**pp = 30; printf("Pointer to pointer replaced value of x %d",x);

	return 0;
}


