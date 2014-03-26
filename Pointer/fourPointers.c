/*
 * Pointer.c
 *
 *  Created on: 25 Mar 2014
 *      Author: ali
 */
/*This example showing multiple pointers,
pointing towords x varibale value. x variable
hold value but pointer hold address of
of variable inside memory..*/
int main(){
	int x, *p, **pp, ***ppp, ****pppp;
	x = 10;
	printf("%d\n", x);
	p = &x;
	*p = 20;
	pp = &p;
	**pp = 30;
	ppp = &pp;
	***ppp = 40;
	pppp = &ppp;
	****pppp = 50;
	printf("%d", x);
	return 0;
}



