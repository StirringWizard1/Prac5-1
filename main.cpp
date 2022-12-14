#include <iostream>
#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"

#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterForTwoDigitPositive.h"
#include "FilterNonPositive.h"


#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"


#include <string>
#include <vector>
#include<ctype.h>

int main ()
{
	//int in;
	int check = 0;
	int t;
	int position = 0;
	std::string store;
	std::string input; 
	std::vector <int> myvec(20);

	getline(std::cin, input);

	// for (int i = 0; i <= 19; ++i)
	// {
	// 	std::cout <<myvec.at(i) << " ";
	// }
	
	//std::cout <<input<<std::endl;

	for (int i = 0; i <= input.length(); i++)
	{
		while (isdigit(input[i]) || input[i] == '-')
		{
			store = store+input[i];
			
			i++; 
			check = 1;
		}
		if (check == 1)
		{
			int in = std::stoi(store);
			store.clear();
			myvec.at(position) = in;
			check = 0;
			position++;
		}

	}
	MapTriple DJ;
	FilterForTwoDigitPositive DK;
	FilterOdd DH;
	ReduceMinimum DL;
	ReduceGCD DA;

	myvec = DJ.map(myvec);
	myvec = DK.filter(myvec);
	myvec = DH.filter(myvec);


	std::cout << DL.reduce(myvec) << " " << DA.reduce(myvec) << std::endl; 




	// std::cout <<t<< std::endl;
//printing result 
	// for (int i = 0; i < myvec.size(); i++)
	// {
	// std::cout <<myvec.at(i) << " ";
	// }

	// std::cout <<""<<std::endl;

	 return 0; 
}