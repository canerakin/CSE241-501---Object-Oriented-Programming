#ifndef RESEARCHASSISTANT_H_
#define RESEARCHASSISTANT_H_

#include <string>


#include "Employee.h"

using namespace std;
using namespace use_Employee;

namespace use_ResearchAssistant
{
	template <class T>
	class ResearchAssistant :public Employee<T>  /*inheriter in AcademicPersonnel*/
	{
		public:			
			ResearchAssistant();
			ResearchAssistant(string arr ,string arr1 ,int num ,int num1 );

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