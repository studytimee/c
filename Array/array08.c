/*
 * array08.c
 *
 *  Created on: 28 Mar 2014
 *      Author: ali
 */
//C program to pass a single element of an array to function
#include <stdio.h>

int main(){
	int num[]	= {2,3,4};
	Display(num[2]);
	return 0;
}

void Display(int a){
	printf("%d",a);
}
