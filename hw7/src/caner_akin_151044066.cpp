#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

#include "System.cpp"
#include "University.cpp"
#include "Employee.cpp"
#include "Lecturer.cpp"
#include "ResearchAssistant.cpp"
#include "Secretary.cpp"
#include "Officer.cpp"

using namespace std;
using namespace use_University;
using namespace use_Employee;
using namespace use_Lecturer;
using namespace use_ResearchAssistant;
using namespace use_Secretary;
using namespace use_Officer;

void read_file(vector<string> &vect ) ;	/*for read file*/

int main()
{
	int vect_size=0 ,control=1 , user;

	vector<string> vect;
	read_file(vect);    /*random take 10 employee*/

	string arr ;

	while(control == 1)
	{
		cout << "exit: 0" << endl
			 << "Liberal: 1" << endl
			 << "Communist: 2" << endl
			 << "Capitalist: 3" << endl			 
			 << "Choise your Story : " ;
		cin >> user ;
		if (user == 1)			/*if user wanna Liberal senaryo there call function*/
		{
			arr = "ITU" ;
			load_information_Lib<int>(vect ,vect_size ,arr ) ;		/*in system*/
		}
		else if (user == 2)		/*if user wanna Communist senaryo there call function*/
		{
			arr = "ODTU" ;
			load_information_Com<int>(vect ,vect_size ,arr ) ;		/*in system*/
		}
		else if (user == 3)		/*if user wanna Capitalist senaryo there call function*/
		{
			arr = "GTU" ;
			load_information_Cap<int>(vect ,vect_size ,arr ) ;		/*in system*/
		}
		else if (user == 0)
		{
			control = 0;
		}	
		else
		{
			cout << "False input!!!" << endl ;
		}	

		if (vect_size >= vect.size() - 30)	/*if employee finish now turn to start for name*/
		{
			vect_size = 0;	
		}	
		cout << endl ;
	}
	
	vect.clear() ;
	return 0;	
}

void read_file(vector<string> &vect )		/*read and assign the file , after send all class in operation function*/
{
	int size = 0 ;
	int rand_num ;
	string array , array1 , array2 ,array3 ;
	vector<string> vec;		/*for take the txt*/

	ifstream file;
	file.open("personnellist.txt");	

	while(!file.eof() )		
	{
		getline(file,array);	/*all file string save in vector*/
		vec.push_back(array);
	}
		
	srand(time(NULL));							/*for random in time*/
	while( size < vec.size() )
	{
		rand_num = rand() % ( vec.size() ) ;
		if ( vec[rand_num][0] != '1' )
		{
			istringstream some_stream(vec[rand_num]) ;
			some_stream >> array1 >> array2 >> array3 ;
			vect.push_back( array1 ) ;
			vect.push_back( array2 ) ;
			vect.push_back( array3 ) ;
			size += 1;
			vec[rand_num][0] = '1' ;
		}
		/*else vec[rand_num][0] == 1 */		
	}
	file.close();	/*close file*/
	vec.clear(); /*dynamic free for vector*/
}
