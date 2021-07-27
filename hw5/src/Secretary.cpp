#include "Secretary.h"
#include <iostream>

namespace use_Secretary
{
	Secretary::Secretary() :AdministrativePersonnel()
	{
		/*constructor*/
	}

	Secretary::Secretary(string arr ,string arr1 ,int num ,int num1 )
		:AdministrativePersonnel(arr ,arr1 ,num ,num1 )
	{

	}

	void Secretary::receivePetition()
	{
		set_Happiness(-1) ;
		set_Contribution(-1);		
	}
}
	