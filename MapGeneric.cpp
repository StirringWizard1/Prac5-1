#include "MapGeneric.h"
#include <vector>





std::vector <int> MapGeneric::map(std::vector<int> myvec) 
{

	if (pos >= myvec.size())
	{
		 return myvec;
	}
	
	
	myvec.at(pos)=f(myvec.at(pos)) ;
	pos++; 

	return map(myvec); 

}
