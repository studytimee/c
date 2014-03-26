/*
 * Pointer.c
 *
 *  Created on: 25 Mar 2014
 *      Author: ali
 */
<<<<<<< HEAD
/*This example showing multiple pointers,
pointing towords x varibale value. x variable
hold value but pointer hold address of
of variable inside memory.*/
=======
>>>>>>> f9a0d46f04f6f0e86da5b5fba296559d5f1cd453
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



