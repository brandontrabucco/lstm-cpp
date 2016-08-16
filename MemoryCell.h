/*
 * MemoryCell.h
 *
 *  Created on: Jul 18, 2016
 *      Author: trabucco
 */

#ifndef MEMORYCELL_H_
#define MEMORYCELL_H_

#include "BaseNode.h"
#include <vector>
#include <math.h>
#include <time.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <random>
using namespace std;

class MemoryCell : BaseNode {
private:
	static long long n;
public:
	int nConnections;
	vector<double> cellDataWeight;
	vector<vector<double> > cellDataPartial,
		inputDataPartial, forgetDataPartial;
	double cellFeedbackWeight, bias, internalError;
	vector<double> activationIn, activationInPrime,
		activationOut, activationOutPrime,
		state, previousState,
		feedback, previousFeedback,
		cellFeedbackPartial;
	vector<double> inputFeedbackPartial, inputStatePartial,
		forgetFeedbackPartial, forgetStatePartial;
	double activateIn(double data);
	double activateOut(double data);
	MemoryCell(int connections);
	MemoryCell();
	void clear();
	virtual ~MemoryCell();
};

#endif /* MEMORYCELL_H_ */
