#ifndef READ_FILE_H_
#define READ_FILE_H_

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

using namespace std;
using namespace use_University;
using namespace use_Employee;
using namespace use_Lecturer;
using namespace use_ResearchAssistant;
using namespace use_Secretary;
using namespace use_Officer;


/*Employ the Employee*/
template <class T>
void load_information(vector<string> &vect , University<T>* &university ,int vect_size ,Lecturer<T> * lec ,ResearchAssistant<T> * res ,Secretary<T> * sec ,Officer<T> * off ,string uni_name);


/*randomly do action*/
template <class T>
void operation(University<int>* &university,Lecturer<T> lecturer[],ResearchAssistant<T> researchAssistant[],Secretary<T> secretary[],Officer<T> officer[],int lec,int res,int sec ,int off , int size_null);

	
#endif

