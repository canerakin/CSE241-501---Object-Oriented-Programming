#include "Officer.h"
#include <iostream>

namespace use_Officer
{
	template <class T>
	Officer<T>::Officer() :Employee<T>()
	{
		/*constructor*/
	}

	template <class T>
	Officer<T>::Officer(string arr ,string arr1 ,int num ,int num1 )
		:Employee<T>(arr ,arr1 ,num ,num1 )
	{

	}

	/*take in absract class be pure virtual*/
	template <class T>
	void Officer<T>::makeDoc()    
	{
		this->set_Happiness(-2) ;
		this->set_Contribution(3);		
	}
	template <class T>
	void Officer<T>::research()    
	{
		//set_Happiness(3) ;
		//set_Contribution(4);		
	}	
	template <class T>
	void Officer<T>::manageProcess()    
	{
		this->set_Happiness(-1) ;
		this->set_Contribution(2);		
	}
	template <class T>
	void Officer<T>::readHW()    
	{
		//set_Happiness(-3) ;
		//set_Contribution(2);		
	}
	template <class T>
	void Officer<T>::receivePetition()    
	{
		//set_Happiness(-1) ;
		//set_Contribution(-1);		
	}
	template <class T>
	void Officer<T>::giveLesson() 				/*Lecturer*/
	{
		//set_Happiness(1) ;
		//set_Contribution(5);		
	}
	template <class T>
	void Officer<T>::giveHW() 					/*Lecturer*/	
	{
		//set_Happiness(-2) ;
		//set_Contribution(1);
	}
	template <class T>
	void Officer<T>::seeSuccessfulStudent() 	/*Lec-research*/
	{
		//set_Happiness(10) ;
		//set_Contribution(0);
	}
	template <class T>
	void Officer<T>::makePublish() 				/*Lec-research*/
	{
		//set_Happiness(2) ;
		//set_Contribution(5);
	}

}