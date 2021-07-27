#ifndef OPERATION_H_
#define OPERATION_H_
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>

#include "Course.h"
#include "Classroom.h"
#include "Student.h"
#include "Lecturer.h"
#include "Administrator.h"

using namespace std;
using namespace Classrooms;
using namespace Students;
using namespace Administrators;
using namespace Lecturers;

void user_loop(Course course[] ,Classroom classroom[] ,Lecturer lecturer[] ,Administrator administ[] ,Student student[],int & count_courses ,int & count_classrooms ,int &count_lecturers, int &count_administ ,int & count_student);
void test_loop(Course course[] ,Classroom classroom[] ,Lecturer lecturer[] ,Administrator administ[] ,Student student[],int & count_courses ,int & count_classrooms ,int &count_lecturers, int &count_administ ,int & count_student);
#endif