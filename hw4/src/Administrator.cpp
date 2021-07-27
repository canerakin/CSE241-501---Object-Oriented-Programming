#include "Administrator.h"

namespace Administrators
{
	Administrator::Administrator()
	{
				/*called constructor*/
	}

	Administrator::Administrator(Administrator & temp)
	{
				/*call copy constructor*/
		this->pid = temp.take_pid() ;
		this->password = temp.take_password() ;		
	}

	Administrator::~Administrator()
	{
				/*called destructor*/
	}

	Administrator& Administrator::operator=(Administrator & temp)
	{
		this->pid = temp.take_pid() ;
		this->password = temp.take_password() ;
		return *this;
	}

	void Administrator::arrangeClassroom(Course course[] ,Classroom classroom[] , int count_courses ,int count_classrooms, int number , int size )
	{
		course[number].in_classroom = classroom[size].get_id();		/*there have a all size and normal propose*/
	}

	void Administrator::arrangeTimeTable(Course course[] ,Classroom classroom[] , int count_courses ,int count_classrooms, int number , int size)
	{
		int day = 0, clock = 0 ;
		string array;
		day = number / 8 ;
		clock = number % 8 ;
		int i , j;
		if (day == 0)			/*first of all there assign the first day*/
		{
			array = "MON_";
		}
		else if (day == 1)
		{
			array = "TUES_";
		}
		else if (day == 2)
		{
			array = "WEDNES_";
		}
		else if (day == 3)
		{
			array = "THURS_";
		}
		else
		{
			array = "FRI_";
		}

		if (clock == 0)	/*there assign the first clock*/
		{
			array += "09";
		}
		else if (clock == 1)
		{
			array += "10";
		}
		else if (clock == 2)
		{
			array += "11";
		}
		else if (clock == 3 )
		{
			array += "12";
		}	
		else if (clock == 4)
		{
			array += "13";
		}
		else if (clock == 5)
		{
			array += "14";
		}
		else if (clock == 6)
		{
			array += "15";
		}
		else
		{
			array += "16";
		}

		for (i = clock ; i <= clock + course[size].total_hours ; ++i)	/*loop continue finish */
		{
			if (i == clock + course[size].total_hours)	/*if finish clock*/
			{
				if (i % 8 == 1)
				{
					array += "-10";
				}
				else if (i % 8 == 2)
				{
					array += "-11";
				}
				else if (i % 8 ==  3)
				{
					array += "-12";
				}	
				else if (i % 8 == 4)
				{
					array += "-13";
				}
				else if (i % 8 == 5)
				{
					array += "-14";
				}
				else if (i % 8 == 6)
				{
					array += "-15";
				}
				else if (i % 8 == 7)
				{
					array += "-16";
				}
			}
			else if (i % 8 == 7)		/*if continue the next day*/
			{
				array += "-17";
				if ( (i + 1) != (clock + course[size].total_hours) )
				{
					day += 1;
					if (day == 1)
					{
						array += ",TUES_09";
					}
					else if (day == 2)
					{
						array += ",WEDNES_09";
					}
					else if (day == 3)
					{
						array += ",THURS_09";
					}
					else
					{
						array += ",FRI_09";
					}
				}
			}

		}	 
		course[size].lecture_dates = array;	/*assign the dates*/
	}

	void Administrator::assign_pid(int number)
	{
		pid = number;
	}

	void Administrator::assign_password(int number)
	{
		password = number;
	}

	bool Administrator::check_password(int number)
	{
		if (password == number)
		{
			return true;
		}
		return false;
	}	

	int Administrator::take_pid() const 
	{
		return pid;
	}

	int Administrator::take_password() const 
	{
		return password;
	} 

}
	
