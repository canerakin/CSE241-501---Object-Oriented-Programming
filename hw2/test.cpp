#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <vector>

using namespace std;

struct Course	/*course information struct*/
{
	int id;
	string name;	
	int code;
	int credit;
	int total_hours;
	string lecture_dates;
	int gun_1;			/*this veriable keep first day*/
	int bas_1;			/*this veriable keep first days start clock*/
	int bit_1;			/*this veriable keep first days stop clock*/
	int gun_2;			/*this veriable keep second day*/
	int bas_2;			/*this veriable keep second days start clock*/
	int bit_2;			/*this veriable keep second days stop clock*/
	int gun_3;			/*this veriable keep third day*/
	int bas_3;			/*this veriable keep third days start clock*/
	int bit_3;			/*this veriable keep third days stop clock*/
	string field;
};
struct Classroom	/*keep class information*/
{
	int id;
	string c_no;
	int capacity;
	int student_inroom;
};

class Student 	/*class*/
{
	public:
		void student_list();

		int enrollCourse(Course a);
		int disenroll(Course a);
		void extractSchedule();	
		void enterClassroom(Classroom &a);	
		void quitClassroom(Classroom &a);

		void get_name()  const		  { cout << Name;  }
		void get_surname()  const	  { cout << Surname;  }
		int get_level() const		  { return level; }
		int get_id()  const			  { return student_id; }
		int get_kalan() const		  { return kalan; }
		string fl_name() const		  {return Name;} 
		string fl_surname() const	  {return Surname;} 					
		void input_name(string a) 	  { Name = a ;}
		void input_surname(string a)  { Surname = a ; }		
		void input_level(int k) 	  { level = k; }
		void input_id(int k)    	  { student_id = k; }
		void input_kalan(int k) 	  { kalan = k ;}
	
	private:
		string Name;
		string Surname;
		int student_id;
		int level;
		int kalan;
		vector<int> ders;				/*this veriable keep student class*/
		vector <vector<int> > prog;		/*this veriable keep extract schedule*/
};

void take_file(Course cls[] ,Classroom clr[],int long1 , int long2);		/*this fonction read file*/
void print_list(Course cls[], int long1); 			/*this function print the list*/
void check_list(Course cls[],int long1 );		/*this function same sscanf==check_list*/

int main()
{
	string array , array1 , array2 , arr;
	int deger1 , deger2;
	int flag = 1 , count_courses = 0, count_classrooms = 0;

	ifstream file;
	file.open("courses_classrooms.txt");	/*there first open for oursecount the long*/

	file >> array ;
	while(!file.eof())
	{
		file >> array ;	
		if (array == "CLASSROOMS")
		{
			flag = 0;	
		}
		else if (flag == 1)
		{
			count_courses += 1;
		}
		else
		{
			count_classrooms += 1;
		}
	}
	file.close();

	count_courses /= 6;			/*there i found for memory allocation*/
	count_classrooms /= 3;		

	int i = 0 , j = 0 , k = 0 , q , iter = 2 , random , size = 0 , id , test_try = 0;

								/*there i do dynamic memory*/
	Course cls[count_courses];
	Classroom clr[count_classrooms];

	Student *inf = new Student[1];		
	Student *temp = new Student[1];

	take_file(cls,clr,count_courses ,count_classrooms);		/*read the file*/
	check_list(cls,count_courses );							/*distroy the course day*/

	ofstream file_2;		/*there for write file*/
	file_2.open("file.txt");	
	flag = 1;	
	while(flag == 1)	/*if user enter a exit in there finish*/	
	{
		if (test_try == 0)		/*there for a test*/
		{
			array = "-ns Murat Boz 111 4";
		}
		else if (test_try == 1)
		{
			array = "-ns Seda Akyol 112 1";
		}
		else if (test_try == 2)
		{
			array = "-ns Zafer Çalış 113 2";
		}
		else if (test_try == 3)
		{
			array = "-list";
		}
		else if (test_try == 4)
		{
			array = "-e 111 1";
		}
		else if (test_try == 5)
		{
			array = "-e 111 4";
		}
		else if (test_try == 6)
		{
			array = "-e 111 8";
		}
		else if (test_try == 7)
		{
			array = "-e 111 8";
		}
		else if (test_try == 8)
		{
			array = "-o";
		}
		else if (test_try == 9)
		{
			array = "-de 111 8";
		}
		else if (test_try == 10)
		{
			array = "-de 111 8";
		}
		else if (test_try == 11)
		{
			array = "-o 111";
		}
		else if (test_try == 12)
		{
			array = "-e 112 5";
		}
		else if (test_try == 13)
		{
			array = "-e 112 4";
		}
		else if (test_try == 14)
		{
			array = "-e 113 4";
		}
		else if (test_try == 15)
		{
			array = "-o 112";
		}
		else if (test_try == 16)
		{
			array = "-o -f file.txt";
		}
		else if (test_try == 17)
		{
			array = "-o -f 113 file.txt";
		}
		else if (test_try == 18)
		{
			array = "-o -f 112 file.txt";
		}
		else if (test_try == 19)
		{
			array = "-o -f file.txt";
		}		
		else
		{
			array = "exit";
		}

		cout << endl <<"Komut :" << array << endl ;

		if (array == "exit")	/*if user wanna quit*/
		{
			flag = 0;
		}
		else if (array == "-list")		/*if user wanna class list*/
		{
			print_list(cls,count_courses);		/*call the list function*/
		}
		else if (array[1] == 'n' && array[2] == 's')	/*if user enter a new student*/	
		{
			istringstream some_stream(array);
			some_stream >> arr >> array1 >> array2 >> q >> random;	/*there distroy the input*/

			inf[size].input_name(array1);
			inf[size].input_surname(array2);
			inf[size].input_id(q);
			inf[size].input_level(random);	/*there assign class*/
			random += 19;
			inf[size].input_kalan(random);
			inf[size].student_list();

			temp = new Student[iter];
			q = 0;
			while(q < iter-1)			/*there for dynamic memory. user enter a lot of student*/
			{
				temp[q] = inf[q];
				q += 1;
			}	
			inf = temp;
			iter += 1;
			size += 1;
		}
		else if (array[1] == 'e')		/*if user wanna take course*/
		{
			istringstream some_stream(array);
			some_stream >> arr >> random >> q;	/*there distroy the input*/

			i = 0;
			j = 0;
			while( random != inf[i].get_id() )	/*there find student*/
			{
				i += 1;
			}
			while(q != cls[j].id )	/*there find course*/
			{
				j += 1;
			}
			inf[i].enrollCourse(cls[j]) ;
			inf[i].enterClassroom(clr[ j%count_classrooms ]);
			cout << clr[ j%count_classrooms ].c_no << " classroom is have a " <<  clr[ j%count_classrooms ].student_inroom << " student" << endl;
			inf[i].extractSchedule();
		}
		else if (array[1] == 'd' && array[2] == 'e')	/*if user wanna out course*/
		{
			istringstream some_stream(array);
			some_stream >> arr >> random >> q;	/*there distroy the input*/

			i = 0;
			j = 0;
			while(random != inf[i].get_id())	/*there find student*/
			{
				i += 1;
			}
			while(q != cls[j].id)	/*there find course*/
			{
				j += 1;
			}
			inf[i].disenroll(cls[j]);
			inf[i].quitClassroom(clr[ j%count_classrooms ]);
			cout << clr[ j%count_classrooms ].c_no << " classroom is have a " <<  clr[ j%count_classrooms ].student_inroom << " student" << endl;
			inf[i].extractSchedule();
		}
		else if (array == "-o")		/*there prind the student list*/
		{
			for (j = 0; j < size; ++j)
			{
				inf[j].get_name();
				cout << " ";
				inf[j].get_surname();
				cout << ": [] total credits:" << (inf[j].get_level() + 19) - inf[j].get_kalan() 
					 << "  credit right: " << inf[j].get_kalan() << endl ; 	
			}
		}
		else if (array[1] == 'o' && array[3] >= '0' && array[3] <= '9' )	/*there print the one student*/
		{
			istringstream some_stream(array);
			some_stream >> arr >> q;		/*there distroy the input*/
			for (j = 0; j < size; ++j)
			{
				if (q == inf[j].get_id())
				{
					inf[j].get_name();
					cout << " ";
					inf[j].get_surname();
					cout << ": [] total credits:" << (inf[j].get_level() + 19) - inf[j].get_kalan() 
						 << "  credit right: " << inf[j].get_kalan() << endl ; 
				}	
			}			
		}						
		else if (array[1] == 'o' && array[4] == 'f' && array[6] >= '0' && array[6] <= '9' )		/*there print one student in the file*/
		{
			istringstream some_stream(array);
			some_stream >> arr >> arr >> q;		/*there distroy the input*/
			for (j = 0; j < size; ++j)
			{
				if (q == inf[j].get_id())
				{
					file_2 << inf[j].fl_name();
					file_2 << " ";
					file_2 << inf[j].fl_surname();
					file_2 << ": [] total credits:" << (inf[j].get_level() + 19) - inf[j].get_kalan() 
						 << "  credit right: " << inf[j].get_kalan() << endl ; 
				}	
			}
		}
		else if (array[1] == 'o' && array[4] == 'f' )		/*there print all student in the file*/
		{
			for (j = 0; j < size; ++j)
			{
				file_2 << inf[j].fl_name();
				file_2 <<  " ";
				file_2 << inf[j].fl_surname();
				file_2 <<  ": [] total credits:" << (inf[j].get_level() + 19) - inf[j].get_kalan() 
					 << "  credit right: " << inf[j].get_kalan() << endl ; 	
			}
		}		
		else
		{
			cout << "BLOCK !! Try again ." << endl ;
		}	
		test_try += 1;
	}	
	file.close();

	return 0;
}

int Student::enrollCourse(Course a)		/*for student take a new course*/
{
	bool ok = true;
	int i = 0 , j , cakisma = 0 , flag = 0;
	vector<int> v;

	for (i = 0; i < ders.size(); ++i)	/*if user try the twice to course*/
	{
		if (a.id == ders[i])
		{
			ok = false ;
		}
	}
	
	if (ok == true)		/*if course is a new course*/
	{
		for (i = a.bas_1; i < a.bit_1; ++i)
		{
			if (prog[a.gun_1][i] >= 1)
			{
				cakisma += 1;		
			}
		}
		if (a.gun_2 != 0)
		{
			for (i = a.bas_2; i < a.bit_2; ++i)
			{
				if (prog[a.gun_2][i] >= 1)
				{
					cakisma += 1;
				}
			}
		}
		if (a.gun_3 != 0)
		{
			for (i = a.bas_3; i < a.bit_3; ++i)
			{
				if (prog[a.gun_3][i] >= 1)
				{
					cakisma += 1;
				}
			}
		}
		if (cakisma > 1)	/*if student cant take a course*/
		{
			ok = false;
		}		
	}

	if (kalan >= a.credit && ok == true)	/*if student can take a course*/
	{

		for (i = a.bas_1; i < a.bit_1; ++i)
		{
			prog[a.gun_1][i] += 1 ;
		}
		if (a.gun_2 != 0)					/*there assign the scledule*/
		{
			for (i = a.bas_2; i < a.bit_2; ++i)
			{
				prog[a.gun_2][i] += 1;
			}
		}
		if (a.gun_3 != 0)
		{
			for (i = a.bas_3; i < a.bit_3; ++i)
			{
				prog[a.gun_3][i] += 1;
			}
		} 

		i = 0;
		v.resize(ders.size() + 1);		/*there take a new memory for course */
		for (i = 0; i < ders.size(); ++i)
		{
			v[i] = ders[i];
		}
		v[i] = a.id;
		ders = v;

		input_kalan(kalan - a.credit) ;		/*there assign the new credit*/
		cout << "DONE!" << endl ;
	}
	else
	{
		cout << "BLOCK! Because of (credits [" << kalan << "] Overlap [" 
			 << a.credit << "] )" << endl ; 
	}
	return kalan;
}
int Student::disenroll(Course a)	/*for student out course*/
{
	bool ok = false;
	int i = 0 , j , flag = 1 ;

	while(i < ders.size())		/*if user enter a false input or false id for course*/
	{
		if (a.id == ders[i])
		{
			ders[i] = -1;
			ok = true ;
		}
		i += 1;
	}

	if (ok == true)		/*if user enter a true id*/
	{
		for (i = a.bas_1; i < a.bit_1; ++i)
		{
			prog[a.gun_1][i] -= 1;
		}
		if (a.gun_2 != 0)
		{
			for (i = a.bas_2; i < a.bit_2; ++i)		/*there assign for out*/
			{
				prog[a.gun_2][i] -= 1;
			}
		}
		if (a.gun_3 != 0)
		{
			for (i = a.bas_3; i < a.bit_3; ++i)
			{
				prog[a.gun_3][i] -= 1;
			}
		}

		input_kalan(kalan + a.credit) ;		/*there assign the new credit*/
		cout << "DONE!" << endl ;
	}
	else
	{
		cout << "BLOCK! Because of (credits [" << kalan << "] Overlap [" 
			 << a.credit << "] )" << endl ; 
	}
	return kalan;
}

void Student::extractSchedule()		/*there print the exract Schedule*/
{
	int i , j ;
	cout << "______|" << "   8    " << "   9    ";
	for (i = 10; i < 17; ++i)
	{
		cout << "   " << i << "   " ;
	}
	cout << endl;
	for (i = 1; i < 6; ++i)		/*have a five days*/
	{
		if (i == 1)
		{
			cout << "MON   :";
		}
		else if (i == 2)
		{
			cout << "TUES  :";
		}
		else if (i == 3)
		{
			cout << "WEDNES:";
		}
		else if (i == 4)
		{
			cout << "THURS :";
		}
		else
		{
			cout << "FRI   :";
		}

		for (j = 8; j < 17; ++j)	/*clock in a 8 up to 17*/
		{
			if (prog[i][j] == 0)
			{
				cout << "  FREE  ";
			}
			else
			{
				cout << "  NOTF  ";
			}
		}
		cout << endl ;
	}
	cout << endl ;
}

void Student::enterClassroom(Classroom &a)	/*in classroom*/
{
	if (a.student_inroom > 0 )
	{
		a.student_inroom -= 1;	
	}
}	

void Student::quitClassroom(Classroom &a)	/*out classroom*/
{
	if (a.student_inroom < a.capacity )
	{ 
		a.student_inroom += 1;
	}
}

void Student::student_list()	/*there for memory allocation and give 0 for clock*/
{
	int i, j;
	prog.resize(6);
	for (i = 0; i < 6; ++i)
	{
		prog[i].resize(17);
		for (j = 0; j < 17; ++j)
		{
		 	prog[i][j] = 0;
		} 	
	} 
}

void print_list(Course cls[] , int long1)		/*there print the course list*/
{
	int i ;
	for (i = 0; i < long1; ++i)
	{
		cout << "(" << cls[i].id << ")" << cls[i].name << "  ";
	}
	cout << endl;
}

void take_file(Course cls[] ,Classroom clr[],int long1 , int long2)	/*there i read the file for assign course and classroom*/
{

	string array;
	int flag = 0 , first , i;

	ifstream file;
	file.open("courses_classrooms.txt");

	file >> array ;
	for (i = 0; i < long1; ++i)		/*assign course*/
	{
		file >> cls[i].id;
		file >> cls[i].name;
		file >> cls[i].code;	
		file >> cls[i].credit;
		file >> cls[i].total_hours;
		file >> cls[i].lecture_dates;
	}
	file >> array ;
	for (i = 0; i < long2; ++i)		/*assign Classroom*/
	{
		file >> clr[i].id;
		file >> clr[i].c_no;
		file >> clr[i].capacity;
		clr[i].student_inroom = clr[i].capacity;	
	}
	file.close();
}


/*if day is MON-12-14   this function distroy the 3 veriable ; first = MON    second=12  third=14   ;  for course all day*/
void check_list(Course cls[],int long1 )   /*this function same sscanf==checl_list */
{
	int i , j;
	string array;
	for (i = 0; i < long1; ++i)		/*there find all course*/
	{
		j = 0;
		array = cls[i].lecture_dates;		

		if (array[j] == 'M')
		{
			cls[i].gun_1 = 1;
		}
		else if (array[j] == 'T' && array[j+1] == 'U')
		{
			cls[i].gun_1 = 2;
		}
		else if (array[j] == 'W' )								/*for find first day*/
		{
			cls[i].gun_1 = 3;			
		}
		else if (array[j] == 'T' )
		{
			cls[i].gun_1 = 4;			
		}
		else
		{
			cls[i].gun_1 = 5;
		}

		while(array[j] != '_')
		{
			j += 1;
		}	
		j += 1;

		if (array[j] == '8')	/*for find start clock in first day*/
		{
			cls[i].bas_1 = 8;
		}
		else if (array[j] == '9')
		{
			cls[i].bas_1 = 9;		
		}
		else
		{
			j += 1;
			if (array[j] == '0')
			{
				cls[i].bas_1 = 10;
			}
			else if (array[j] == '1')							/*for find start clock in first day*/
			{
				cls[i].bas_1 = 11;		
			}
			else if (array[j] == '2')
			{
				cls[i].bas_1 = 12;		
			}
			else if (array[j] == '3')
			{
				cls[i].bas_1 = 13;		
			}
			else if (array[j] == '4')
			{
				cls[i].bas_1 = 14;		
			}
			else if (array[j] == '5')
			{
				cls[i].bas_1 = 15;		
			}
			else if (array[j] == '6')	/*for find start clock in first day*/
			{
				cls[i].bas_1 = 16;		
			}
			else
			{
				cls[i].bas_1 = 17;		
			}															
		}
		j += 2;
		if (array[j] == '8')	/*for find finish clock in first day*/
		{
			cls[i].bit_1 = 8;
		}
		else if (array[j] == '9')
		{
			cls[i].bit_1 = 9;		
		}
		else
		{
			j += 1;
			if (array[j] == '0')
			{
				cls[i].bit_1 = 10;
			}
			else if (array[j] == '1')
			{
				cls[i].bit_1 = 11;		
			}
			else if (array[j] == '2')						/*for find finish clock in first day*/
			{
				cls[i].bit_1 = 12;		
			}
			else if (array[j] == '3')
			{
				cls[i].bit_1 = 13;		
			}
			else if (array[j] == '4')
			{
				cls[i].bit_1 = 14;		
			}
			else if (array[j] == '5')
			{
				cls[i].bit_1 = 15;		
			}
			else if (array[j] == '6')	/*for find finish clock in first day*/
			{
				cls[i].bit_1 = 16;		
			}
			else
			{
				cls[i].bit_1 = 17;		
			}															
		}
		if (array[j+1] == ',')/*up to first class after up to second class //////if have a second day*/
		{
			j += 2;	
		
			if (array[j] == 'M')
			{
				cls[i].gun_2 = 1;
			}
			else if (array[j] == 'T' && array[j+1] == 'U')
			{
				cls[i].gun_2 = 2;
			}
			else if (array[j] == 'W' )										/*for find second day*/
			{
				cls[i].gun_2 = 3;			
			}
			else if (array[j] == 'T' )
			{
				cls[i].gun_2 = 4;			
			}
			else
			{
				cls[i].gun_2 = 5;
			}

			while(array[j] != '_')
			{
				j += 1;
			}	
			j += 1;

			if (array[j] == '8')	/*for find start clock in second day*/
			{
				cls[i].bas_2 = 8;
			}
			else if (array[j] == '9')
			{
				cls[i].bas_2 = 9;		
			}
			else
			{
				j += 1;
				if (array[j] == '0')
				{
					cls[i].bas_2 = 10;
				}
				else if (array[j] == '1')							/*for find start clock in second day*/
				{
					cls[i].bas_2 = 11;		
				}
				else if (array[j] == '2')
				{
					cls[i].bas_2 = 12;		
				}
				else if (array[j] == '3')
				{
					cls[i].bas_2 = 13;		
				}
				else if (array[j] == '4')
				{
					cls[i].bas_2 = 14;		
				}
				else if (array[j] == '5')	/*for find start clock in second day*/
				{
					cls[i].bas_2 = 15;		
				}
				else if (array[j] == '6')
				{
					cls[i].bas_2 = 16;		
				}
				else
				{
					cls[i].bas_2 = 17;		
				}															
			}
			j += 2;
			if (array[j] == '8')
			{
				cls[i].bit_2 = 8;
			}
			else if (array[j] == '9')
			{
				cls[i].bit_2 = 9;		
			}
			else
			{
				j += 1;
				if (array[j] == '0')
				{
					cls[i].bit_2 = 10;
				}
				else if (array[j] == '1')
				{
					cls[i].bit_2 = 11;		
				}
				else if (array[j] == '2')							/*for find finish clock in second day*/
				{
					cls[i].bit_2 = 12;		
				}
				else if (array[j] == '3')
				{
					cls[i].bit_2 = 13;		
				}
				else if (array[j] == '4')
				{
					cls[i].bit_2 = 14;		
				}
				else if (array[j] == '5')
				{
					cls[i].bit_2 = 15;		
				}
				else if (array[j] == '6')
				{
					cls[i].bit_2 = 16;		
				}
				else
				{
					cls[i].bit_2 = 17;		
				}															
			}
		}	
		else  /*if course is only one day*/		
		{
			cls[i].gun_2 = 0;
		}

		if (array[j+1] == ',')/*up to second class after up to thirt class /////////// if have a third day */
		{
			j += 2;
			if (array[j] == 'M')
			{
				cls[i].gun_3 = 1;
			}
			else if (array[j] == 'T' && array[j+1] == 'U')
			{
				cls[i].gun_3 = 2;
			}
			else if (array[j] == 'W' )										/*for find thirs day*/
			{
				cls[i].gun_3 = 3;			
			}
			else if (array[j] == 'T' )
			{
				cls[i].gun_3 = 4;			
			}
			else
			{
				cls[i].gun_3 = 5;
			}

			while(array[j] != '_')
			{
				j += 1;
			}	
			j += 1;

			if (array[j] == '8')	/*for find start clock in thirs day*/
			{
				cls[i].bas_3 = 8;
			}
			else if (array[j] == '9')
			{
				cls[i].bas_3 = 9;		
			}
			else
			{
				j += 1;
				if (array[j] == '0')
				{
					cls[i].bas_3 = 10;
				}
				else if (array[j] == '1')						/*for find start clock in thirs day*/
				{
					cls[i].bas_3 = 11;		
				}
				else if (array[j] == '2')
				{
					cls[i].bas_3 = 12;		
				}
				else if (array[j] == '3')
				{
					cls[i].bas_3 = 13;		
				}
				else if (array[j] == '4')
				{
					cls[i].bas_3 = 14;		
				}
				else if (array[j] == '5')
				{
					cls[i].bas_3 = 15;		
				}
				else if (array[j] == '6')	/*for find start clock in thirs day*/
				{
					cls[i].bas_3 = 16;		
				}
				else
				{
					cls[i].bas_3 = 17;		
				}															
			}
			j += 2;
			if (array[j] == '8')
			{
				cls[i].bit_3 = 8;
			}
			else if (array[j] == '9')  /*for find finish clock in thirs day*/
			{
				cls[i].bit_3 = 9;		
			}
			else
			{
				j += 1;
				if (array[j] == '0')
				{
					cls[i].bit_3 = 10;
				}
				else if (array[j] == '1')
				{
					cls[i].bit_3 = 11;		
				}
				else if (array[j] == '2')
				{
					cls[i].bit_3 = 12;		
				}
				else if (array[j] == '3')	/*for find finish clock in thirs day*/
				{
					cls[i].bit_3 = 13;		
				}
				else if (array[j] == '4')
				{
					cls[i].bit_3 = 14;		
				}
				else if (array[j] == '5')
				{
					cls[i].bit_3 = 15;		
				}
				else if (array[j] == '6')	/*for find finish clock in thirs day*/
				{
					cls[i].bit_3 = 16;		
				}
				else
				{
					cls[i].bit_3 = 17;		
				}															
			}
		}	
		else 	/*if course is not in third day*/
		{
			cls[i].gun_3 = 0;
		}		
	}
}