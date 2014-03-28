/*
 * array07.c
 *
 *  Created on: 28 Mar 2014
 *      Author: ali
 */
/*Here, string c is passed from main() function to user-defined function Display(). In function declaration, ch[] is the formal argument. */
#include <stdio.h>
void Display(char c[]);
int main(){
	char c[50];
	printf("Enter your name:\t");
	gets(c);
	Display(c);
	return 0;
}
 void Display(char c[]){
	 printf("String Output:\n");
	 puts(c);
 }
