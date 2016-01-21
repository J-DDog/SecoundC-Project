/*
 * SecoundAppController.h
 *
 *  Created on: Jan 19, 2016
 *      Author: jker3169
 */

#ifndef CONTROLLER_SECOUNDAPPCONTROLLER_H_
#define CONTROLLER_SECOUNDAPPCONTROLLER_H_

#include "../View/ConsoleIO.h"

using namespace std;

class SecoundAppController
{
public:
	//Constructor
	SecoundAppController();
	//Member Methods
	void start();
	void setCount(int);
	int getCount();
private:
	//Data Members
	ConsoleIO out;
	int count;

};

#endif /* CONTROLLER_SECOUNDAPPCONTROLLER_H_ */
