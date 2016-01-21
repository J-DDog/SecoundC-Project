/*
 * SecoundAppController.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: jker3169
 */

#include "SecoundAppController.h"

SecoundAppController::SecoundAppController()
{
	setCount(0); //Giving Count a default Value
}

void SecoundAppController:: start()
{
	string apples; //Defining apples
	apples = out.getResponse("How many apples\n:"); //Getting how many apples and storing it in apples variable
	out.message("There are " + apples + " Apples in the Tree.\n"); //Putting it together in the output
}

void SecoundAppController:: setCount(int count)
{
	this->count = count; //Setting the count Data Member
}

int SecoundAppController::  getCount()
{
	return count; //Returning the count Data Member
}

/*
 *
 * type all you want you wont break my code.
 */
