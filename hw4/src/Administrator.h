#ifndef ADMINISTRATOR_H_
#define ADMINISTRATOR_H_

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <vector>

#include "Course.h"
#include "Classroom.h"

using namespace std;
using namespace Classrooms;

namespace Administrators
{
	class Administrator 	/*class*/
	{
		public:
			Administrator();
			Administrator(Administrator & temp);			
			~Administrator();
			Administrator& operator=(Administrator & temp);
			void arrangeClassroom(Course course[] ,Classroom classroom[] , int count_courses ,int count_classrooms, int number , int size );
			void arrangeTimeTable(Course course[] ,Classroom classroom[] , int count_courses ,int count_classrooms, int number , int size);

			void assign_pid(int number);
			void assign_password(int number);
			bool check_password(int number);		
			int take_pid() const ;
			int take_password() const ; 
		private:
			int pid;
			int password;
	};

}
	
#endif

