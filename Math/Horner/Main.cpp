/*
 * Main.cpp
 *
 *  Created on: Nov 29, 2014
 *      Author: Gojira Green
 */

#include "Main.h"
#include "Horner.h"
#include<iostream>
#include<stdio.h>

using namespace std;

int main(int argc, char **argv)
{
	/**
	 * Przykładowa tablica współczynników
	 * wielomianu f(x) = 2x^4 + 3x^3 + 4x + 1
	 */
	double tab[4] = {2,3,4,1};
	double *t;
	Horner* h = new Horner(4, tab, 1);
	t = h->evaluate();
	for(int i=0; i<4; i++){
		cout << t[i] << endl;
	}
	return 0;
}
