#ifndef OFFICER_H_
#define OFFICER_H_

#include <string>
#include "Employee.h"

using namespace std;
using namespace use_Employee;

namespace use_Officer
{
	template <class T>
	class Officer :public Employee<T> 	/*inheriter in Employee*/
	{
		public:			
			Officer();
			Officer(string arr ,string arr1 ,int num ,int num1 );

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
