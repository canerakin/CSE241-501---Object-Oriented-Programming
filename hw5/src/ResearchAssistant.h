#ifndef RESEARCHASSISTANT_H_
#define RESEARCHASSISTANT_H_

#include <string>


#include "AcademicPersonnel.h"

using namespace std;
using namespace use_AcademicPersonnel;

namespace use_ResearchAssistant
{
	class ResearchAssistant :public AcademicPersonnel  /*inheriter in AcademicPersonnel*/
	{
		public:			
			ResearchAssistant();
			ResearchAssistant(string arr ,string arr1 ,int num ,int num1 );

			void research();
			void readHW();

	};
}	

#endif