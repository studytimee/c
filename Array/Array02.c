/*
 * Array02.c
 *
 *  Created on: 26 Mar 2014
 *      Author: ali
 */
#include <stdio.h>;
#include <conio.h>;
int main(){
	char *str = "STRING POINTER";
	int i = 0;

	while(*(str+i) != '\0'){
		printf("%c",*(str+i));
		i++;
	}
	return 0;
}

 /*As you know “*str” is character pointer and simply “str”
 * means 0th location of that string, so when we type (*(str+i)),
 *  this statement will give us “S” from “STRING POINTER”.
 *  Still thinking how? Assume that “str” pointer starting
 *  address is “65550” then “65550 + 0” (as initial value of
 *  i is 0) will point to “S” and in same way “65550 + 1” will
 *   point to “T”. Next we are using “Value at address” operator
 *    (*) to get value stored in that address. */
