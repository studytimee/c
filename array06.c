/*
 * array06.c
 *
 *  Created on: 28 Mar 2014
 *      Author: ali
 C program to read line of text manually.
 */

#include <stdio.h>
int main(){
	char name[30], ch;
	int i = 0;

	while(ch !='\n'){
		ch = getchar();
		name[i] = ch;
		i++;
	}
		name[i]= '\0';
	printf("Name: %s",name);
	return 0;
}



