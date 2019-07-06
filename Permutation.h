/*
 * Permutation.h
 *
 *  Created on: Jul 6, 2019
 *      Author: Manu
 */

#ifndef PERMUTATION_H_
#define PERMUTATION_H_
#include <iostream>
#include <string.h>

class Permutation {
	std::string str;
public:
	Permutation(std::string s);

	int PrintWithRepetitionRec(int index,std::string s);
	void PrintWithRepetition();

	virtual ~Permutation();

};

#endif /* PERMUTATION_H_ */
