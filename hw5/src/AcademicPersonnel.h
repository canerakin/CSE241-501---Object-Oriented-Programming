#ifndef ACADEMICPERSONNEL_H_
#define ACADEMICPERSONNEL_H_

#include <string>


#include "Employee.h"

using namespace std;
using namespace use_Employee;

namespace use_AcademicPersonnel
{
	class AcademicPersonnel :public Employee 	/*inheriter in Employee*/
	{
		public:			
			AcademicPersonnel();	/*constructor*/
			AcademicPersonnel(string arr ,string arr1 ,int num ,int num1 );

			void seeSuccessfulStudent();
			void makePublish();
	};
}	

#endif
