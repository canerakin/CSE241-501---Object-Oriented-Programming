#include "Classroom.h"

namespace Classrooms
{	
	Classroom::Classroom()
	{
				/*called constructor*/		
		student_inroom = 0;
	}

	Classroom::~Classroom()
	{
				/*called destructor*/		
	}

	Classroom::Classroom(Classroom & temp)
	{
				/*call copy constructor*/
		this->id = temp.get_id() ;
		this->c_no = temp.get_c_no();
		this->capacity = temp.get_capacity();
		this->student_inroom = temp.get_student_inroom();

	}

	Classroom& Classroom::operator=(Classroom & temp)
	{
				/*call asisigment*/
		this->id = temp.get_id() ;
		this->c_no = temp.get_c_no();
		this->capacity = temp.get_capacity();
		this->student_inroom = temp.get_student_inroom();
		return *this;
	}	

	int Classroom::get_id() const 
	{
		return id;
	}

	string Classroom::get_c_no() const 
	{
		return c_no;
	}

	int Classroom::get_capacity() const 
	{
		return capacity;
	}

	int Classroom::get_student_inroom() const 
	{
		return student_inroom;
	}

	void Classroom::set_id(int num)
	{
		id = num ;
	}

	void Classroom::set_c_no(string num)
	{
		c_no = num;		
	}

	void Classroom::set_capacity(int num) 
	{
		capacity = num;
	}

	void Classroom::set_student_inroom(int num)
	{
		student_inroom = num;
	}
}
