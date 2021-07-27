#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>


#include "Course.h"
#include "Classroom.h"
#include "read_file.h"
#include "Student.h"
#include "Lecturer.h"
#include "Administrator.h"
#include "operation.h"

using namespace std;
using namespace Classrooms;
using namespace Administrators;
using namespace Lecturers;
using namespace Students;

int main()
{
	/*-------------------test function ---------------------*/
	/*There first of all print the function with test.txt*/
	
	int test_count_courses = 0, test_count_classrooms = 0 ;
	read_1_c_and_c(test_count_courses , test_count_classrooms);

	Course * test_course = new Course[test_count_courses] ;	
	Classroom * test_classroom = new Classroom[test_count_classrooms] ;
	read_2_c_and_c(test_course ,test_classroom ,test_count_courses ,test_count_classrooms);

	int test_count_lecturers = 0;
	read_3_lecturers_size(test_count_lecturers);	

	Lecturer * test_lecturer = new Lecturer[test_count_lecturers];	
	read_4_fill_lecturer(test_lecturer ,test_count_lecturers);

	Administrator * test_administ = new Administrator[1];	
	int test_count_administ = 1;	

	Student * test_student = new Student[1];
	int test_count_students = 1;

	test_loop(test_course ,test_classroom ,test_lecturer ,test_administ , test_student ,test_count_courses ,test_count_classrooms ,test_count_lecturers ,test_count_administ ,test_count_students);

	delete[] test_student;		/*class*/
	delete[] test_administ;		/*class*/
	delete[] test_lecturer; 	/*class*/
	delete[] test_course;		/*structure*/
	delete[] test_classroom;	/*class*/
	
	/*------------------ test is finish -----------------------*/



	/*++++++++++++++++++ now user function ++++++++++++++++++++*/

	int count_courses = 0, count_classrooms = 0 ;
	read_1_c_and_c(count_courses , count_classrooms);

	Course * course = new Course[count_courses] ;	
	Classroom * classroom = new Classroom[count_classrooms] ;
	read_2_c_and_c(course ,classroom ,count_courses ,count_classrooms);

	int count_lecturers = 0;
	read_3_lecturers_size(count_lecturers);	

	Lecturer * lecturer = new Lecturer[count_lecturers];	
	read_4_fill_lecturer(lecturer ,count_lecturers);

	Administrator * administ = new Administrator[1];	
	int count_administ = 1;	

	Student * student = new Student[1];
	int count_students = 1;

	user_loop(course ,classroom ,lecturer ,administ , student ,count_courses ,count_classrooms ,count_lecturers ,count_administ ,count_students);

	delete[] student; 		/*class*/
	delete[] administ; 		/*class*/
	delete[] lecturer;		/*class*/
	delete[] course;		/*structure*/
	delete[] classroom;		/*class*/
	


	return 0;	
}
