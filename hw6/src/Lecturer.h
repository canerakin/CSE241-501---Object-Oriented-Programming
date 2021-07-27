#ifndef LECTURER_H_
#define LECTURER_H_

#include <string>

#include "Employee.h"
//#include "Employee.cpp"


using namespace std;
using namespace use_Employee;

namespace use_Lecturer
{

	template <class T>
	class Lecturer :public Employee<T> 	/*inheriter in AcademicPersonnel*/
	{
		public:			
			Lecturer();
			Lecturer(string arr ,string arr1 ,int num ,int num1 );

			virtual void makeDoc() ; 				/*officer*/
			virtual void research() ;				/*researchAssistant*/
			virtual void giveLesson() ;				/*Lecturer*/
			virtual void seeSuccessfulStudent() ;	/*Lec-research*/
			virtual void makePublish() ;			/*Lec-research*/
			virtual void manageProcess() ;			/*sec-officer*/
			virtual void giveHW() ;					/*Lecturer*/
			virtual void readHW() ;					/*researchAssistant*/
			virtual void receivePetition() ;		/*secretary*/	

	};
}	

#endif
