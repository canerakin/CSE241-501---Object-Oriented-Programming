#include "Lecturer.h"
#include <iostream>

namespace use_Lecturer
{
	Lecturer::Lecturer() :AcademicPersonnel()
	{
		/*constructor*/
	}

	Lecturer::Lecturer(string arr ,string arr1 ,int num ,int num1 )
		:AcademicPersonnel(arr ,arr1 ,num ,num1 )
	{

	}

	void Lecturer::giveLesson()
	{
		set_Happiness(1) ;
		set_Contribution(5);
	}

	void Lecturer::giveHW()
	{
		set_Happiness(-2) ;
		set_Contribution(1);
	}

}
	