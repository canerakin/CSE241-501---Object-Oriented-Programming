#include "Employee.h"
#include <iostream>

namespace use_Employee
{
	Employee::Employee()
	{
				/*called constructor*/		
		pid = 0;
		happiness = 0;
		name = "NULL" ;
		surname = "NULL" ;
	}
	
	Employee::Employee(string arr ,string arr1 ,int num ,int num1 )
		:name(arr) ,surname(arr1) ,pid(num) ,happiness(num1) 
	{

	}

	Employee::Employee(University * temp)
	{
				/*called constructor*/		
		pid = 0;
		happiness = 0;
		emp = temp;
	}

	Employee::~Employee()
	{
				/*called destructor*/		
	}

	Employee::Employee(Employee & temp)
	{
		/*call copy constructor*/
		pid = temp.get_Pid();
		happiness = temp.get_Happiness() ;
		name = temp.get_Name() ;
		surname = temp.get_Surname() ;
		emp = temp.get_Emp() ;	
	}

	Employee & Employee::operator=(const Employee & temp)
	{
		/*call overloaded assignment*/
		pid = temp.get_Pid();
		happiness = temp.get_Happiness() ;
		name = temp.get_Name() ;
		surname = temp.get_Surname() ;
		emp = temp.get_Emp() ;	
		return *this;
	}

	void Employee::drinkTea()
	{
		happiness += 5 ;
		emp->set_Contribution( -2 );
	} 

	void Employee::submitPetition()
	{
		happiness += 1;
		emp->set_Contribution( -2 );
	}

	void Employee::employ()
	{

	}


	/*employee - - university*/

	void Employee::emp_uni(University * temp)
	{
		emp = temp;
	}

	void Employee::set_Contribution(int num)
	{
		emp->set_Contribution(num);
	}

	int Employee::get_Contribution() const
	{
		return emp->get_Contribution() ;
	}

	void Employee::set_Pid(int num)
	{
		pid = num ;
	}

	void Employee::set_Happiness(int num)
	{
		happiness += num ;
	}

	void Employee::set_Name(string array)
	{
		name = array ;
	}

	void Employee::set_Surname(string array)
	{
		surname = array ;
	}


	int Employee::get_Pid() const 
	{
		return pid;
	}

	int Employee::get_Happiness() const 
	{
		return happiness;
	}

	string Employee::get_Name() const 
	{
		return name;
	}

	string Employee::get_Surname() const 
	{
		return surname;
	}

	University * Employee::get_Emp() const
	{
		return emp;
	}
}
	