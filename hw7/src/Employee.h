#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

enum Effects {makeDoc = 1,drinkTea,research,giveLesson,seeSuccessfulStudent,makePublish,manageProcess,giveHW,readHW,receivePetition,submitPetition};

#include <string>
#include "University.h"

using namespace std; 
using namespace use_University;

namespace use_Employee
{  
	template<class T>
	class Employee 	/*there head class for inheritence . but there have a parametre for university*/
	{
		public:
			Employee();
			Employee(string arr ,string arr1 ,int num ,int num1 );
			Employee(University<T> * temp);
			~Employee();
			Employee(Employee & temp);
			Employee& operator=(const Employee & temp);
			
			virtual void makeDoc() = 0 ; 				/*officer */
			virtual void drinkTea();					/*employee*/
			virtual void research() = 0 ;				/*researchAssistant*/
			virtual void giveLesson() = 0 ;				/*Lecturer*/
			virtual void seeSuccessfulStudent() = 0 ;	/*Lec-research*/
			virtual void makePublish() = 0 ;			/*Lec-research*/
			virtual void manageProcess() = 0 ;			/*sec-officer*/
			virtual void giveHW() = 0 ;					/*Lecturer*/
			virtual void readHW() = 0 ;					/*researchAssistant*/
			virtual void receivePetition() = 0 ;		/*Secretary*/
			virtual void submitPetition() ; 			/*employee*/
		
			void employ(University<T> * temp);	/*for take university adress*/
			void set_Contribution(int num);		/*for change contribution*/
			int get_Contribution() const ;		/*for know contribution */

			void set_Pid(int num);
			void set_Happiness(int num);
			void set_Name(string array);
			void set_Surname(string array);


			int get_Pid() const ;
			int get_Happiness() const ;
			string get_Name() const ;
			string get_Surname() const ;
			University<T> * get_Emp() const ;

		
		private:
			int pid;
			int happiness;
			string name;
			string surname;
			University<T> * emp;
	};
}	

#endif
