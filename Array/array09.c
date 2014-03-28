/*
 * array09.c
 *
 *  Created on: 28 Mar 2014
 *      Author: ali
 */
//Print single character or print string from array
#include <stdio.h>
int main(){
	char str[5] = "helloworld!";
	int i;
	printf(" Print single character\n");
	for(i = 0; i < 5; i++){
		printf("%c\t\n", str[i]);
	}
	printf("Print string");
	printf("\n%s\t", str);

	return 0;
}
