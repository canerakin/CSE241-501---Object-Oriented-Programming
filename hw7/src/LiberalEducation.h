#ifndef LIBERALEDUCATION_H_
#define LIBERALEDUCATION_H_

#include <iostream>
#include <string>
#include <vector>
#include "University.h"
#include "Employee.h"
#include "Lecturer.h"
#include "ResearchAssistant.h"
#include "Secretary.h"
#include "Officer.h"
#include "EducationSystem.h"

using namespace std; 
using namespace use_University;
using namespace use_Employee;
using namespace use_Lecturer;
using namespace use_ResearchAssistant;
using namespace use_Secretary;
using namespace use_Officer;
using namespace use_EducationSystem;

namespace use_LiberalEducation
{
	template <class T>
	class LiberalEducation :public EducationSystem<T>
	{
		public:
			void foundUni(University<T>* &uni , string name ) ;     /*define a new university*/

			void giveJob(string name,string surname,University<T> * uni,Lecturer<T> * lec,ResearchAssistant<T> * res,Secretary<T> * sec,Officer<T> * off,int size_veriable,char who);		/*take and give job in university*/
			

	};
}	

#endif
