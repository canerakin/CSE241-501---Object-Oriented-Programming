#include "Secretary.h"
#include <iostream>

namespace use_Secretary
{
	template <class T>
	Secretary<T>::Secretary() :Employee<int>()
	{
		/*constructor*/
	}

	template <class T>
	Secretary<T>::Secretary(string arr ,string arr1 ,int num ,int num1 )
		:Employee<int>(arr ,arr1 ,num ,num1 )
	{

	}


	/*take in absract class be pure virtual*/
	template <class T>
	void Secretary<T>::makeDoc()    
	{
		//set_Happiness(-2) ;
		//set_Contribution(3);		
	}
	template <class T>
	void Secretary<T>::research()    
	{
		//set_Happiness(3) ;
		//set_Contribution(4);		
	}
	template <class T>	
	void Secretary<T>::manageProcess()    
	{
		this->set_Happiness(-1) ;
		this->set_Contribution(2);		
	}
	template <class T>
	void Secretary<T>::readHW()    
	{
		//set_Happiness(-3) ;
		//set_Contribution(2);		
	}
	template <class T>
	void Secretary<T>::receivePetition()    
	{
		this->set_Happiness(-1) ;
		this->set_Contribution(-1);		
	}
	template <class T>
	void Secretary<T>::giveLesson() 				
	{
		//set_Happiness(1) ;
		//set_Contribution(5);		
	}
	template <class T>
	void Secretary<T>::giveHW() 						
	{
		//set_Happiness(-2) ;
		//set_Contribution(1);
	}
	template <class T>
	void Secretary<T>::seeSuccessfulStudent() 	/*Lec-research*/
	{
		//set_Happiness(10) ;
		//set_Contribution(0);
	}
	template <class T>
	void Secretary<T>::makePublish() 				/*Lec-research*/
	{
		//set_Happiness(2) ;
		//set_Contribution(5);
	}

}
	