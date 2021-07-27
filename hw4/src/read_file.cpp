#include "read_file.h"


void read_1_c_and_c(int & num1 , int & num2)	/*this function find the course and classroom size*/
{
	int flag = 1;
	string array; 
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
			num1 += 1;
		}
		else
		{
			num2 += 1;
		}
	}
	file.close();

	num1 /= 6;			/*there i found for memory allocation*/
	num2 /= 3;
}

void read_2_c_and_c(Course course[] ,Classroom classroom[] , int count_courses ,int count_classrooms)	/*this function propose the course*/
{
	string array;
	int i , num;

	ifstream file;
	file.open("courses_classrooms.txt");

	file >> array ;
	for (i = 0; i < count_courses; ++i)		/*assign course*/
	{
		file >> course[i].id;
		file >> course[i].name;
		file >> course[i].code;	
		file >> course[i].credit;
		file >> course[i].total_hours;
		file >> course[i].field;
		course[i].isMandatory = true ;
		course[i].pid = 0;
		course[i].lecture_dates = '\0';
		course[i].in_classroom = 0;
	}
	file >> array ;
	for (i = 0; i < count_classrooms; ++i)		/*assign Classroom*/
	{
		file >> num ;
		classroom[i].set_id(num);
		file >> array;
		classroom[i].set_c_no(array);
		file >> num;
		classroom[i].set_capacity(num);
	}
	file.close();	
}

void read_3_lecturers_size(int & count_lecturers)	
{
	string array; 
	ifstream file;
	file.open("lecturers.txt");
	
	while(!file.eof())
	{
		getline(file,array);
		count_lecturers += 1;
	}
	file.close();	
}


void read_4_fill_lecturer(Lecturer lecturer[] ,int count_lecturers)		
{
	string array;
	int i ,j , number;

	ifstream file;
	file.open("lecturers.txt");

	for (i = 0; i < count_lecturers; ++i)		
	{
		file >> number;
		lecturer[i].assign_Personal_id(number);
		file >> array;
		lecturer[i].assign_Name(array);
		file >> array;	
		lecturer[i].assign_Surname(array);
		file >> array;
		lecturer[i].assign_Title(array);
		file >> array;
		for (j = 0; array[j] != '\0' ; ++j)
		{
			if (array[j] == ',')
			{
				array[j] = ' ' ;
			}
		}
		lecturer[i].assign_Proffesions(array);
		lecturer[i].assign_pid_zero();
		lecturer[i].assign_pid_2_zero();
	}
	file.close();	
}

