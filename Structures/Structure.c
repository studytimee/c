/*
 * Structure.c
 *
 *  Created on: 24 Mar 2014
 *      Author: ali
 */

#include <stdio.h>

struct xampl {
	int x;
};

int main() {
	struct xampl structure;
	struct xampl *ptr;

	structure.x = 10;
	ptr = &structure; 		//Yes, you need the ampersand & when dealing with
							//structures and using pointers*/
	printf("%d\n", ptr->x); //The -> acts somsewhat like the * when
							// it is used with pointers
	printf("\n%d", *ptr);
	getchar();
}

