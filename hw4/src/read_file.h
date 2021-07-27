#ifndef READ_FILE_H_
#define READ_FILE_H_
#include <iostream>
#include <string>
#include <fstream>

#include "Course.h"
#include "Classroom.h"
#include "Lecturer.h"
#include "Administrator.h"

using namespace std;
using namespace Classrooms;
using namespace Administrators;
using namespace Lecturers;

void read_1_c_and_c(int & num1 , int & num2);
void read_2_c_and_c(Course course[] ,Classroom classroom[] , int count_courses ,int count_classrooms);
void read_3_lecturers_size(int & count_lecturers);
void read_4_fill_lecturer(Lecturer lecturer[] ,int count_lecturers);
	
#endif

