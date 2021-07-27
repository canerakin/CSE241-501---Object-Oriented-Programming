#ifndef EDUCATIONSYSTEM_H_
#define EDUCATIONSYSTEM_H_

#include <iostream>
#include <string>
#include <vector>
#include "University.h"
#include "Employee.h"
#include "Lecturer.h"
#include "ResearchAssistant.h"
#include "Secretary.h"
#include "Officer.h"

using namespace std; 
using namespace use_University;
using namespace use_Employee;
using namespace use_Lecturer;
using namespace use_ResearchAssistant;
using namespace use_Secretary;
using namespace use_Officer;

namespace use_EducationSystem
{
	template <class T>
	class EducationSystem
	{
		public:
			virtual void foundUni(University<T>* &uni , string name ) = 0;     /*define a new university*/

			virtual void giveJob(string name,string surname,University<T> * uni,Lecturer<T> * lec,ResearchAssistant<T> * res,Secretary<T> * sec,Officer<T> * off,int size_veriable,char who) = 0;		/*take and give job in university*/
			

	};
}	

#endif
