#include "AdministrativePersonnel.h"
#include <iostream>

namespace use_AdministrativePersonnel
{
	AdministrativePersonnel::AdministrativePersonnel() :Employee()
	{
		/*constructor*/
	}

	AdministrativePersonnel::AdministrativePersonnel(string arr ,string arr1 ,int num ,int num1 )
		:Employee(arr ,arr1 ,num ,num1 )
	{

	}

	void AdministrativePersonnel::manageProcess()
	{
		set_Happiness(-1) ;		/*send happiness*/
		set_Contribution(2);	/*send contribution*/
	}

}
	