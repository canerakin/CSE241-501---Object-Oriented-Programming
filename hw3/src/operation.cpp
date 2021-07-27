#include "operation.h"







void user_loop(Course course[] ,Classroom classroom[] ,Lecturer lecturer[] ,Administrator administ[] ,int & count_courses ,int & count_classrooms ,int &count_lecturers, int &count_administ )
{
	int flag = 1 , i = 0 , j = 0 , k = 0 , controller_1 , controller_2;
	string array , array1 , array2 ,array3 ;
	int count1 ,count2 ,count3 ,count4 ; 
	int first_count_courses = count_courses;

	while(flag == 1)	/*if user enter a exit in there finish*/	
	{
		getline(cin,array) ;	/*take in user*/

		if (array == "exit" || array == "-exit" )	/*if user wanna quit*/
		{
			flag = 0;
		}
		else if (array[1] == 'p' && array[3] == 'o')	/*for -propose*/
		{
			istringstream some_stream(array);
			some_stream >> array1 >> count1 ;	/*there distroy the input*/
			j = 0;
			while(count1 != lecturer[j].take_Personal_id() )	/*find the lecturer*/
			{
				j += 1;
			}

			if (3 > lecturer[j].take_pid() )	/*if lecturer give not a lot of 3*/
			{
				course = lecturer[j].proposeCourse(array ,course ,count_courses  );
				lecturer[j].assign_pid();
			}
			else
			{
				cout << "Lecturer enter a lot of courses" << endl ;
			}

		}
		else if (array == "-assign")	/*all assign course for lecturer*/	
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
		else if (array[1] == 'a' && array[6] == 'n' && array[8] >= '0' && array[8] <= '9')		/*one assign course for lecturer*/	
		{
				istringstream some_stream(array);
				some_stream >> array1 >> count1 >> count2 ;	/*there distroy the input*/	

				j = 0;
				k = 0;	
				count3 = 0;	/*keep lecturer */
				count4 = 0;	/*keep course */				
				controller_1 = 0;
				controller_2 = 0;
				for (i = 0; i < count_lecturers; ++i)
				{
					if (count1 == lecturer[i].take_Personal_id() )	/*if input true*/
					{
						controller_1 = 1;
						count3 = i;
					}
				}
				if (controller_1 == 1)	/*if first input is true*/
				{
					controller_1 = 0;
					for (i = 0; i < count_courses; ++i)
					{
						if (count2 == course[i].id )
						{
							controller_1 = 1;
							count4 = i;
						}				
					}
				}
				if (controller_1 == 1)	/*if second input is true*/
				{
					array1 = lecturer[count3].take_Proffesions();
					array2 = course[count4].field ;			
					for (j = 0; array1[j] != '\0' ; ++j)
					{
						if (array1[j] == array2[0] && controller_2 == 0)
						{
							controller_2 = 1 ;
							for (k = 0; k < array2.size() ; ++k)
							{
								if (array1[j+k] != array2[k])
								{
									controller_2 = 0;
								}
							}
						}
					}			
				}


				if (controller_1 == 0)
				{
					cout << "Error: no lecture or course " << endl ;
				}
				else if (controller_2 == 0)
				{
					cout << "Block: field and profession mismatch " << endl ;
				}			
				else if(lecturer[count3].take_pid_2() < 3)		/*assign the course in lecturer*/
				{
					lecturer[count3].assignCourse(course ,count4);
					cout << "Done" << endl ;
				}
				else 
				{
	   				cout << "Error: Lecturer full " << endl ;
				}

		}
		else if (array == "-timetable")		/*assign the table for all*/
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
							course[j].in_classroom = classroom[i].id;
						}
					}
				}
		}
		else if (array[1] == 't' && array[9] == 'e' && array[11] >= '0' && array[11] <= '9')	/*assign the table for only*/	
		{
			istringstream some_stream(array);
			some_stream >> array >> count1 ;	/*there distroy the input*/	
			int flag = 0 ,flag2 , i , j;
			for (i = 0; i < count_courses; ++i)
			{
				if (course[i].id == count1)
				{
					flag = 1;
					flag2 = i;
				}
			}

			if (flag == 0)			/*for error*/
			{
				cout << "Error: no course" << endl ;
			}
			else			/*if not problem*/
			{
				array2 = course[flag2].lecture_dates;
				int boyut ;
				boyut = static_cast<int>( (count_courses - 1) / count_classrooms );
				boyut += 1;
				int asd[boyut][count_classrooms];
				int iter ;
				for (i = 0; i < boyut ; ++i)
				{
					iter = 0;
					for (j = i * count_classrooms ; j < ( (i+1) * count_classrooms); ++j)
					{
						asd[i][j % count_classrooms] = iter;	/*find the size of clock*/
						iter += course[j].total_hours ;
					}
				}

				for (i = 0; i < boyut ; ++i)
				{
					iter = 0;
					for (j = i * count_classrooms ; j < ( (i+1) * count_classrooms); ++j)
					{
						if (j < count_courses && j == flag2)
						{
							iter = asd[i][j % count_classrooms] ;
							administ[0].arrangeTimeTable(course ,classroom,count_courses ,count_classrooms ,iter ,j);
							course[j].in_classroom = classroom[i].id;
							array3 =  course[j].lecture_dates;
						}
					}
				}
				if (array2 == array3)
				{
					cout << "Assigned Before:(" << count1 << ")" << course[flag2].field << " " << array3 << endl;
				}		
				else
				{
					cout << "Done:(" << count1 << ")" << course[flag2].field << " " << array3 << endl;
				}
			}
		}	
		else if (array == "-arrangeC")	/*only arrangeC*/	
		{
			for (i = 0; i < count_courses; ++i)
			{
				cout << "(" << course[i].id << ")" << course[i].field << " in " << course[i].in_classroom << " at " << course[i].lecture_dates << endl ; 
			}
		}					
		else if (array[1] == 'a' && array[8] == 'C')	/*arrangeC + course + class*/	
		{
				int sz_1 , sz_2;

				for (i = 0; array[i] != '\0'; ++i)
				{
					if (array[i] == ',')
					{
						array[i] = ' ' ;
					}
				}

				istringstream some_stream(array);
				some_stream >> array >> count1 >> count2 >> count3 ;	/*there distroy the input*/
				int flag2 = 0;	

				for (i = 0; i < count_courses; ++i)
				{
					if (count1 == course[i].id && course[i].lecture_dates[0] != '\0' )
					{
						flag2 = 1;
						sz_1 = i;
					}
				}
				if (flag2 == 1)
				{
					flag2 = 0;
					for (i = 0; i < count_classrooms; ++i)
					{
						if (count2 == classroom[i].id)
						{
							flag2 = 1;
							sz_2 = i;
						}
					}	
				}
				
				if (flag2 == 0 )
				{
					cout << "Error: no class or no course or timetable not arranged yet" << endl ;
				}
				else
				{
					administ[0].arrangeClassroom(course ,classroom,count_courses ,count_classrooms , sz_1 ,sz_2);
					cout << "Done:(" << course[sz_1].id << ")" << course[sz_1].field << " in " << course[sz_1].in_classroom << " at " << course[sz_1].lecture_dates << endl ; 
				}
		}
		else
		{
			cout << "BLOCK !! Try again ." << endl ;
		}	
	}	
}









/*--------------------------------------------TEST SENARIES FUNCTİON-------------------------*/
/*this function same user_loop.have a one different. only input different for test*/

void test_loop(Course course[] ,Classroom classroom[] ,Lecturer lecturer[] ,Administrator administ[] ,int & count_courses ,int & count_classrooms ,int &count_lecturers, int &count_administ )
{
	cout << "-------TEST SENARY------" << endl << endl ;
	int flag = 1 , i = 0 , j = 0 , k = 0 , controller_1 , controller_2;
	string array , array1 , array2 ,array3 ,array4;
	int count1 ,count2 ,count3 ,count4 ; 
	int first_count_courses = count_courses;
	ifstream file;
	file.open("test.txt");

	while(flag == 1)	/*if user enter a exit in there finish*/	
	{


		/*------------------------------------------there take in test.txt --------------------------------------------------*/
		getline(file,array) ;	
		cout << endl << array << endl ;

		if (array[1] == 'e' && array[2] == 'x' && array[4] == 't' )	/*if user wanna quit*/
		{
			flag = 0;
		}
		else if (array[1] == 'p' && array[3] == 'o')	/*for -propose*/
		{
			istringstream some_stream(array);
			some_stream >> array1 >> count1 ;	/*there distroy the input*/
			j = 0;
			while(count1 != lecturer[j].take_Personal_id() )
			{
				j += 1;
			}

			if (3 > lecturer[j].take_pid() )
			{
				course = lecturer[j].proposeCourse(array ,course ,count_courses  );
				lecturer[j].assign_pid();
			}
			else
			{
				cout << "Lecturer enter a lot of courses" << endl ;
			}

		}		
		else if (array[1] == 'a' && array[6] == 'n' && array[8] >= '0' && array[8] <= '9')		
		{
				istringstream some_stream(array);
				some_stream >> array1 >> count1 >> count2 ;	/*there distroy the input*/	

				j = 0;
				k = 0;	
				count3 = 0;	/*keep lecturer */
				count4 = 0;	/*keep course */				
				controller_1 = 0;
				controller_2 = 0;
				for (i = 0; i < count_lecturers; ++i)
				{
					if (count1 == lecturer[i].take_Personal_id() )
					{
						controller_1 = 1;
						count3 = i;
					}
				}
				if (controller_1 == 1)
				{
					controller_1 = 0;
					for (i = 0; i < count_courses; ++i)
					{
						if (count2 == course[i].id )
						{
							controller_1 = 1;
							count4 = i;
						}				
					}
				}
				if (controller_1 == 1)
				{
					array1 = lecturer[count3].take_Proffesions();
					array2 = course[count4].field ;			
					for (j = 0; array1[j] != '\0' ; ++j)
					{
						if (array1[j] == array2[0] && controller_2 == 0)
						{
							controller_2 = 1 ;
							for (k = 0; k < array2.size() ; ++k)
							{
								if (array1[j+k] != array2[k])
								{
									controller_2 = 0;
								}
							}
						}
					}			
				}


				if (controller_1 == 0)
				{
					cout << "Error: no lecture or course " << endl ;
				}
				else if (controller_2 == 0)
				{
					cout << "Block: field and profession mismatch " << endl ;
				}			
				else if(lecturer[count3].take_pid_2() < 3)	/*if lecturer can take a course , assign the course*/
				{
					lecturer[count3].assignCourse(course ,count4);		
					cout << "Done" << endl ;
				}
				else 
				{
	   				cout << "Error: Lecturer full " << endl ;
				}

		}
		else if (array[1] == 'a' && array[6] == 'n')		
		{
/*----------------------------assign the all lecturer for course------------*/
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
				for (i = 0; i < first_count_courses; ++i)     /*find big*/
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
						if ( lecturer[j].take_pid_2() < 3 )
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
		else if (array[1] == 't' && array[9] == 'e' && array[11] >= '0' && array[11] <= '9')		
		{
			istringstream some_stream(array);
			some_stream >> array >> count1 ;	/*there distroy the input*/	
			int flag = 0 ,flag2 , i , j;
			for (i = 0; i < count_courses; ++i)
			{
				if (course[i].id == count1)
				{
					flag = 1;
					flag2 = i;
				}
			}

			if (flag == 0)
			{
				cout << "Error: no course" << endl ;
			}
			else
			{
				/*-----assign course for time---------------------------*/
				array2 = course[flag2].lecture_dates;
				int boyut ;
				boyut = static_cast<int>( (count_courses - 1) / count_classrooms );
				boyut += 1;
				int asd[boyut][count_classrooms];
				int iter ;
				for (i = 0; i < boyut ; ++i)
				{
					iter = 0;
					for (j = i * count_classrooms ; j < ( (i+1) * count_classrooms); ++j)
					{
						asd[i][j % count_classrooms] = iter;
						iter += course[j].total_hours ;
					}
				}

				for (i = 0; i < boyut ; ++i)
				{
					iter = 0;
					for (j = i * count_classrooms ; j < ( (i+1) * count_classrooms); ++j)
					{
						if (j < count_courses && j == flag2)
						{
							iter = asd[i][j % count_classrooms] ;
							administ[0].arrangeTimeTable(course ,classroom,count_courses ,count_classrooms ,iter ,j);
							course[j].in_classroom = classroom[i].id;
							array3 =  course[j].lecture_dates;
						}
					}
				}
					/*------------------this assign in up.now control and print ------------*/
				if (array2 == array3)
				{
					cout << "Assigned Before:(" << count1 << ")" << course[flag2].field << " " << array3 << endl;
				}		
				else
				{	
					cout << "Done:(" << count1 << ")" << course[flag2].field << " " << array3 << endl;
				}
			}
		}
		else if (array[1] == 't' && array[9] == 'e')		
		{
				int i , j , boyut ;
				boyut = static_cast<int>( (count_courses - 1) / count_classrooms );
				boyut += 1;
				int asd[boyut][count_classrooms];
				int iter ;
				for (i = 0; i < boyut ; ++i)
				{
					iter = 0;
					for (j = i * count_classrooms ; j < ( (i+1) * count_classrooms); ++j)
					{
						asd[i][j % count_classrooms] = iter;
						iter += course[j].total_hours ;
					}
				}

				for (i = 0; i < boyut ; ++i)
				{
					iter = 0;
					for (j = i * count_classrooms ; j < ( (i+1) * count_classrooms); ++j)
					{
						if (j < count_courses)
						{
							iter = asd[i][j % count_classrooms] ;
							administ[0].arrangeTimeTable(course ,classroom,count_courses ,count_classrooms ,iter ,j);
							course[j].in_classroom = classroom[i].id;
						}
					}
				}
		}					
		else if (array[1] == 'a' && array[8] == 'C' && array[10] <= '9' && array[10] >= '0')	/*arrangeC + course + class*/	
		{
				int sz_1 , sz_2;

				for (i = 0; array[i] != '\0'; ++i)
				{
					if (array[i] == ',')
					{
						array[i] = ' ' ;
					}
				}

				istringstream some_stream(array);
				some_stream >> array >> count1 >> count2 >> count3 ;	/*there distroy the input*/
				int flag2 = 0;	

				for (i = 0; i < count_courses; ++i)
				{
					if (count1 == course[i].id && course[i].lecture_dates[0] != '\0' )
					{
						flag2 = 1;
						sz_1 = i;
					}
				}
				if (flag2 == 1)
				{
					flag2 = 0;
					for (i = 0; i < count_classrooms; ++i)
					{
						if (count2 == classroom[i].id)
						{
							flag2 = 1;
							sz_2 = i;
						}
					}	
				}
				
				if (flag2 == 0 )
				{
					cout << "Error: no class or no course or timetable not arranged yet" << endl ;
				}
				else
				{
					administ[0].arrangeClassroom(course ,classroom,count_courses ,count_classrooms , sz_1 ,sz_2);
					cout << "Done:(" << course[sz_1].id << ")" << course[sz_1].field << " in " << course[sz_1].in_classroom << " at " << course[sz_1].lecture_dates << endl ; 
				}
		}			
		else if (array[1] == 'a' && array[8] == 'C')	/*only arrangeC*/	
		{
			for (i = 0; i < count_courses; ++i)
			{
				cout << "(" << course[i].id << ")" << course[i].field << " in " << course[i].in_classroom << " at " << course[i].lecture_dates << endl ; 
			}
		}
		else
		{
			cout << "BLOCK !! Try again ." << endl ;
		}	
	}
		cout << endl << "-------TEST SENARY İS FİNİSH------" << endl <<"-------ENTER USER-------"<< endl << endl;
		file.close();

}
