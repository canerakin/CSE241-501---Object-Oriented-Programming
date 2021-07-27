#include "Lecturer.h"

namespace Lecturers
{
	Lecturer::Lecturer()
	{
				/*called constructor*/		
		pid = 0;
		pid_2 = 0;
	}


	Lecturer::~Lecturer()
	{
				/*called destructor*/		
	}

	Lecturer::Lecturer(Lecturer & temp)
	{
				/*call copy constructor*/
		this->Name = temp.take_Name() ;
		this->Surname = temp.take_Surname();
		this->personal_id = temp.take_Personal_id();
		this->title = temp.take_Title();
		this->proffesions = temp.take_Proffesions();
		this->courses = temp.take_Courses();
		this->pid = temp.take_pid();
		this->pid_2 = temp.take_pid_2();
	}

	Lecturer& Lecturer::operator=(Lecturer & temp)
	{
		this->Name = temp.take_Name() ;
		this->Surname = temp.take_Surname();
		this->personal_id = temp.take_Personal_id();
		this->title = temp.take_Title();
		this->proffesions = temp.take_Proffesions();
		this->courses = temp.take_Courses();
		this->pid = temp.take_pid();
		this->pid_2 = temp.take_pid_2();
		return *this;
	}	

	void Lecturer::assign_pid_zero()
	{
		pid = 0;
	}
	void Lecturer::assign_pid_2_zero()
	{
		pid_2 = 0;
	}

	Course * Lecturer::proposeCourse(string array ,Course course[] ,int & count_courses  )	/*add the new course*/
	{
		int i = 0 , j = 0 ;
		string array1 , array2 ,array3 ;
		int count ,count1 ,count2 ,count3 ; 

		istringstream some_stream(array);
		some_stream >> array1 >> count >> array2 >> count1 >> count2 >> count3 >> array3 ;	/*there distroy the input*/	

		count_courses += 1;
		Course * temp = new Course[count_courses] ;
		for (i = 0; i < count_courses - 1; ++i)		/*copy the new course*/
		{
			temp[i] = course[i] ;
		}

		temp[count_courses - 1].id = count_courses ;	/*assign the new course[]*/
		temp[count_courses - 1].name = array2 ;
		temp[count_courses - 1].code = count1 ;
		temp[count_courses - 1].credit = count2 ;
		temp[count_courses - 1].total_hours = count3 ;
		temp[count_courses - 1].field = array3 ;
		temp[count_courses - 1].isMandatory = false ;
		temp[count_courses - 1].lecture_dates = '\0';
		temp[count_courses - 1].in_classroom = 0;

		return temp ;	/*return new course*/
	}

	void Lecturer::assignCourse(Course course[] ,int count_courses)
	{
		course[count_courses].pid = personal_id ;	
		pid_2 += 1;		/*how many give course */
	}

	void Lecturer::assign_Name(string array)
	{
		Name = array;
	}

	void Lecturer::assign_Surname(string array)
	{
		Surname = array;
	}

	void Lecturer::assign_Personal_id(int number)
	{
		personal_id = number;
	}

	void Lecturer::assign_Title(string array)
	{
		title = array;
	}

	void Lecturer::assign_Proffesions(string array)
	{
		proffesions = array;
	}

	void Lecturer::assign_Courses(string array)
	{
		courses = array;
	}
	void Lecturer::assign_pid()
	{
		pid += 1;
	}
	void Lecturer::assign_pid_2()
	{
		pid_2 += 1;
	}

	string Lecturer::take_Name() const 
	{
		return Name;
	}

	string Lecturer::take_Surname() const 
	{
		return Surname;
	}

	int Lecturer::take_Personal_id() const 
	{
		return personal_id;
	}

	string Lecturer::take_Title() const 
	{
		return title;
	}

	string Lecturer::take_Proffesions() const 
	{
		return proffesions;
	}

	string Lecturer::take_Courses() const 
	{
		return courses;
	} 
	int Lecturer::take_pid() const
	{
		return pid;
	}
	int Lecturer::take_pid_2() const
	{
		return pid_2;
	}

}
	