/*
 * String200.h
 *
 *  Created on: Nov 21, 2019
 *      Author: Nathaniel Lee
 */
#include <string>
#include<iostream>
#include <string>
using namespace std;
#ifndef STRING200_H_
#define STRING200_H_
// a template class called String 200
template <class type1> // template header
class String200
{
// private members have their data types or of abstract type1
private:
	int size;
	type1 *k;

public:
	// default constructor
	String200();
	// constructor
	String200(int x);
	// destructor deletes dynamically allocated memory
	~String200();

	// overloaded [] operator that checks bounds
	type1 & operator [](int x);



};
// inline member function definitions
	// default constructor
	template <class type1>
	String200<type1>::String200()
	{
		size = 100;
		k = new type1[size];
	}
	// non-default constructor
	template<class type1>
	String200<type1>::String200(int x)
	{
		size = x;
		k = new type1[size];
	}
	// destructor deletes dynamically allocated memory
	template <class type1>
	String200<type1>::~String200()
	{
		delete k;
	}
	// overloaded [] operator that checks for bounds
	template<class type1>
	type1 & String200<type1>::operator [](int x)
	{
		// if subscript bounds is out of array size this error message will be thrown
		if (x >= size  || x<0)

		{
			string b = to_string(x);
			string s = "You entered an out of bounds space of the array size: ";
			s.append(b);
			string newStr = ". Valid bounds are between 0 and ";
			b = to_string(x-1);
			newStr.append(b);
			s.append(newStr);

			throw s;

			//exit(4);

		}
		// if all is good, the  array element at that subscript is returned
		else
		{
			for(int i = 0; i < size; i++)
			{
				if (k[i] == k[x])
				{
					return k[i];
				}
			}
		}
	}

#endif /* STRING200_H_ */
