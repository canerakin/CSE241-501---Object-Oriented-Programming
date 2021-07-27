#ifndef READ_FILE_H_
#define READ_FILE_H_
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

#include "read_file.h"
#include "University.h"
#include "Employee.h"
#include "AcademicPersonnel.h"
#include "AdministrativePersonnel.h"
#include "Lecturer.h"
#include "ResearchAssistant.h"
#include "Secretary.h"
#include "Officer.h"

using namespace std;
using namespace use_University;
using namespace use_Employee;
using namespace use_AcademicPersonnel;
using namespace use_AdministrativePersonnel;
using namespace use_Lecturer;
using namespace use_ResearchAssistant;
using namespace use_Secretary;
using namespace use_Officer;

/*read file and send the operation*/
void read_file();

/*take everything and do operation*/
void operation(Lecturer lecturer[],ResearchAssistant researchAssistant[],Secretary secretary[],Officer officer[],University * university,int lec,int res,int sec ,int off);
	
#endif

