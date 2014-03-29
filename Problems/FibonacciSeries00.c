/*
 * FibonacciSeries00.c
 *
 *  Created on: 29 Mar 2014
 *      Author: ali
 */
#include <stdio.h>
int main() {
	int x = 0, out[5];
	int y = 1;
	int i;
	for (i = 0; i < 5; i++) {
		out[i] = x + y;
		x = y;
		y = out[i];
		printf("%d\n", out[i]);
	}

	return 0;
}

