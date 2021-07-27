#include "ResearchAssistant.h"
#include <iostream>

namespace use_ResearchAssistant
{
	ResearchAssistant::ResearchAssistant() :AcademicPersonnel()
	{
		/*constructor*/
	}

	ResearchAssistant::ResearchAssistant(string arr ,string arr1 ,int num ,int num1 )
		:AcademicPersonnel(arr ,arr1 ,num ,num1 )
	{

	}


	void ResearchAssistant::research()
	{
		set_Happiness(3) ;
		set_Contribution(4);
	}

	void ResearchAssistant::readHW()
	{
		set_Happiness(-3) ;
		set_Contribution(2);
	}	

}
	