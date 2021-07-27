#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>


#include "Course.h"
#include "Classroom.h"
#include "Lecturer.h"
#include "Administrator.h"
#include "read_file.h"
#include "operation.h"

using namespace std;


int main()
{
	/*-------------------test function ---------------------*/
	int test_count_courses = 0, test_count_classrooms = 0 ;
	read_1_c_and_c(test_count_courses , test_count_classrooms);

	Course * test_course = new Course[test_count_courses] ;		/*dynamic*/
	Classroom * test_classroom = new Classroom[test_count_classrooms] ;		
	read_2_c_and_c(test_course ,test_classroom ,test_count_courses ,test_count_classrooms);		

	int test_count_lecturers = 0;
	read_3_lecturers_size(test_count_lecturers);	

	Lecturer * test_lecturer = new Lecturer[test_count_lecturers];	/*dynamic*/
	read_4_fill_lecturer(test_lecturer ,test_count_lecturers);	

	Administrator * test_administ = new Administrator[1];	/*dynamic*/
	int test_count_administ = 1;		

	/*thif function is loop and do all proses for test*/
	test_loop(test_course ,test_classroom ,test_lecturer ,test_administ ,test_count_courses ,test_count_classrooms ,test_count_lecturers ,test_count_administ);	

	delete[] test_administ;
	delete[] test_lecturer;
	delete[] test_course;
	delete[] test_classroom;
	/*------------------ test is finish -----------------------*/



	/*++++++++++++++++++ now user function ++++++++++++++++++++*/
	int count_courses = 0, count_classrooms = 0 ;
	read_1_c_and_c(count_courses , count_classrooms);

	Course * course = new Course[count_courses] ;	/*dynamic*/
	Classroom * classroom = new Classroom[count_classrooms] ;
	read_2_c_and_c(course ,classroom ,count_courses ,count_classrooms);

	int count_lecturers = 0;
	read_3_lecturers_size(count_lecturers);	

	Lecturer * lecturer = new Lecturer[count_lecturers];	/*dynamic*/
	read_4_fill_lecturer(lecturer ,count_lecturers);

	Administrator * administ = new Administrator[1];	/*dynamic*/
	int count_administ = 1;	

	/*thif function is loop and do all proses for user*/
	user_loop(course ,classroom ,lecturer ,administ ,count_courses ,count_classrooms ,count_lecturers ,count_administ);

	delete[] administ;
	delete[] lecturer;
	delete[] course;
	delete[] classroom;
	return 0;	
}
