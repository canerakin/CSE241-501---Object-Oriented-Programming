#ifndef OFFICER_H_
#define OFFICER_H_

#include <string>


#include "AdministrativePersonnel.h"

using namespace std;
using namespace use_AdministrativePersonnel;

namespace use_Officer
{
	class Officer :public AdministrativePersonnel 	/*inheriter in Employee*/
	{
		public:			
			Officer();
			Officer(string arr ,string arr1 ,int num ,int num1 );

			void makeDoc();
	};
}	

#endif
