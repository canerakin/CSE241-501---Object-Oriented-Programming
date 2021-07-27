#include <iostream>

#include "read_file.h"

using namespace std;

int main()
{
	/*i do only one function in main.because size change for all class and if i take in read function , lost the adress all class .*/
	/*now read fonction only read and send adres to operation fonction for all class*/
	/*this function read file , assign name and surname and assign the university for all user    (university employs)*/
	read_file();

	return 0;	
}
