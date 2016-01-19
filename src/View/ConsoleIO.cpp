/*
 * ConsoleIO.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: jker3169
 */

#include "ConsoleIO.h"

ConsoleIO::ConsoleIO()
{

}

void ConsoleIO:: message(string message)
{
	cout << message << endl; //Putting a message out to the console and ending the line
}

void ConsoleIO:: message(string message, bool doesEndLine)
{
	if(doesEndLine)	//Checking if they want to end the line
	{
		cout << message << endl; // writing to the console and ending line
	}
	else // if opration failed
	{
		cout << message; //Writing to console but not ending the line
	}
}

string ConsoleIO:: getResponse(string message)
{
	string response; //Declaring the response string to hold the users response
	cout << message; //Outputting message to console
	cin >> response; //Getting response from console
	return response; //Returning response
}
