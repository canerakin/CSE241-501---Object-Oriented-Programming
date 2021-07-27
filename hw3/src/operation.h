#ifndef OPERATION_H_
#define OPERATION_H_
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <vector>

#include "Course.h"
#include "Classroom.h"
#include "Lecturer.h"
#include "Administrator.h"

using namespace std;

void user_loop(Course course[] ,Classroom classroom[] ,Lecturer lecturer[] ,Administrator administ[] ,int & count_courses ,int & count_classrooms ,int &count_lecturers, int &count_administ );
void test_loop(Course course[] ,Classroom classroom[] ,Lecturer lecturer[] ,Administrator administ[] ,int & count_courses ,int & count_classrooms ,int &count_lecturers, int &count_administ );	

#endif