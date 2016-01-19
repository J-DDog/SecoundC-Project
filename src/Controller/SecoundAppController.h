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
	SecoundAppController();
	void start();
	void setCount(int);
	int getCount();
private:
	ConsoleIO out;
	int count;

};

#endif /* CONTROLLER_SECOUNDAPPCONTROLLER_H_ */
