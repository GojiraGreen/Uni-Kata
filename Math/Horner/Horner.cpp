/*
 * Horner.cpp
 *
 *  Created on: Nov 28, 2014
 *      Author: Aron Zieliński
 */

#include "Horner.h"
#include <stdio.h>
#include<iostream>
#include<stdio.h>
using namespace std;
Horner::Horner(int length, double* polynomial, double c) {
	this->length = length;
	this->c = c;
	this->polynomial = polynomial;
}

Horner::~Horner() {
}

double* Horner::evaluate(){
	int k, j=0;
	double *diveratives = new double[length];
	for(int i=length; i>0; i--){
		for(k=1; k<i; k++){
			polynomial[k] = (polynomial[k-1] * c) + polynomial[k];
		}
		diveratives[j++] = polynomial[k-1];

	}
	return diveratives;
}
