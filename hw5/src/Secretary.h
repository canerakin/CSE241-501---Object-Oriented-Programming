#ifndef SECRETARY_H_
#define SECRETARY_H_

#include <string>


#include "AdministrativePersonnel.h"

using namespace std;
using namespace use_AdministrativePersonnel;

namespace use_Secretary
{
	class Secretary :public AdministrativePersonnel /*inheriter in AdministrativePersonnel */
	{
		public:			
			Secretary();
			Secretary(string arr ,string arr1 ,int num ,int num1 );

			void receivePetition();
	};
}	

#endif
