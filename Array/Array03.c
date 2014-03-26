/*
 * Array03.c
 *
 *  Created on: 26 Mar 2014
 *      Author: ali
 */
#include <stdio.h>;
#include "conio.h"
//Reading string in C using scanf function
int main()
{
    char str[30];
    printf("Enter your first name : ");
    scanf("%s", str);
    printf("\nWelcome M.r %s", str);
    return 0;
}

