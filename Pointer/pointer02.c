/*
 * pointer02.c
 *
 *  Created on: 24 Mar 2014
 *      Author: ali
 */
//C program to add two numbers using pointers
#include <stdio.h>

int main(){
	int first, second, *p, *q, sum;

	printf("Enter two integers to add\n");
	scanf("%d%d", &first ,&second);

	p = &first; q = &second;

	sum = *p + *q;
	printf("Sum of entered numbers = %d\n",sum);
	return 0;
}

