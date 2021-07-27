#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string>
#include "University.h"

using namespace std; 
using namespace use_University;

namespace use_Employee
{

	class Employee 	/*there head class for inheritence . but there have a parametre for university*/
	{
		public:
			Employee();
			Employee(string arr ,string arr1 ,int num ,int num1 );
			Employee(University * temp);
			~Employee();
			Employee(Employee & temp);
			Employee& operator=(const Employee & temp);
			
			void drinkTea(); 
			void submitPetition();
			void employ();	
		
			void emp_uni(University * temp);	/*for take university adress*/
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
			University * get_Emp() const ;

		
		private:
			int pid;
			int happiness;
			string name;
			string surname;
			University * emp;
	};
}	

#endif
