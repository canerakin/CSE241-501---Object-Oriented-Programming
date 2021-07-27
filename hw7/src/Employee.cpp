#include "Employee.h"
#include <iostream>

namespace use_Employee
{

	template<class T> 	
	Employee<T>::Employee()
	{
				/*called constructor*/		
		pid = 0;
		happiness = 0;
		name = "NULL" ;
		surname = "NULL" ;
	}

	template<class T> 
	Employee<T>::Employee(string arr ,string arr1 ,int num ,int num1 )
		:name(arr) ,surname(arr1) ,pid(num) ,happiness(num1) 
	{

	}

	template<class T> 
	Employee<T>::Employee(University<T> * temp)
	{
				/*called constructor*/		
		pid = 0;
		happiness = 0;
		emp = temp;
	}

	template<class T> 
	Employee<T>::~Employee()
	{
				/*called destructor*/		
	}

	template<class T> 
	Employee<T>::Employee(Employee & temp)
	{
		/*call copy constructor*/
		pid = temp.get_Pid();
		happiness = temp.get_Happiness() ;
		name = temp.get_Name() ;
		surname = temp.get_Surname() ;
		emp = temp.get_Emp() ;	
	}
	template<class T> 
	Employee<T> & Employee<T>::operator=(const Employee & temp)
	{
		/*call overloaded assignment*/
		pid = temp.get_Pid();
		happiness = temp.get_Happiness() ;
		name = temp.get_Name() ;
		surname = temp.get_Surname() ;
		emp = temp.get_Emp() ;	
		return *this;
	}


	/*-----------------ACTİONS-------------*/
	template<class T> 
	void Employee<T>::drinkTea()
	{
		happiness += 5 ;
		emp->set_Contribution( -2 );
	}
	template<class T> 
	void Employee<T>::submitPetition()
	{
		happiness += 1 ;
		emp->set_Contribution( -2 );			
	}


	/*employee - - university*/
	template<class T> 
	void Employee<T>::employ(University<T> * temp)
	{
		emp = temp;
	}
	template<class T> 	
	void Employee<T>::set_Contribution(int num)
	{
		emp->set_Contribution(num);
	}
	template<class T> 
	int Employee<T>::get_Contribution() const
	{
		return emp->get_Contribution() ;
	}


	/*----------Standart set-get functions------------*/
	template<class T> 	
	void Employee<T>::set_Pid(int num)
	{
		pid = num ;
	}
	template<class T> 
	void Employee<T>::set_Happiness(int num)
	{
		happiness += num ;
	}
	template<class T> 
	void Employee<T>::set_Name(string array)
	{
		name = array ;
	}
	template<class T> 
	void Employee<T>::set_Surname(string array)
	{
		surname = array ;
	}

	template<class T>
	int Employee<T>::get_Pid() const 
	{
		return pid;
	}

	template<class T>
	int Employee<T>::get_Happiness() const 
	{
		return happiness;
	}

	template<class T>
	string Employee<T>::get_Name() const 
	{
		return name;
	}

	template<class T>
	string Employee<T>::get_Surname() const 
	{
		return surname;
	}


	template<class T>
	University<T> * Employee<T>::get_Emp() const
	{
		return emp;
	}

}
	