/*
 * Array00.c
 *
 *  Created on: 26 Mar 2014
 *      Author: ali
 */
#include <stdio.h>;
int main(){
	char arr[6]= "STRING";

	for(int i = 0; arr[i] !='\0'; i++){
		printf("%c stored @ address : %u\n", arr[i], &arr[i]);
	}

	return 0;
}



