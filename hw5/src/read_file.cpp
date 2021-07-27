#include "read_file.h"

enum Effect {makeDoc = 1,drinkTea,research,giveLesson,seeSuccessfulStudent,makePublish,manageProcess,giveHW,readHW,receivePetition,submitPetition};

void read_file()		/*read and assign the file , after send all class in operation function*/
{
	University * university;	/*for all user only do there*/
	university = new University[1];
	
	Lecturer * lecturer  ;		/*no element*/
	int lec = 0 ;

	ResearchAssistant * researchAssistant ;		/*no element*/
	int res = 0 ;

	Secretary * secretary ;		/*no element*/
	int sec = 0;

	Officer * officer ;			
	int off = 0;

	string array , array1 , array2;
	int i = 0, size = 0 , rand_num;
	vector<string> vec;		/*for take the txt*/

	ifstream file;
	file.open("personnellist.txt");	

	while(!file.eof() )		
	{
		getline(file,array);	/*all file string save in vector*/
		vec.push_back(array);
	}

	srand(time(NULL));		/*for random in time*/
	while( size < 10 )
	{
		rand_num = rand() % ( vec.size() - 1 ) ;		

		if (vec[rand_num][0] == 'L')	/*if lecturer saved in there*/
		{
			lec += 1;
			Lecturer * temp = new Lecturer[lec];	/*new big size*/
			for (i = 0; i < lec-1; ++i)
			{
				temp[i] = lecturer[i] ;
			}
			lecturer = temp ;		/*assign the new adress*/

			istringstream some_stream(vec[rand_num]);
			some_stream >> array >> array1 >> array2 ;	/*there distroy the input*/		
			
			lecturer[lec-1].set_Name(array1);		/*assing*/
			lecturer[lec-1].set_Surname(array2);
			
			lecturer[lec-1].emp_uni(university);		/*there only for assign university*/
						 
			vec[rand_num][0] = '1' ;
			size += 1;
		}
		else if (vec[rand_num][0] == 'R')	/*if research assistant saved in there*/
		{
			res += 1;
			ResearchAssistant * temp1 = new ResearchAssistant[res];		/*new big size*/
			for (i = 0; i < res-1; ++i)
			{
				temp1[i] = researchAssistant[i] ;
			}
			researchAssistant = temp1 ;		/*assign the new adress*/

			istringstream some_stream(vec[rand_num]);
			some_stream >> array >> array1 >> array2 ;	/*there distroy the input*/		

			researchAssistant[res-1].set_Name(array1);
			researchAssistant[res-1].set_Surname(array2);		/*assing*/	
			
			researchAssistant[res-1].emp_uni(university);		/*there only for assign university*/
			

			vec[rand_num][0] = '1' ;

			size += 1;
		}
		else if (vec[rand_num][0] == 'O')		/*if officer saved in there*/
		{
			off += 1;
			Officer * temp2 = new Officer[off];		/*new big size*/
			for (i = 0; i < off-1; ++i)
			{
				temp2[i] = officer[i] ;
			}
			officer = temp2 ;		/*assign the new adress*/

			istringstream some_stream(vec[rand_num]);
			some_stream >> array >> array1 >> array2 ;	/*there distroy the input*/		

			officer[off-1].set_Name(array1);		/*assing*/
			officer[off-1].set_Surname(array2);			
			
			officer[off-1].emp_uni(university);		/*there only for assign university*/

			vec[rand_num][0] = '1' ;			

			size += 1;
		}
		else if (vec[rand_num][0] == 'S')		/*if secretary saved in there*/
		{			
			sec += 1;
			Secretary * temp3 = new Secretary[sec];		/*new big size*/
			for (i = 0; i < sec-1; ++i)
			{
				temp3[i] = secretary[i] ;
			}
			secretary = temp3 ;		/*assign the new adress*/

			istringstream some_stream(vec[rand_num]);
			some_stream >> array >> array1 >> array2 ;	/*there distroy the input*/		

			secretary[sec-1].set_Name(array1);
			secretary[sec-1].set_Surname(array2);		/*assing*/	
			
			secretary[sec-1].emp_uni(university);		/*there only for assign university*/

			vec[rand_num][0] = '1' ;

			size += 1;
		}
		/*else vec[rand_num][0] == 1 */		
	}


/*--------We take 10 employs but maybe we dont take all type employs */ 
	if (lec == 0)
	{
		lec += 1;
		lecturer = new Lecturer[lec] ;		
		i = 0;
		while(vec[i][0] != 'L')
		{
			i += 1;
		}
			istringstream some_stream(vec[i]);
			some_stream >> array >> array1 >> array2 ;	/*there distroy the input*/		

			lecturer[lec-1].emp_uni(university);		/*there only for assign university*/
			
			lecturer[lec-1].set_Name(array1);	
			lecturer[lec-1].set_Surname(array2);	
	}
	if (res == 0)
	{
		res += 1;
		researchAssistant = new ResearchAssistant[res] ;
		i = 0;
		while(vec[i][0] != 'R')
		{
			i += 1;
		}
		istringstream some_stream(vec[i]);
		some_stream >> array >> array1 >> array2 ;	/*there distroy the input*/		

		researchAssistant[res-1].emp_uni(university);		/*there only for assign university*/
		
		researchAssistant[res-1].set_Name(array1);
		researchAssistant[res-1].set_Surname(array2);	
	}
	if (off == 0)
	{
		off += 1;
		officer = new Officer[off] ;
		i = 0;
		while(vec[i][0] != 'O')
		{
			i += 1;
		}
		istringstream some_stream(vec[i]);
		some_stream >> array >> array1 >> array2 ;	/*there distroy the input*/		

		officer[off-1].emp_uni(university);		/*there only for assign university*/
		
		officer[off-1].set_Name(array1);
		officer[off-1].set_Surname(array2);
	}
	if (sec == 0)
	{
		sec += 1;
		secretary = new Secretary[sec] ;
		i = 0;
		while(vec[i][0] != 'S')
		{
			i += 1;
		}
		istringstream some_stream(vec[i]);
		some_stream >> array >> array1 >> array2 ;	/*there distroy the input*/		

		secretary[sec-1].emp_uni(university);		/*there only for assign university*/
		
		secretary[sec-1].set_Name(array1);
		secretary[sec-1].set_Surname(array2);
	}

	operation(lecturer ,researchAssistant ,secretary ,officer ,university ,lec ,res ,sec ,off);		/*call the effect function*/

	file.close();	/*close file*/
	vec.clear(); /*dynamic free for vector*/

/*-------Dynamic free for all class----------*/
	delete [] university ;
	delete [] lecturer ;
	delete [] researchAssistant ;
	delete [] secretary ;
	delete [] officer ;
}



/*take everything and do operation*/
void operation(Lecturer lecturer[],ResearchAssistant researchAssistant[],Secretary secretary[],Officer officer[],University * university,int lec,int res,int sec ,int off)
{
	/*Lets start to call function effects*/
	int i = 0;
	int lec_count = 0 , res_count = 0 ,sec_count = 0 ,off_count = 0 ,aca_count = 2 ,adm_count = 2 ,emp_count = 4;   /*for next employ */
	int effect;
	srand(time(NULL));		/*for random in time*/

	while(i < 50)  /*end of the senarios*/
	{
		effect = ( rand() % 11 ) + 1;	/*there output number in all enum value*/
		cout << endl ;

		if (effect == makeDoc)		
		{
			officer[off_count].makeDoc();	/*call make doc for officer */
			cout << "Officer have document.Therefore,Officer make Doc. Happiness of Officer is "
				<< officer[off_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;				
			off_count += 1;		/*next other officer*/
		}

		else if (effect == drinkTea)
		{
			if (emp_count % 4 == 0)		/*first time lecturer drink tea*/
			{
				lecturer[lec_count].drinkTea();
				cout << "Lecturer have slackness.Therefore,Lecturer drink tea. Happiness of Lecturer is "
					<< lecturer[lec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;								
				lec_count += 1;			
			}
			else if (emp_count % 4 == 1)	/*second time officer drink tea*/
			{
				officer[off_count].drinkTea();
				cout << "Officer have slackness.Therefore,Officer drink tea. Happiness of Officer is "
					<< officer[off_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;				
				off_count += 1;				
			}
			else if (emp_count % 4 == 2)	/*third time secratary drink tea*/
			{
				secretary[sec_count].drinkTea();
				cout << "Secretary have slackness.Therefore,Secretary drink tea. Happiness of Secretary is "
					<< secretary[sec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;			
				sec_count += 1;				
			}
			else	/*next time there drink tea*/
			{
				researchAssistant[res_count].drinkTea();
				cout << "ResearchAssistant have slackness.Therefore,ResearchAssistant drink tea. Happiness of ResearchAssistant is "
					<< researchAssistant[res_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;								
				res_count += 1;	
			}	
			emp_count += 1;	
		}

		else if (effect == research)	/*only assistant can*/
		{
			researchAssistant[res_count].research();
			cout << "ResearchAssistant have project.Therefore,ResearchAssistant research. Happiness of ResearchAssistant is "
				<< researchAssistant[res_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;								
			res_count += 1;	
		}

		else if (effect == giveLesson)	/*only lecturer can*/
		{
			lecturer[lec_count].giveLesson();
			cout << "Lecturer have lesson.Therefore,Lecturer give Lesson. Happiness of Lecturer is "
				<< lecturer[lec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;								
			lec_count += 1;	
		}

		else if (effect == seeSuccessfulStudent)	/*only academic personal do*/
		{
			if (aca_count % 2 == 0)	/*first time lecturer do*/
			{
				lecturer[lec_count].seeSuccessfulStudent();
				cout << "Lecturer have seminar.Therefore,Lecturer see Successful Student. Happiness of Lecturer is "
					<< lecturer[lec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;								
				lec_count += 1;			
			}
			else	/*next time researchAssistant do*/
			{
				researchAssistant[res_count].seeSuccessfulStudent();
				cout << "ResearchAssistant have seminar.Therefore,ResearchAssistant see Successful Student. Happiness of ResearchAssistant is "
					<< researchAssistant[res_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;								
				res_count += 1;	
			}			
			aca_count += 1;	
		}

		else if (effect == makePublish)		/*only academic personal do*/
		{
			if (aca_count % 2 == 0)	/*first time lecturer do*/
			{
				lecturer[lec_count].makePublish();
				cout << "Lecturer have academicPaper.Therefore,Lecturer make Publish. Happiness of Lecturer is "
					<< lecturer[lec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;								
				lec_count += 1;			
			}
			else	/*next time researchAssistant do*/
			{
				researchAssistant[res_count].makePublish();
				cout << "ResearchAssistant have academicPaper.Therefore,ResearchAssistant make Publish. Happiness of ResearchAssistant is "
					<< researchAssistant[res_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;								
				res_count += 1;	
			}			
			aca_count += 1;	
		}

		else if (effect == manageProcess)	/*only administ do it*/
		{
			if (adm_count % 2 == 0) 	/*first time officer do*/
			{
				officer[off_count].manageProcess();
				cout << "Officer have administration.Therefore,Officer manage Process. Happiness of Officer is "
					<< officer[off_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;				
				off_count += 1;				
			}
			else	/*next time secretary do*/
			{
				secretary[sec_count].manageProcess();
				cout << "Secretary have administration.Therefore,Secretary manage Process. Happiness of Secretary is "
					<< secretary[sec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;			
				sec_count += 1;				
			}			
			adm_count += 1;	
		}

		else if (effect == giveHW)	/*only lecturer give homework*/
		{
			lecturer[lec_count].giveHW();
			cout << "Lecturer have HomeworkTime.Therefore,Lecturer give HW. Happiness of Lecturer is "
				<< lecturer[lec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;			
			lec_count += 1;	
		}

		else if (effect == readHW)		/*only assistant read hw*/
		{
			researchAssistant[res_count].readHW();
			cout << "ResearchAssistant have homeworkTimeout.Therefore,ResearchAssistant read HW. Happiness of ResearchAssistant is "
				<< researchAssistant[res_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;								
			res_count += 1;	
		}

		else if (effect == receivePetition)		/*only secretary can do*/
		{
			secretary[sec_count].receivePetition();		
			cout << "Secretary have incident.Therefore,Secretary receive Petition. Happiness of Secretary is "
				<< secretary[sec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;			
			sec_count += 1;	
		}

		else if (effect == submitPetition)
		{
			if (emp_count % 4 == 0)		/*first time lecturer submit petition*/
			{
				lecturer[lec_count].submitPetition();
				cout << "Lecturer have solution.Therefore,Lecturer submit Petition. Happiness of Lecturer is "
					<< lecturer[lec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;								
				lec_count += 1;			
			}
			else if (emp_count % 4 == 1)		/*second time officer submit petition*/
			{
				officer[off_count].submitPetition();
				cout << "Officer have solution.Therefore,Officer submit Petition. Happiness of Officer is "
					<< officer[off_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;				
				off_count += 1;				
			}
			else if (emp_count % 4 == 2)		/*third time secratary submit petition*/
			{
				secretary[sec_count].submitPetition();
				cout << "Secretary have solution.Therefore,Secretary submit Petition. Happiness of Secretary is "
					<< secretary[sec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;			
				sec_count += 1;				
			}
			else		/*next time there submit petition*/
			{
				researchAssistant[res_count].submitPetition();
				cout << "ResearchAssistant have solution.Therefore,ResearchAssistant submit Petition. Happiness of ResearchAssistant is "
					<< researchAssistant[res_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;								
				res_count += 1;	
			}			
			emp_count += 1;	
		}

		/*for not all of them only one epmloy doing */ /*there if end of the lecturer size pass the first lecturer*/
		if (lec_count == lec)
		{
			lec_count = 0;
		}
		else if (res_count == res)
		{
			res_count = 0;
		}
		else if (off_count == off)
		{
			off_count = 0;
		}
		else if (sec_count == sec)
		{
			sec_count = 0;
		}

		i += 1;
	}

	cout << endl;
	
		/*-----------print the employs------------------*/
	for (i = 0; i < lec; ++i)	/*for all lecturer*/
	{
		cout << "Lecturer : " << lecturer[i].get_Name() << " " << lecturer[i].get_Surname() << "  Happiness : " << lecturer[i].get_Happiness() << endl ; 
	}
	for (i = 0; i < res; ++i)   /*for all research assistant*/
	{
		cout << "ResearchAssistant : " << researchAssistant[i].get_Name() << " " << researchAssistant[i].get_Surname() << "  Happiness : " << researchAssistant[i].get_Happiness() << endl ; 
	}	
	for (i = 0; i < off; ++i)   /*for all officer*/ 
	{
		cout << "Officer : " << officer[i].get_Name() << " " << officer[i].get_Surname() << "  Happiness : " << officer[i].get_Happiness() << endl ; 
	}	
	for (i = 0; i < sec; ++i)	/*for all secretary*/
	{
		cout << "Secretary : " << secretary[i].get_Name() << " " << secretary[i].get_Surname() << "  Happiness : " << secretary[i].get_Happiness() << endl ; 
	}	
	cout << "Contribution : " << university[0].get_Contribution() << endl ;		/*all employs Contribution equal to university Contribution*/

}
