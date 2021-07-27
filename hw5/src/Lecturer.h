#ifndef LECTURER_H_
#define LECTURER_H_

#include <string>


#include "AcademicPersonnel.h"

using namespace std;
using namespace use_AcademicPersonnel;

namespace use_Lecturer
{
	class Lecturer :public AcademicPersonnel 	/*inheriter in AcademicPersonnel*/
	{
		public:			
			Lecturer();
			Lecturer(string arr ,string arr1 ,int num ,int num1 );

			void giveLesson() ;
			void giveHW() ;
	};
}	

#endif
