#include "Lecturer.h"
#include <iostream>

namespace use_Lecturer
{
	template <class T>
	Lecturer<T>::Lecturer() :Employee<T>()
	{
		/*constructor*/
	}

	template <class T>
	Lecturer<T>::Lecturer(string arr ,string arr1 ,int num ,int num1 ) :Employee<T>(arr,arr1,num,num1)
	{

	}

	/*take in absract class be pure virtual*/
	template <class T>
	void Lecturer<T>::makeDoc()    
	{
		//set_Happiness(-2) ;
		//set_Contribution(3);		
	}
	template <class T>
	void Lecturer<T>::research()    
	{
		//set_Happiness(3) ;
		//set_Contribution(4);		
	}
	template <class T>	
	void Lecturer<T>::manageProcess()    		/*there not use and i take comment action*/
	{
		//set_Happiness(-1) ;
		//set_Contribution(2);		
	}
	template <class T>
	void Lecturer<T>::readHW()    
	{
		//set_Happiness(-3) ;
		//set_Contribution(2);		
	}
	template <class T>
	void Lecturer<T>::receivePetition()    
	{
		//set_Happiness(-1) ;
		//set_Contribution(-1);		
	}
	template <class T>
	void Lecturer<T>::giveLesson() 				/*Lecturer*/
	{
		this->set_Happiness(1) ;
		this->set_Contribution(5);		
	}
	template <class T>
	void Lecturer<T>::giveHW() 					/*Lecturer*/	
	{
		this->set_Happiness(-2) ;
		this->set_Contribution(1);
	}
	template <class T>
	void Lecturer<T>::seeSuccessfulStudent() 	/*Lec-research*/
	{
		this->set_Happiness(10) ;
		this->set_Contribution(0);
	}
	template <class T>
	void Lecturer<T>::makePublish() 				/*Lec-research*/
	{
		this->set_Happiness(2) ;
		this->set_Contribution(5);
	}
}
	