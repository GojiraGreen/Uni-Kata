/*
 * Horner.h
 *
 *  Created on: Nov 28, 2014
 *      Author: Aron Zieliński
 */

#ifndef HORNER_H_
#define HORNER_H_

class Horner {
private:
	int length;
	double c;
	double* polynomial;

public:

	double* evaluate();
	Horner(int, double*, double);
	virtual ~Horner();
};


#endif /* HORNER_H_ */
