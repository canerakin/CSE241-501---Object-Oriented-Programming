#include "operation.h"







void user_loop(Course course[] ,Classroom classroom[] ,Lecturer lecturer[] ,Administrator administ[] ,Student student[],int & count_courses ,int & count_classrooms ,int &count_lecturers, int &count_administ ,int & count_student)
{
	int flag = 1 , i = 0 , j = 0 , k = 0 , controller_1 , controller_2;
	string array , array1 , array2 ,array3 ;
	int count1 ,count2 ,count3 ,count4 ,start = 0; 
	int first_count_courses = count_courses;

	Student * temp = new Student[count_student] ;

	ifstream file;
	file.open("test.txt");

	while(flag == 1)	/*if user enter a exit in there finish*/	
	{
		if (start < 15)
		{
			getline(file,array) ;	
			cout << array << endl ;
			start += 1;
		}
		else
		{
			getline(cin,array) ;	/*take in user*/			
		}

		if (array[1] == 'e' && array[2] == 'x' && array[4] == 't')	/*if user wanna quit*/
		{
			flag = 0;
		}
		else if (array[1] == 'a' && array[2] == 's' && array[6] == 'n')	/*all assign course for lecturer*/	
		{

				int size_course[first_count_courses] ;
				
				for (i = 0; i < first_count_courses; ++i)
				{
					size_course[i] = 0;
				}

				for (i = 0; i < first_count_courses; ++i)
				{
					for (j = 0; j < count_lecturers; ++j)
					{
						array1 = '\0' ;
						array2 = '\0' ;
						array3 = '\0' ;						
						array = lecturer[j].take_Proffesions() ;
						istringstream some_stream(array);
						some_stream >> array >> array1 >> array2 >> array3 ;	/*there distroy the input*/
						if ( (course[i].field == array) && (course[i].pid == 0) )
						{
							size_course[i] += 1;
						}
						else if ( (course[i].field == array1) && (course[i].pid == 0) )
						{
							size_course[i] += 1;
						}
						else if ( (course[i].field == array2) && (course[i].pid == 0) )
						{
							size_course[i] += 1;
						}
						else if ( (course[i].field == array3) && (course[i].pid == 0) )
						{
							size_course[i] += 1;
						}
					}		
				}
				int big_num = size_course[0];
				for (i = 0; i < first_count_courses; ++i)     /*find big*/
				{
					if (size_course[i] >= big_num)
					{
						big_num = size_course[i] ; 
					}	
				}
				big_num += 2;

				for (i = 0; i < first_count_courses; ++i)   /*assign big*/
				{
					if (size_course[i] == 0)
					{
						size_course[i] = big_num ; 
					}	
				}

				int small_num ;
				for (i = 0; i < first_count_courses; ++i)     /*find course*/
				{
					small_num = 0;
					for (j = 0; j < first_count_courses; ++j)
					{
						if ( size_course[j] <= size_course[small_num] )
						{
							small_num = j ; 
						}
					}

					for (j = 0; j < count_lecturers; ++j)
					{
						array1 = '\0' ;
						array2 = '\0' ;
						array3 = '\0' ;						
						array = lecturer[j].take_Proffesions() ;
						istringstream some_stream(array);
						some_stream >> array >> array1 >> array2 >> array3 ;	/*there distroy the input*/

						if ( (course[small_num].field == array) && (course[small_num].pid == 0) && ( lecturer[j].take_pid_2() < 3) )
						{
							lecturer[j].assignCourse(course ,small_num );
						}
						else if ( (course[small_num].field == array1) && (course[small_num].pid == 0) && ( lecturer[j].take_pid_2() < 3) )
						{
							lecturer[j].assignCourse(course ,small_num );
						}
						else if ( (course[small_num].field == array2) && (course[small_num].pid == 0) && ( lecturer[j].take_pid_2() < 3) )
						{
							lecturer[j].assignCourse(course ,small_num );
						}
						else if ( (course[small_num].field == array3) && (course[small_num].pid == 0) && ( lecturer[j].take_pid_2() < 3) )
						{
							lecturer[j].assignCourse(course ,small_num );
						}
					}					
					size_course[small_num] = big_num ;
				}
				for (i = first_count_courses ; i < count_courses ; ++i)
				{
					j = 0;
					while(j < count_lecturers)	
					{
						if ( lecturer[j].take_pid_2() < 3 )		/*if teacer given course not a lot of 3*/
						{
							lecturer[j].assignCourse(course ,i);
							j = count_lecturers ;
						}	
						else
						{
							j += 1;
						}					
					}
				}
		}
		else if (array[1] == 't' && array[5] == 't' && array[9] == 'e')		/*assign the timetable for all*/
		{
				int i , j , boyut ;
				boyut = static_cast<int>( (count_courses - 1) / count_classrooms );	
				boyut += 1;
				int asd[boyut][count_classrooms];
				int iter ;
				for (i = 0; i < boyut ; ++i)	/*find the which clock and class*/
				{
					iter = 0;
					for (j = i * count_classrooms ; j < ( (i+1) * count_classrooms); ++j)
					{
						asd[i][j % count_classrooms] = iter;
						iter += course[j].total_hours ;
					}
				}

				for (i = 0; i < boyut ; ++i)	/*how maany assign*/
				{
					iter = 0;
					for (j = i * count_classrooms ; j < ( (i+1) * count_classrooms); ++j)
					{
						if (j < count_courses)
						{
							iter = asd[i][j % count_classrooms] ;
							administ[0].arrangeTimeTable(course ,classroom,count_courses ,count_classrooms ,iter ,j);	/*assign the table*/
							course[j].in_classroom = classroom[i].get_id();
						}
					}
				}
		}	
		else if (array[1] == 'a' && array[5] == 'n' && array[8] == 'C')	/*only arrangeC*/	
		{
				for (i = 0; i < count_courses; ++i)
				{
					cout << "(" << course[i].id << ")" << course[i].field << " in " << course[i].in_classroom << " at " << course[i].lecture_dates << endl ; 
				}
		}
		else if (array[1] == 'n' && array[2] == 's')	/*-ns for new student*/
		{
				istringstream some_stream(array);
				some_stream >> array >> array1 >> array2 >> count1 >> count2;	/*there distroy the input*/		

				student[count_student-1].set_name(array1);
				student[count_student-1].set_surname(array2);
				student[count_student-1].set_id(count1);
				student[count_student-1].set_level(count2);	/*there assign class*/

				temp = new Student[count_student+1];
				i = 0;
				while(i < count_student)			/*there for dynamic memory. user enter a lot of student*/
				{
					temp[i] = student[i];
					i += 1;
				}	
				student = temp;
				count_student += 1;
		}
		else if (array[1] == 'e' && array[5] == 'r')       /*enterclassroom */
		{
				istringstream some_stream(array);
				some_stream >> array >> count1 >> count2 >> count3;	/*there distroy the input*/		
				count4 = 0;
				
				int i , j , boyut ;
				boyut = static_cast<int>( (count_courses - 1) / count_classrooms );	
				boyut += 1;
				int asd[boyut][count_classrooms];
				int iter ;
				for (i = 0; i < boyut ; ++i)	/*find the which clock and class*/ 
				{
					iter = 0;
					for (j = i * count_classrooms ; j < ( (i+1) * count_classrooms); ++j)
					{
						asd[i][j % count_classrooms] = iter;
						iter += course[j].total_hours ;
					}
				}

				int s1 , s2 ;
				for (i = 0; i < count_student; ++i)
				{
					if (count1 == student[i].get_id() )		/*same in student*/
					{
						s1 = i;
						count4 = 1;
					}
				}
				if (count4 == 1)
				{
					count4 = 0;
					for (i = 0; i < count_classrooms; ++i)
					{
						if (count2 == classroom[i].get_id() )		/*same in classroom*/
						{
							s2 = i;
							count4 = 1;
						}
					}
				}
				if (count4 == 1)		/*if input is a true*/ 
				{
					if (student[s1].get_classrooms() == -1 || student[s1].get_classrooms() == s2)  /*if student not take course or same classroom*/
					{
						if (student[s1].get_course() == 1)	/*for maybe student take 2 course in classroom*/
						{
							student[s1].enterClassroom(classroom[s2] );	
						}
						student[s1].set_classrooms(s2);
						j = 0;
						for (i = 0 ; i < count_classrooms ; ++i)
						{
							if (count3 >= asd[s2][i] )
							{
								j = i;
							}
						}
						student[s1].set_courses( (s2 * count_classrooms) + j);						
						cout << classroom[s2].get_student_inroom() << " (student_inroom)" << endl;
					}
					else
					{
						cout << "BLOCK: s/he is at another classroom" << endl ;
					}
					
				}			
				else
				{
					cout << "ERROR: no class or no student" << endl ;
				}	
		}
		else if (array[1] == 'q' && array[4] == 't')		/*quit classroom*/
		{
				istringstream some_stream(array);
				some_stream >> array >> count1 ;	/*there distroy the input*/	
				count4 = 0;
				int s1 , s2 ;




				for (i = 0; i < count_student; ++i)
				{
					if (count1 == student[i].get_id() )
					{
						s1 = i;
						count4 = 1;
					}
				}
				if (count4 == 1)			/*if input is true*/ 
				{
					if (student[s1].get_classrooms() != -1 )
					{
						s2 = student[i].get_classrooms();
						student[s1].quitClassroom(classroom[s2] );
						student[s1].set_classrooms(-1); 
						student[s1].set_course();
					}
					else
					{
						cout << "BLOCK: s/he is not in any classroom" << endl ;
					}
					
				}			
				else
				{
					cout << "ERROR: no class or no student" << endl ;
				}				
		}
		else if (array[1] == 'a' && array[10] == 'e')   /*-------------------------attandence--------------------*/
		{
				istringstream some_stream(array);
				some_stream >> array >> count1 ;	/*there distroy the input*/

				
				for (i = 0; i < count_courses; ++i)
				{
					if (count1 == course[i].id)
					{
						count2 = i;	
					}			
				}
				count4 = 0;			
				for (i = 0; i < count_student; ++i)
				{
					if ( student[i].courses_control(count2) == true )			/*if some student have a course*/ 
					{
						if (count4 == 0)
						{
							cout << student[i].get_name() << " " << student[i].get_course() - 1;
							count4 += 1;
						}
						else
						{
							cout << " - " << student[i].get_name() << " " << student[i].get_course() - 1;
						}
					}
				}
				if (count4 > 0)
				{
					cout << endl ;
				}
		}				
		else
		{
			cout << "BLOCK !! Try again ." << endl ;
		}	
	}
	file.close();	
}









/*--------------------------------------------TEST SENARIES FUNCTİON-------------------------*/
/*this function same user_loop.have a one different. only input different for test*/

void test_loop(Course course[] ,Classroom classroom[] ,Lecturer lecturer[] ,Administrator administ[] ,Student student[],int & count_courses ,int & count_classrooms ,int &count_lecturers, int &count_administ ,int & count_student)
{
	int flag = 1 , i = 0 , j = 0 , k = 0 , controller_1 , controller_2;
	string array , array1 , array2 ,array3 ;
	int count1 ,count2 ,count3 ,count4 ; 
	int first_count_courses = count_courses;

	Student * temp = new Student[count_student] ;

	ifstream file;
	file.open("test.txt");

	while(flag == 1)	/*if user enter a exit in there finish*/	
	{
			getline(file,array) ;	
			cout << endl << array << endl ;
			

		if (array[1] == 'e' && array[2] == 'x' && array[4] == 't')	/*if user wanna quit*/
		{
			flag = 0;
		}
		else if (array[1] == 'a' && array[2] == 's' && array[6] == 'n')	/*all assign course for lecturer*/	
		{

				int size_course[first_count_courses] ;
				
				for (i = 0; i < first_count_courses; ++i)
				{
					size_course[i] = 0;
				}

				for (i = 0; i < first_count_courses; ++i)
				{
					for (j = 0; j < count_lecturers; ++j)
					{
						array1 = '\0' ;
						array2 = '\0' ;
						array3 = '\0' ;						
						array = lecturer[j].take_Proffesions() ;
						istringstream some_stream(array);
						some_stream >> array >> array1 >> array2 >> array3 ;	/*there distroy the input*/
						if ( (course[i].field == array) && (course[i].pid == 0) )
						{
							size_course[i] += 1;
						}
						else if ( (course[i].field == array1) && (course[i].pid == 0) )
						{
							size_course[i] += 1;
						}
						else if ( (course[i].field == array2) && (course[i].pid == 0) )
						{
							size_course[i] += 1;
						}
						else if ( (course[i].field == array3) && (course[i].pid == 0) )
						{
							size_course[i] += 1;
						}
					}		
				}
				int big_num = size_course[0];
				for (i = 0; i < first_count_courses; ++i)     /*find big*/
				{
					if (size_course[i] >= big_num)
					{
						big_num = size_course[i] ; 
					}	
				}
				big_num += 2;

				for (i = 0; i < first_count_courses; ++i)   /*assign big*/
				{
					if (size_course[i] == 0)
					{
						size_course[i] = big_num ; 
					}	
				}

				int small_num ;
				for (i = 0; i < first_count_courses; ++i)     /*find course*/
				{
					small_num = 0;
					for (j = 0; j < first_count_courses; ++j)
					{
						if ( size_course[j] <= size_course[small_num] )
						{
							small_num = j ; 
						}
					}

					for (j = 0; j < count_lecturers; ++j)
					{
						array1 = '\0' ;
						array2 = '\0' ;
						array3 = '\0' ;						
						array = lecturer[j].take_Proffesions() ;
						istringstream some_stream(array);
						some_stream >> array >> array1 >> array2 >> array3 ;	/*there distroy the input*/

						if ( (course[small_num].field == array) && (course[small_num].pid == 0) && ( lecturer[j].take_pid_2() < 3) )
						{
							lecturer[j].assignCourse(course ,small_num );
						}
						else if ( (course[small_num].field == array1) && (course[small_num].pid == 0) && ( lecturer[j].take_pid_2() < 3) )
						{
							lecturer[j].assignCourse(course ,small_num );
						}
						else if ( (course[small_num].field == array2) && (course[small_num].pid == 0) && ( lecturer[j].take_pid_2() < 3) )
						{
							lecturer[j].assignCourse(course ,small_num );
						}
						else if ( (course[small_num].field == array3) && (course[small_num].pid == 0) && ( lecturer[j].take_pid_2() < 3) )
						{
							lecturer[j].assignCourse(course ,small_num );
						}
					}					
					size_course[small_num] = big_num ;
				}
				for (i = first_count_courses ; i < count_courses ; ++i)
				{
					j = 0;
					while(j < count_lecturers)	
					{
						if ( lecturer[j].take_pid_2() < 3 )		/*if teacer given course not a lot of 3*/
						{
							lecturer[j].assignCourse(course ,i);
							j = count_lecturers ;
						}	
						else
						{
							j += 1;
						}					
					}
				}
		}
		else if (array[1] == 't' && array[5] == 't' && array[9] == 'e')		/*assign the timetable for all*/
		{
				int i , j , boyut ;
				boyut = static_cast<int>( (count_courses - 1) / count_classrooms );	
				boyut += 1;
				int asd[boyut][count_classrooms];
				int iter ;
				for (i = 0; i < boyut ; ++i)	/*find the which clock and class*/
				{
					iter = 0;
					for (j = i * count_classrooms ; j < ( (i+1) * count_classrooms); ++j)
					{
						asd[i][j % count_classrooms] = iter;
						iter += course[j].total_hours ;
					}
				}

				for (i = 0; i < boyut ; ++i)	/*how maany assign*/
				{
					iter = 0;
					for (j = i * count_classrooms ; j < ( (i+1) * count_classrooms); ++j)
					{
						if (j < count_courses)
						{
							iter = asd[i][j % count_classrooms] ;
							administ[0].arrangeTimeTable(course ,classroom,count_courses ,count_classrooms ,iter ,j);	/*assign the table*/
							course[j].in_classroom = classroom[i].get_id();
						}
					}
				}
		}	
		else if (array[1] == 'a' && array[5] == 'n' && array[8] == 'C')	/*only arrangeC*/	
		{
				for (i = 0; i < count_courses; ++i)
				{
					cout << "(" << course[i].id << ")" << course[i].field << " in " << course[i].in_classroom << " at " << course[i].lecture_dates << endl ; 
				}
		}
		else if (array[1] == 'n' && array[2] == 's')	/*-ns for new student*/
		{
				istringstream some_stream(array);
				some_stream >> array >> array1 >> array2 >> count1 >> count2;	/*there distroy the input*/		

				student[count_student-1].set_name(array1);
				student[count_student-1].set_surname(array2);
				student[count_student-1].set_id(count1);
				student[count_student-1].set_level(count2);	/*there assign class*/

				temp = new Student[count_student+1];
				i = 0;
				while(i < count_student)			/*there for dynamic memory. user enter a lot of student*/
				{
					temp[i] = student[i];
					i += 1;
				}	
				student = temp;
				count_student += 1;
		}
		else if (array[1] == 'e' && array[5] == 'r')       /*enterclassroom */
		{
				istringstream some_stream(array);
				some_stream >> array >> count1 >> count2 >> count3;	/*there distroy the input*/		
				count4 = 0;
				
				int i , j , boyut ;
				boyut = static_cast<int>( (count_courses - 1) / count_classrooms );	
				boyut += 1;
				int asd[boyut][count_classrooms];
				int iter ;
				for (i = 0; i < boyut ; ++i)	/*find the which clock and class*/ 
				{
					iter = 0;
					for (j = i * count_classrooms ; j < ( (i+1) * count_classrooms); ++j)
					{
						asd[i][j % count_classrooms] = iter;
						iter += course[j].total_hours ;
					}
				}

				int s1 , s2 ;
				for (i = 0; i < count_student; ++i)
				{
					if (count1 == student[i].get_id() )
					{
						s1 = i;
						count4 = 1;
					}
				}
				if (count4 == 1)
				{
					count4 = 0;
					for (i = 0; i < count_classrooms; ++i)
					{
						if (count2 == classroom[i].get_id() )
						{
							s2 = i;
							count4 = 1;
						}
					}
				}
				if (count4 == 1)		/*if input is a true*/ 
				{
					if (student[s1].get_classrooms() == -1 || student[s1].get_classrooms() == s2)
					{
						if (student[s1].get_course() == 1)	/*for maybe student take 2 course in classroom*/
						{
							student[s1].enterClassroom(classroom[s2] );	
						}
						student[s1].set_classrooms(s2);
						j = 0;
						for (i = 0 ; i < count_classrooms ; ++i)
						{
							if (count3 >= asd[s2][i] )
							{
								j = i;
							}
						}
						student[s1].set_courses( (s2 * count_classrooms) + j);						
						cout << classroom[s2].get_student_inroom() << " (student_inroom) " << endl;
					}
					else
					{
						cout << "BLOCK: s/he is at another classroom" << endl ;
					}
					
				}			
				else
				{
					cout << "ERROR: no class or no student" << endl ;
				}	
		}
		else if (array[1] == 'q' && array[4] == 't')		/*quit classroom*/
		{
				istringstream some_stream(array);
				some_stream >> array >> count1 ;	/*there distroy the input*/	
				count4 = 0;
				int s1 , s2 ;




				
				for (i = 0; i < count_student; ++i)
				{
					if (count1 == student[i].get_id() )
					{
						s1 = i;
						count4 = 1;
					}
				}
				if (count4 == 1)			/*if input is true*/ 
				{
					if (student[s1].get_classrooms() != -1 )
					{
						s2 = student[i].get_classrooms();
						student[s1].quitClassroom(classroom[s2] );
						student[s1].set_classrooms(-1); 
						student[s1].set_course();
					}
					else
					{
						cout << "BLOCK: s/he is not in any classroom" << endl ;
					}
					
				}			
				else
				{
					cout << "ERROR: no class or no student" << endl ;
				}				
		}
		else if (array[1] == 'a' && array[10] == 'e')   /*-------------------------attandence--------------------*/
		{
				istringstream some_stream(array);
				some_stream >> array >> count1 ;	/*there distroy the input*/

				
				for (i = 0; i < count_courses; ++i)
				{
					if (count1 == course[i].id)
					{
						count2 = i;	
					}			
				}
				count4 = 0;			
				for (i = 0; i < count_student; ++i)
				{
					if ( student[i].courses_control(count2) == true )			/*if some student have a course*/ 
					{
						if (count4 == 0)
						{
							cout << student[i].get_name() << " " << student[i].get_course() - 1;
							count4 += 1;
						}
						else
						{
							cout << " - " << student[i].get_name() << " " << student[i].get_course() - 1;
						}
					}
				}
				if (count4 > 0)
				{
					cout << endl ;
				}
		}				
		else
		{
			cout << "BLOCK !! Try again ." << endl ;
		}	
	}



	cout << "-------------------TEST FINISH--------------------------------" << endl << endl ;
	file.close();	
}

