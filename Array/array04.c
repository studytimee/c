/*
 * array04.c
 *
 *  Created on: 28 Mar 2014
 *      Author: ali
 */
#include <stdio.h>
int main() {
	printf("hello\n");
	char str[5] = "abid", chars[5];
	int i;
	while (str[i] != '\0') {
		chars[i] = str[i];
		i++;
	}
	printf("%s", chars);
	return 0;
}

