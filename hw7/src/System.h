#ifndef SYSTEM_H_
#define SYSTEM_H_

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>

#include "University.h"
#include "Employee.h"
#include "Lecturer.h"
#include "ResearchAssistant.h"
#include "Secretary.h"
#include "Officer.h"
#include "CapitalistEducation.cpp"
#include "CommunistEducation.cpp"
#include "LiberalEducation.cpp"

using namespace std;
using namespace use_University;
using namespace use_Employee;
using namespace use_Lecturer;
using namespace use_ResearchAssistant;
using namespace use_Secretary;
using namespace use_Officer;
using namespace use_CapitalistEducation;
using namespace use_CommunistEducation;
using namespace use_LiberalEducation;





/*Employ the Employee*/
template <class T>
void load_information_Lib(vector<string> vect ,int& vect_size ,string uni_name);

/*Employ the Employee*/
template <class T>
void load_information_Com(vector<string> vect ,int& vect_size ,string uni_name);

/*Employ the Employee*/
template <class T>
void load_information_Cap(vector<string> vect ,int& vect_size ,string uni_name);



/*randomly do action*/
template <class T>
void operation_Lib(University<T>* &university,ResearchAssistant<T> * researchAssistant,Officer<T> * officer,int res,int off , int size_null,int who);


template <class T>
void operation_Com(University<T>* &university,Lecturer<T> * lecturer,ResearchAssistant<T> * researchAssistant,Secretary<T> * secretary,Officer<T> * officer,int lec,int res,int sec ,int off , int size_null);


template <class T>
void operation_Cap(University<T>* &university,Lecturer<T> * lecturer,ResearchAssistant<T> * researchAssistant,Secretary<T> * secretary,Officer<T> * officer,int lec,int res,int sec ,int off , int size_null);

	
#endif

