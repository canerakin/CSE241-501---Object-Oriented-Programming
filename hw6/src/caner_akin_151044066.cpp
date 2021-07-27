#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

#include "read_file.cpp"
#include "University.cpp"
#include "Employee.cpp"
#include "Lecturer.cpp"
#include "ResearchAssistant.cpp"
#include "Secretary.cpp"
#include "Officer.cpp"
#include "Yok.cpp"
using namespace std;
using namespace use_University;
using namespace use_Employee;
using namespace use_Lecturer;
using namespace use_ResearchAssistant;
using namespace use_Secretary;
using namespace use_Officer;
using namespace use_Yok;

using namespace std;
void read_file(vector<string> &vect ) ;
int main()
{
	int lec=3,res=3,sec=2,off=2;

	vector<string> vect;
	read_file(vect);    /*random take 10 employee*/
	University<int> * university ;

	Lecturer<int> * lecturer;
	lecturer = new Lecturer<int>[lec] ;

	ResearchAssistant<int> * researchAssistant;
	researchAssistant = new ResearchAssistant<int>[res] ;

	Officer<int> * officer ;
	officer = new Officer<int>[off];

	Secretary<int> * secretary ;	
	secretary = new Secretary<int>[sec] ;

	string arr = "GTU" ;
	load_information(vect ,university ,0 ,lecturer ,researchAssistant ,secretary ,officer ,arr ) ;
	operation(university,lecturer,researchAssistant,secretary,officer,lec,res,sec,off,0);	/*0 for rand*/

	

	/*-------------*/
	cout << endl << endl << "----------------------------  NEXT UNİVERSİTY  ---------------------" << endl << endl ;
	
	lecturer = new Lecturer<int>[lec] ;
	researchAssistant = new ResearchAssistant<int>[res] ;
	officer = new Officer<int>[off];
	secretary = new Secretary<int>[sec] ;

	arr = "ITU" ;
	load_information(vect ,university ,20 ,lecturer ,researchAssistant ,secretary ,officer ,arr ) ;
	operation(university,lecturer,researchAssistant,secretary,officer,lec,res,sec,off,20);  /*20 for rand*/

	

	/*-------------*/
	cout << endl << endl << "----------------------------  NEXT UNİVERSİTY  ---------------------" << endl << endl ;
	
	lecturer = new Lecturer<int>[lec] ;
	researchAssistant = new ResearchAssistant<int>[res] ;
	officer = new Officer<int>[off];
	secretary = new Secretary<int>[sec] ;

	arr = "ODTU" ;
	load_information(vect ,university ,40 ,lecturer ,researchAssistant ,secretary ,officer ,arr ) ;
	operation(university,lecturer,researchAssistant,secretary,officer,lec,res,sec,off,40);  /*40 for rand*/


	delete [] lecturer;
	delete [] researchAssistant;
	delete [] officer ;
	delete [] secretary ;
	delete [] university;

	vect.clear() ;
	return 0;	
}

void read_file(vector<string> &vect )		/*read and assign the file , after send all class in operation function*/
{
	int size = 0 ;
	int rand_num ;
	string array , array1 , array2 ;
	vector<string> vec;		/*for take the txt*/

	ifstream file;
	file.open("personnellist.txt");	

	while(!file.eof() )		
	{
		getline(file,array);	/*all file string save in vector*/
		vec.push_back(array);
	}
		
	srand(time(NULL));		/*for random in time*/
	while( size < vec.size() )
	{
		rand_num = rand() % ( vec.size() ) ;
		if ( vec[rand_num][0] != '1' )
		{
			istringstream some_stream(vec[rand_num]) ;
			some_stream >> array1 >> array2 ;
			vect.push_back( array1 ) ;
			vect.push_back( array2 ) ;
			size += 1;
			vec[rand_num][0] = '1' ;
		}
		/*else vec[rand_num][0] == 1 */		
	}
	file.close();	/*close file*/
	vec.clear(); /*dynamic free for vector*/
}