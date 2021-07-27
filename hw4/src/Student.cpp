#include "Student.h"


namespace Students
{	
	Student::Student()
	{
				/*call constructor*/
		kalan = 0;
		classrooms = -1;
		course = 1;
		courses = new int[course];
	}

	Student::Student(const Student & temp)
	{
				/*call copy constructor*/
		int i;
		Name = temp.get_name() ;		
		Surname = temp.get_surname(); ;
		student_id = temp.get_id();
		level = temp.get_level();
		kalan = temp.get_kalan() ;
		classrooms = temp.get_classrooms();			
		course = temp.get_course();			

		delete [] courses;	
		courses = new int[course];
		for (i = 0; i < course; ++i)
		{
			courses[i] = temp.get_courses(i);
		}			
	}

	Student::~Student()
	{
				/*called destructor*/
		delete [] courses;		
	}

	Student& Student::operator=(const Student & temp)
	{
				/*overloaded assign operator*/
		int i;
		Name = temp.get_name() ;		
		Surname = temp.get_surname(); ;
		student_id = temp.get_id();
		level = temp.get_level();
		kalan = temp.get_kalan() ;
		classrooms = temp.get_classrooms();			
		course = temp.get_course();			

		delete [] courses;	
		courses = new int[course];
		for (i = 0; i < course; ++i)
		{
			courses[i] = temp.get_courses(i);
		}			

		return *this;
	}

	void Student::enterClassroom(Classroom &a)	/*in classroom*/
	{
		if (a.get_student_inroom() < a.get_capacity() )
		{
			a.set_student_inroom(a.get_student_inroom() + 1) ;
		}
	}	

	void Student::quitClassroom(Classroom &a)	/*out classroom*/
	{
		if (a.get_student_inroom() > 0 )
		{ 
			a.set_student_inroom(a.get_student_inroom() - 1) ;
		}
	}

	int Student::get_level() const		  
	{ 
		return level; 
	}

	int Student::get_id()  const			  
	{ 
		return student_id; 
	}

	int Student::get_kalan() const		  
	{ 
		return kalan; 
	}

	string Student::get_name() const		  
	{
		return Name;
	} 

	string Student::get_surname() const	  
	{
		return Surname;
	} 

	int Student::get_course() const
	{
		return course;
	}

	int Student::get_classrooms() const
	{
		return classrooms;
	}

	int Student::get_courses(int index) const
	{
		return courses[index];
	}

	void Student::set_name(string a) 	  
	{ 
		Name = a;
	}

	void Student::set_surname(string a)  	
	{ 
		Surname = a;
	}		

	void Student::set_level(int k) 	  
	{ 
		level = k; 
		kalan = level + 19;
	}

	void Student::set_id(int k)    	  
	{ 
		student_id = k; 
	}

	void Student::set_kalan(int k) 	  
	{ 
		kalan = k ;
	}

	void Student::set_course()
	{
		course = 1;
		delete [] courses;
		courses = new int[course];
	}

	void Student::set_classrooms(int k)
	{
		classrooms = k;	
	}

	void Student::set_courses(int k)	/*if student take a lot of course*/
	{
		int * temp ;
		temp = new int[course + 1];
		int i;
		courses[course-1] = k;
		for (i = 0; i < course; ++i)
		{
			temp[i] = courses[i];
		}
		courses = temp ;
		course += 1;
	}

	bool Student::courses_control(int k)   /*if student take k (course id)*/
	{
		int i;
		for (i = 0; i < course; ++i)
		{
			if (k == courses[i] )
			{
				return true;
			}
		}
		return false ;
	}

}
