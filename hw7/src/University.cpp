#include "University.h"
#include <iostream>

namespace use_University
{
	template<class T>
	University<T>::University()
	{
		/*constructor*/
		contribution = 0;
	}

	template<class T>
	University<T>::University(T num , string arr) :contribution(num) , name(arr)
	{

	}

	template<class T>
	University<T>::~University()
	{
		/*destructor*/
	}

	template<class T>
	University<T>::University(University<T> & temp)
	{
		contribution = temp.get_Contribution() ;
	}

	template<class T>
	University<T> & University<T>::operator=(const University<T> & temp)
	{
		contribution = temp.get_Contribution() ;
		return *this;
	}

	template<class T>
	void University<T>::set_Contribution(T num)
	{
		contribution += num ;
	}

	template<class T>
	T University<T>::get_Contribution() const 
	{
		return contribution ;
	}

	template<class T>
	void University<T>::set_Name_emp(string array)
	{
		name = array;
	}

	template<class T>
	string University<T>::get_Name_emp() const
	{
		return name;
	}

}