#include "FilterGeneric.h"
#include <vector>
#include <iostream>




std::vector <int> FilterGeneric::filter(std::vector<int> myvec) 
{
	bool check; 

	if (pos >= myvec.size())
	{
		 return myvec;
	}

	check = g(myvec.at(pos));

	if (check == false)
	{
		myvec.erase(myvec.begin() + pos);
		pos--;
	}
	pos++; 

	return filter(myvec); 


}