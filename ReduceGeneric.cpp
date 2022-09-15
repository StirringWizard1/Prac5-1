#include "ReduceGeneric.h"
#include <vector>
#include <iostream>

int ReduceGeneric::reduce(std::vector<int> myvec) 
{
	if (pos >= myvec.size())
	{
		 return myvec.at(pos-1);
	}
	
	myvec.at(pos) = binaryOperator (myvec.at(pos-1 ), myvec.at(pos));
	 
	pos++;
	return reduce(myvec); 

}

