#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>

#include "Course.h"
#include "Classroom.h"

using namespace std;
using namespace Classrooms;

namespace Students
{
	class Student 	/*class*/
	{
		public:
			Student();
			Student(const Student & temp);
			~Student();
			Student& operator=(const Student & temp);

			void enterClassroom(Classroom &a);	
			void quitClassroom(Classroom &a);

			int get_level() const;		  
			int get_id()  const	;		  
			int get_kalan() const;		 
			string get_name() const	;	   
			string get_surname() const	; 
			int get_course() const ;
			int get_classrooms() const;
			int get_courses(int index) const;						
			void set_name(string a) ;	  
			void set_surname(string a) ; 		
			void set_level(int k); 	  
			void set_id(int k) ;   	  
			void set_kalan(int k) ;	
			void set_course();
			void set_classrooms(int k);
			void set_courses(int k);

			bool courses_control(int k);
		private:
			string Name;
			string Surname;
			int student_id;
			int level;
			int kalan;
			int classrooms;	/*save which classroom*/
			int * courses;	/*this obje for save course id*/
			int course;		/*take how many course*/
	};	
}
	
#endif

