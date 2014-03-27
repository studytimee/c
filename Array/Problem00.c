/*
 * Problem00.c
 *
 *  Created on: 27 Mar 2014
 *      Author: ali
 */
// Store integer values in array and print sum of all values.
int main() {
	int num[3], i, sum;

	for (i = 0; i < 3; i++) {
		scanf("%d", &num[i]);
		sum += num[i];
	}
	printf("%d", sum);
	return 0;
}

