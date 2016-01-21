/*
 * Runner.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: jker3169
 */

#include "SecoundAppController.h"

int main()
{
	SecoundAppController * myController = new SecoundAppController(); //Declaring and Constructing the Controller and making a pointer
	myController->start();	//Calling the start method with the Selector Operator
	(*myController).start(); //Calling the start method after dereferencing the Controller
	return 0; //Ending the program with no Errors
}
