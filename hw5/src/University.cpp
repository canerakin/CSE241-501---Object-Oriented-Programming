#include "University.h"
#include <iostream>

namespace use_University
{
	University::University()
	{
		/*constructor*/
		contribution = 0;
	}

	University::~University()
	{
		/*destructor*/
	}

	University::University(University & temp)
	{
		contribution = temp.get_Contribution() ;
	}

	University & University::operator=(const University & temp)
	{
		contribution = temp.get_Contribution() ;
		return *this;
	}

	void University::set_Contribution(int num)
	{
		contribution += num ;
	}

	int University::get_Contribution() const 
	{
		return contribution ;
	}
}