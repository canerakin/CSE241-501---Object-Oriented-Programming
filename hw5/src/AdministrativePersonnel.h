#ifndef ADMINISTRATIVEPERSONNEL_H_
#define ADMINISTRATIVEPERSONNEL_H_

#include <string>


#include "Employee.h"

using namespace std;
using namespace use_Employee;

namespace use_AdministrativePersonnel
{
	class AdministrativePersonnel :public Employee 	/*inheriter in Employee*/
	{
		public:			
			AdministrativePersonnel();	/*constructor*/
			AdministrativePersonnel(string arr ,string arr1 ,int num ,int num1 );

			void manageProcess();
	};
}	

#endif
