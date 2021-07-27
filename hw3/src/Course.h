#ifndef COURSE_H_
#define COURSE_H_

#include <string>
#include <iostream>
using namespace std;

struct Course	/*course information struct*/
{
	int id;
	string name;	
	int code;
	int credit;
	int total_hours;
	string lecture_dates;
	string field;
	bool isMandatory;
	int pid;	/*keep who lecturer*/
	int in_classroom;	/*keep which classroom*/
};

#endif

