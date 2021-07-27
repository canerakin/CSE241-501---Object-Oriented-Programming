#include "ResearchAssistant.h"
#include <iostream>

namespace use_ResearchAssistant
{
	template <class T>
	ResearchAssistant<T>::ResearchAssistant() :Employee<int>()
	{
		/*constructor*/
	}

	template <class T>
	ResearchAssistant<T>::ResearchAssistant(string arr ,string arr1 ,int num ,int num1 )
		:Employee<int>(arr ,arr1 ,num ,num1 )
	{

	}

	/*take in absract class be pure virtual*/
	template <class T>
	void ResearchAssistant<T>::makeDoc()    
	{
		//set_Happiness(-2) ;
		//set_Contribution(3);		
	}
	template <class T>
	void ResearchAssistant<T>::research()    
	{
		this->set_Happiness(3) ;
		this->set_Contribution(4);		
	}	
	template <class T>
	void ResearchAssistant<T>::manageProcess()    
	{
		//set_Happiness(-1) ;
		//set_Contribution(2);		
	}
	template <class T>
	void ResearchAssistant<T>::readHW()    
	{
		this->set_Happiness(-3) ;
		this->set_Contribution(2);		
	}
	template <class T>
	void ResearchAssistant<T>::receivePetition()    
	{
		//set_Happiness(-1) ;
		//set_Contribution(-1);		
	}
	template <class T>
	void ResearchAssistant<T>::giveLesson() 				/*Lecturer*/
	{
		//set_Happiness(1) ;
		//set_Contribution(5);		
	}
	template <class T>
	void ResearchAssistant<T>::giveHW() 					/*Lecturer*/	
	{
		//set_Happiness(-2) ;
		//set_Contribution(1);
	}
	template <class T>
	void ResearchAssistant<T>::seeSuccessfulStudent() 	/*Lec-research*/
	{
		this->set_Happiness(10) ;
		this->set_Contribution(0);
	}
	template <class T>
	void ResearchAssistant<T>::makePublish() 				/*Lec-research*/
	{
		this->set_Happiness(2) ;
		this->set_Contribution(5);
	}

}
	