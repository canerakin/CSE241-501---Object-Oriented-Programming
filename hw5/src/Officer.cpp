#include "Officer.h"
#include <iostream>

namespace use_Officer
{
	Officer::Officer() :AdministrativePersonnel()
	{
		/*constructor*/
	}

	Officer::Officer(string arr ,string arr1 ,int num ,int num1 )
		:AdministrativePersonnel(arr ,arr1 ,num ,num1 )
	{

	}

	void Officer::makeDoc()
	{
		set_Happiness(-2) ;
		set_Contribution(3);		
	}					
}