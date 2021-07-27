#include "AcademicPersonnel.h"
#include <iostream>

namespace use_AcademicPersonnel
{
	AcademicPersonnel::AcademicPersonnel() :Employee()
	{
		/*constructor*/
	}

	AcademicPersonnel::AcademicPersonnel(string arr ,string arr1 ,int num ,int num1 )
		:Employee(arr ,arr1 ,num ,num1 )
	{

	}


	void AcademicPersonnel::seeSuccessfulStudent()
	{
		set_Happiness(10) ;
		set_Contribution(0);
	}

	void AcademicPersonnel::makePublish()
	{
		set_Happiness(2) ;
		set_Contribution(5);
	}

}
	