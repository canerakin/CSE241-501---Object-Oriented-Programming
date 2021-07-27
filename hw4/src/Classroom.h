#ifndef CLASSROOM_H_
#define CLASSROOM_H_

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

namespace Classrooms
{
	class Classroom
	{
		public:
			Classroom();
			~Classroom();			
			Classroom(Classroom & temp);
			Classroom& operator=(Classroom & temp);
			
			int get_id() const ;
			string get_c_no() const ;
			int get_capacity() const ;
			int get_student_inroom() const ;
			void set_id(int num);
			void set_c_no(string num);
			void set_capacity(int num) ;
			void set_student_inroom(int num);	


		private:

			int id ;
			string c_no;
			int capacity;
			int student_inroom;	
	};
}

#endif

