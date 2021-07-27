#ifndef LECTURER_H_
#define LECTURER_H_

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <vector>

#include "Course.h"
#include "Classroom.h"

using namespace std;

class Lecturer 	/*class*/
{
	public:
		Course * proposeCourse(string array ,Course course[] ,int & count_courses  );
		void assignCourse(Course course[] ,int count_courses);

		void assign_pid_zero();
		void assign_pid_2_zero();
		void assign_Name(string array);
		void assign_Surname(string array);
		void assign_Personal_id(int number);
		void assign_Title(string array);
		void assign_Proffesions(string array);
		void assign_Courses(string array);
		void assign_pid();
		void assign_pid_2();
		string take_Name() const ;
		string take_Surname() const ;
		int take_Personal_id() const ;
		string take_Title() const ;
		string take_Proffesions() const ;
		string take_Courses() const ;
		int take_pid() const ;
		int take_pid_2() const ;
	
	private:
		string Name;
		string Surname;
		int personal_id;
		string title;
		string proffesions ;
		string courses;
		int pid;	/*keep how many propose*/
		int pid_2;	/*keep how many propose*/
};
	
#endif

