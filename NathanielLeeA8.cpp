//============================================================================
// Name        : NathanielLeeA8.cpp
// Author      : Nathaniel Lee
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "String200.h" // include header file that contains string container class
using namespace std;

int main() { // beginning of main function

	String200<string> test(10); // instantiate String 200 object of type string
		// testing the array with bounds checking
		// main function code taken from instructions
				int i;
				test[0] = "abcde";
				cout << "main: first element " << test[0] << endl;
				// assign array values
				for (i = 0; i < 10; i++)
				{
					test[i] = test[0].substr(0,5)+(to_string(i));

				}
				// displaying the finished array
				cout << "main: done with load 1, now displaying the array " << endl;
				for ( i = 0; i < 10; i++)
				{
					cout << "array[" << i << "] = -->" << test[i] << "<--" << endl;
				}
				// instantiate String200 object of type float
				String200<float>test2(10);
				test2[0] = 1.1;
				// assign the float array values
				for ( i = 1; i < 10; i++)
				{
					test2[i] = (test2[i-1] + 1.1);
				}
				// displaying the array
				cout << "main: done with load 2, now displaying the array" << endl;
				for ( i = 0;i < 10;i++)
				{
					cout << "array[" << i << "] = " << test2[i] << endl;
				}
	// try statement to test the overloaded [] function
	try
	{

			cout << "main: now testing the subscript[10]" << endl;
			test[10] = "qwerty";
			cout << "main: after the test with subscript[10]" << endl;
	}
	// if an error is encountered, a message gets sent to this catch statement and code exits
	catch(string &s)
	{
		cout << s << endl;
		// if error is found, program exits completely
		exit(55);
	}
	// end of try catch statements


	return 0;
} // end of main function
