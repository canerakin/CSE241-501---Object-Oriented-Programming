#include "System.h"

enum Effect {makeDocs = 1,drinkTeas,researchs,giveLessons,seeSuccessfulStudents,makePublishs,manageProcesss,giveHWs,readHWs,receivePetitions,submitPetitions};
/*action enum*/


/*Employ the Employee*/
template <class T>
void load_information_Com(vector<string> vect ,int & vect_size ,string uni_name)
{
	cout << endl;

	University<T> * university ;

	Lecturer<T> * lec;
	lec = new Lecturer<T>[2] ;

	ResearchAssistant<T> * res;
	res = new ResearchAssistant<int>[2] ;

	Officer<T> * off ;
	off = new Officer<T>[2];

	Secretary<T> * sec ;	
	sec = new Secretary<T>[2] ;


	CommunistEducation<T> * yok = new CommunistEducation<int>;
	yok->foundUni(university,uni_name);		/*complate new university*/

	string name , surname ;
	
	/*--------ALL TİME READ VECTOR AND HAVE A NEW UNİVERSİTY------------*/
	cout << university->get_Name_emp() << " requests Lecturer" << endl ;
	name = vect[vect_size];
	surname = vect[vect_size+1];
	yok->giveJob(name,surname,university ,lec ,res ,sec ,off ,0 ,'L' );
	vect_size += 3;													/*for new employee*/


	cout << university->get_Name_emp() << " requests Lecturer" << endl ;
	name = vect[vect_size];
	surname = vect[vect_size+1];
	yok->giveJob(name,surname,university ,lec ,res ,sec ,off ,1 ,'L' );
	vect_size += 3;


	cout << university->get_Name_emp() << " requests ResearchAssistant" << endl ;
	name = vect[vect_size];
	surname = vect[vect_size+1];
	yok->giveJob(name,surname,university ,lec ,res ,sec ,off ,0 ,'R' );
	vect_size += 3;

 
	cout << university->get_Name_emp() << " requests ResearchAssistant" << endl ;
	name = vect[vect_size];
	surname = vect[vect_size+1];
	yok->giveJob(name,surname,university ,lec ,res ,sec ,off ,1 ,'R' );
	vect_size += 3;
 

	cout << university->get_Name_emp() << " requests Officer" << endl ;  
	name = vect[vect_size];
	surname = vect[vect_size+1];
	yok->giveJob(name,surname,university ,lec ,res ,sec ,off ,0 ,'O' );
	vect_size += 3;													/*for new employee*/


	cout << university->get_Name_emp() << " requests Officer" << endl ;  
	name = vect[vect_size];
	surname = vect[vect_size+1];
	yok->giveJob(name,surname,university ,lec ,res ,sec ,off ,1 ,'O' );
	vect_size += 3;


	cout << university->get_Name_emp() << " requests Secretary" << endl ;  	
	name = vect[vect_size];
	surname = vect[vect_size+1];
	yok->giveJob(name,surname,university ,lec ,res ,sec ,off ,0 ,'S' );
	vect_size += 3;
 

	cout << university->get_Name_emp() << " requests Secretary" << endl ; 
	name = vect[vect_size];
	surname = vect[vect_size+1];
	yok->giveJob(name,surname,university ,lec ,res ,sec ,off ,1 ,'S' );		/*take end */
	vect_size += 3;
 		
 	cout << endl ;	

	operation_Com<T>(university,lec,res,sec,off,2,2,2,2, vect_size);

	delete [] yok;
	delete [] lec;
	delete [] res;
	delete [] off ;
	delete [] sec ;
	delete [] university;	
}

/*Employ the Employee for capitalism*/
template <class T>
void load_information_Cap(vector<string> vect ,int & vect_size ,string uni_name)
{
	cout << endl;

	University<T> * university ;

	Lecturer<T> * lec;
	lec = new Lecturer<T>[2] ;

	ResearchAssistant<T> * res;
	res = new ResearchAssistant<T>[2] ;

	Officer<T> * off ;
	off = new Officer<T>[2];

	Secretary<T> * sec ;	
	sec = new Secretary<T>[2] ;

	CapitalistEducation<T> * yok = new CapitalistEducation<int>;	
	yok->foundUni(university,uni_name);		/*complate new university*/

	string name , surname ;
	
	/*--------ALL TİME READ VECTOR AND HAVE A NEW UNİVERSİTY------------*/
	cout << university->get_Name_emp() << " requests Lecturer" << endl ;
	name = vect[vect_size];
	surname = vect[vect_size+1];
	yok->giveJob(name,surname,university ,lec ,res ,sec ,off ,0 ,'L' );
	vect_size += 3;													/*for new employee*/


	cout << university->get_Name_emp() << " requests Lecturer" << endl ;
	name = vect[vect_size];
	surname = vect[vect_size+1];
	yok->giveJob(name,surname,university ,lec ,res ,sec ,off ,1 ,'L' );
	vect_size += 3;


	cout << university->get_Name_emp() << " requests ResearchAssistant" << endl ;
	name = vect[vect_size];
	surname = vect[vect_size+1];
	yok->giveJob(name,surname,university ,lec ,res ,sec ,off ,0 ,'R' );
	vect_size += 3;

 
	cout << university->get_Name_emp() << " requests ResearchAssistant" << endl ;
	name = vect[vect_size];
	surname = vect[vect_size+1];
	yok->giveJob(name,surname,university ,lec ,res ,sec ,off ,1 ,'R' );
	vect_size += 3;
 

	cout << university->get_Name_emp() << " requests Officer" << endl ;  
	name = vect[vect_size];
	surname = vect[vect_size+1];
	yok->giveJob(name,surname,university ,lec ,res ,sec ,off ,0 ,'O' );
	vect_size += 3;													/*for new employee*/


	cout << university->get_Name_emp() << " requests Officer" << endl ;  
	name = vect[vect_size];
	surname = vect[vect_size+1];
	yok->giveJob(name,surname,university ,lec ,res ,sec ,off ,1 ,'O' );
	vect_size += 3;


	cout << university->get_Name_emp() << " requests Secretary" << endl ;  	
	name = vect[vect_size];
	surname = vect[vect_size+1];
	yok->giveJob(name,surname,university ,lec ,res ,sec ,off ,0 ,'S' );
	vect_size += 3;
 

	cout << university->get_Name_emp() << " requests Secretary" << endl ; 
	name = vect[vect_size];
	surname = vect[vect_size+1];
	yok->giveJob(name,surname,university ,lec ,res ,sec ,off ,1 ,'S' );		/*take end */
	vect_size += 3;
 		
 	cout << endl ;	

	operation_Cap<T>(university,lec,res,sec,off,2,2,2,2, vect_size);

	delete [] yok;
	delete [] lec;
	delete [] res;
	delete [] off ;
	delete [] sec ;
	delete [] university;	
}

/*Employ the Employee*/
template <class T>
void load_information_Lib(vector<string> vect ,int & vect_size ,string uni_name)
{
 	cout << endl ;

	University<T> * university ;

	Lecturer<T> * lec;
	lec = new Lecturer<T>[1] ;

	ResearchAssistant<T> * res;
	res = new ResearchAssistant<T>[1] ;

	Officer<T> * off ;
	off = new Officer<T>[1];

	Secretary<T> * sec ;	
	sec = new Secretary<T>[1] ;


	LiberalEducation<T> * yok = new LiberalEducation<int>;
	yok->foundUni(university,uni_name);		/*complate new university*/

	srand(time(NULL) + vect_size);		/*for random in time*/	
	int who = ( rand() % 2 ) ;

	string name , surname ;

	if (who == 0)
	{
		cout << university->get_Name_emp() << " requests ResearchAssistant" << endl ;
		name = vect[vect_size];
		surname = vect[vect_size+1];
		yok->giveJob(name,surname,university ,lec ,res ,sec ,off ,0 ,'R' );
		vect_size += 3;
	 		
	 	cout << endl ;	
		cout << "I see that there is an opportunity for being ResearchAssistant in the university. So I am ResearchAssistant." << endl ;
		operation_Lib<T>(university,res,off,1,1, vect_size,who);	
	}
	else
	{
		cout << university->get_Name_emp() << " requests Officer" << endl ;
		name = vect[vect_size];
		surname = vect[vect_size+1];
		yok->giveJob(name,surname,university ,lec ,res ,sec ,off ,0 ,'O' );
		vect_size += 3;
	 		
	 	cout << endl ;	
		cout << "I see that there is an opportunity for being Officer in the university. So I am Officer." << endl ;
		operation_Lib<T>(university,res,off,1,1, vect_size,who);	
	}		

	delete [] yok;
	delete [] lec;
	delete [] sec;
	delete [] off;
	delete [] res;
	delete [] university;
}


/*randomly do action*/
template <class T>
void operation_Lib(University<T>* &university,ResearchAssistant<T> * researchAssistant,Officer<T> * officer,int res,int off , int size_null,int who)
{
	int i = 0 , res_count = 0;
	int effect;
	srand(time(NULL)+size_null);		/*for random in time*/
	off -= 1;

	while(i < 50)
	{
		effect = ( rand() % 11 ) + 1;	/*there output number in all enum value*/
		cout << endl ;

		if (effect == makeDoc)		
		{
			if (who == 1)
			{
				officer[off].makeDoc();
				cout << "University has makeDoc. I did document . My happiness is " << researchAssistant[off].get_Happiness() 
					 << " and my money is " << ( (university[0].get_Contribution() * 3 ) / 2 ) - 1  << ". I contribute 3 to university." << endl;			
			}
			else
			{
				cout << "University has make Doc.I cannot do that." << endl ;				
			}
		}

		else if (effect == drinkTea)
		{
			if (who == 0)
			{
				researchAssistant[res_count].drinkTea();
				cout << "University has drink tea. I did slackness . My happiness is " << researchAssistant[res_count].get_Happiness() 
					 << " and my money is " << ( (university[0].get_Contribution() * 3 ) / 2 ) - 1  << ". I contribute -2 to university." << endl;					
			}
			else
			{
				officer[off].drinkTea();
				cout << "University has drink tea. I did slackness . My happiness is " << officer[off].get_Happiness() 
					 << " and my money is " << ( (university[0].get_Contribution() * 3 ) / 2 ) - 1  << ". I contribute -2 to university." << endl;
			}
		}

		else if (effect == research)	/*only assistant can*/
		{
			if (who == 0)
			{
				researchAssistant[res_count].research();
				cout << "University has research. I did project . My happiness is " << researchAssistant[res_count].get_Happiness() 
					 << " and my money is " << ( (university[0].get_Contribution() * 3 ) / 2 ) - 1  << ". I contribute +4 to university." << endl;									
			}
			else
			{
				cout << "University has research.I cannot do that." << endl ;
			}
		}

		else if (effect == giveLesson)	/*only lecturer can*/
		{
			cout << "University has give Lesson.I cannot do that." << endl ;
		}

		else if (effect == seeSuccessfulStudent)	/*only academic personal do*/
		{
			if (who == 0)
			{
				researchAssistant[res_count].seeSuccessfulStudent();
				cout << "University has see Successful Student. I did seminar . My happiness is " << researchAssistant[res_count].get_Happiness() 
					 << " and my money is " << ( (university[0].get_Contribution() * 3 ) / 2 ) - 1  << ". I contribute +0 to university." << endl;													
			}
			else
			{
				cout << "University has see Successful Student.I cannot do that." << endl ;
			}
		}

		else if (effect == makePublish)		/*only academic personal do*/
		{	
			if (who == 0)
			{
				researchAssistant[res_count].makePublish();
				cout << "University has make Publish. I did academicPaper . My happiness is " << researchAssistant[res_count].get_Happiness() 
					 << " and my money is " << ( (university[0].get_Contribution() * 3 ) / 2 ) - 1  << ". I contribute +5 to university." << endl;	
			}
			else
			{
				cout << "University has make Publish.I cannot do that." << endl ;
			}		
		}

		else if (effect == manageProcess)	/*only administ do it*/
		{
			if (who == 1)
			{
				officer[off].manageProcess();
				cout << "University has manage Process. I did administration . My happiness is " << officer[off].get_Happiness() 
					 << " and my money is " << ( (university[0].get_Contribution() * 3 ) / 2 ) - 1  << ". I contribute +2 to university." << endl;
			}
			else 
			{
				cout << "University has manage Process.I cannot do that." << endl ;						
			}
		}

		else if (effect == giveHW)	/*only lecturer give homework*/
		{
			cout << "University has give HW.I cannot do that." << endl ;
		}

		else if (effect == readHW)		/*only assistant read hw*/
		{
			if (who == 0)
			{
				researchAssistant[res_count].readHW();
				cout << "University has read HW. I did homeworkTimeout . My happiness is " << researchAssistant[res_count].get_Happiness() 
					 << " and my money is " << ( (university[0].get_Contribution() * 3 ) / 2 ) - 1  << ". I contribute +2 to university." << endl;						
			}
			else
			{
				cout << "University has read HW.I cannot do that." << endl ;
			}
		}

		else if (effect == receivePetition)		/*only secretary can do*/
		{
			cout << "University has receive Petition.I cannot do that." << endl ;
		}

		else if (effect == submitPetition)
		{
			if (who == 0)
			{
				researchAssistant[res_count].submitPetition();
				cout << "University has submit Petition. I did solution . My happiness is " << researchAssistant[res_count].get_Happiness() 
					 << " and my money is " << ( (university[0].get_Contribution() * 3 ) / 2 ) - 1  << ". I contribute -2 to university." << endl;						
			}
			else
			{
				officer[off].submitPetition();
				cout << "University has submit Petition. I did solution . My happiness is " << officer[off].get_Happiness() 
					 << " and my money is " << ( (university[0].get_Contribution() * 3 ) / 2 ) - 1  << ". I contribute -2 to university." << endl;				
			}
		}
		else
		{
			/*not possible*/
		}
		i += 1;
	}
	if (who == 0)
	{
		cout << "After all, my happiness is " << researchAssistant[res_count].get_Happiness() << " . My money is " << ( (university[0].get_Contribution() * 3 ) / 2 ) - 1
			 << " . Contribution of university is " << university[0].get_Contribution() << " ." << endl << endl ;
	}
	else
	{
		cout << "After all, my happiness is " << officer[res_count].get_Happiness() << " . My money is " << ( (university[0].get_Contribution() * 3 ) / 2 ) - 1
			 << " . Contribution of university is " << university[0].get_Contribution() << " ." << endl << endl ;
	}
}

template <class T>
void operation_Com(University<T>* &university,Lecturer<T> * lecturer,ResearchAssistant<T> * researchAssistant,Secretary<T> * secretary,Officer<T> * officer,int lec,int res,int sec ,int off , int size_null)
{
	/*Lets start to call function effects*/
	int i = 0;
	int lec_count = 0 , res_count = 0 ,sec_count = 0 ,off_count = 0 ,aca_count = 2 ,adm_count = 2 ,emp_count = 4;   /*for next employ */
	int effect;
	srand(time(NULL)+size_null);		/*for random in time*/

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
	cout << "Contribution : " << university[0].get_Contribution() << endl << endl;		/*all employs Contribution equal to university Contribution*/
}

template <class T>
void operation_Cap(University<T>* &university,Lecturer<T> * lecturer,ResearchAssistant<T> * researchAssistant,Secretary<T> * secretary,Officer<T> * officer,int lec,int res,int sec ,int off , int size_null)
{
	/*Lets start to call function effects*/
	int i = 0;
	int lec_count = 0 , res_count = 0 ,sec_count = 0 ,off_count = 0 ,aca_count = 2 ,adm_count = 2 ,emp_count = 4;   /*for next employ */
	int effect;
	srand(time(NULL)+size_null);		/*for random in time but all time same action.now i do real random for all time with be + size_null*/
	/*null+size for not same all time*/
	cout << endl ;

	while(i < 50)  /*end of the senarios*/
	{
		effect = ( rand() % 11 ) + 1;	/*there output number in all enum value*/
		//cout << endl ;

		if (effect == makeDoc)		
		{
			officer[off_count].makeDoc();	/*call make doc for officer */
			cout << officer[off_count].get_Name() << " " << officer[off_count].get_Surname() << " have document.Therefore,"
				 << officer[off_count].get_Name() << " " << officer[off_count].get_Surname() << " make Doc. Happiness of " 
				 << officer[off_count].get_Name() << " " << officer[off_count].get_Surname() << " is " 
			     << officer[off_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;				
			off_count += 1;		/*next other officer*/
		}

		else if (effect == drinkTea)
		{
			if (emp_count % 4 == 0)		/*first time lecturer drink tea*/
			{
				lecturer[lec_count].drinkTea();
				cout << lecturer[lec_count].get_Name() << " " << lecturer[lec_count].get_Surname() << " have slackness.Therefore," 
					<< lecturer[lec_count].get_Name() << " " << lecturer[lec_count].get_Surname() << " drink tea. Happiness of "
					<< lecturer[lec_count].get_Name() << " " << lecturer[lec_count].get_Surname() << " is "
					<< lecturer[lec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;								
				lec_count += 1;			
			}
			else if (emp_count % 4 == 1)	/*second time officer drink tea*/
			{
				officer[off_count].drinkTea();
				cout << officer[off_count].get_Name() << " " << officer[off_count].get_Surname() << " have slackness.Therefore,"
				 << officer[off_count].get_Name() << " " << officer[off_count].get_Surname() << " drink tea. Happiness of " 
				 << officer[off_count].get_Name() << " " << officer[off_count].get_Surname() << " is " 
			     << officer[off_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;
				off_count += 1;				
			}
			else if (emp_count % 4 == 2)	/*third time secratary drink tea*/
			{
				secretary[sec_count].drinkTea();
				cout << secretary[sec_count].get_Name() << " " << secretary[sec_count].get_Surname() << " have slackness.Therefore," 
					<< secretary[sec_count].get_Name() << " " << secretary[sec_count].get_Surname() << " drink tea. Happiness of "
					<< secretary[sec_count].get_Name() << " " << secretary[sec_count].get_Surname() << " is "
					<< secretary[sec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;		
				sec_count += 1;				
			}
			else	/*next time there drink tea*/
			{
				researchAssistant[res_count].drinkTea();
				cout << researchAssistant[res_count].get_Name() << " " << researchAssistant[sec_count].get_Surname() << " have slackness.Therefore," 
					<< researchAssistant[res_count].get_Name() << " " << researchAssistant[res_count].get_Surname() << " drink tea. Happiness of " 
					<< researchAssistant[res_count].get_Name() << " " << researchAssistant[res_count].get_Surname() << " is "
					<< researchAssistant[res_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;								
				res_count += 1;	
			}	
			emp_count += 1;	
		}

		else if (effect == research)	/*only assistant can*/
		{
			researchAssistant[res_count].research();
				cout << researchAssistant[res_count].get_Name() << " " << researchAssistant[sec_count].get_Surname() << " have project.Therefore," 
					<< researchAssistant[res_count].get_Name() << " " << researchAssistant[res_count].get_Surname() << " research. Happiness of " 
					<< researchAssistant[res_count].get_Name() << " " << researchAssistant[res_count].get_Surname() << " is "
					<< researchAssistant[res_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;								
			res_count += 1;	
		}

		else if (effect == giveLesson)	/*only lecturer can*/
		{
			lecturer[lec_count].giveLesson();
			cout << lecturer[lec_count].get_Name() << " " << lecturer[lec_count].get_Surname() << " have lesson.Therefore," 
				<< lecturer[lec_count].get_Name() << " " << lecturer[lec_count].get_Surname() << " give Lesson. Happiness of "
				<< lecturer[lec_count].get_Name() << " " << lecturer[lec_count].get_Surname() << " is "
				<< lecturer[lec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;								
			lec_count += 1;	
		}

		else if (effect == seeSuccessfulStudent)	/*only academic personal do*/
		{
			if (aca_count % 2 == 0)	/*first time lecturer do*/
			{
				lecturer[lec_count].seeSuccessfulStudent();
				cout << lecturer[lec_count].get_Name() << " " << lecturer[lec_count].get_Surname() << " have seminar.Therefore," 
					<< lecturer[lec_count].get_Name() << " " << lecturer[lec_count].get_Surname() << " see Successful Student. Happiness of "
					<< lecturer[lec_count].get_Name() << " " << lecturer[lec_count].get_Surname() << " is "
					<< lecturer[lec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;								
				lec_count += 1;			
			}
			else	/*next time researchAssistant do*/
			{
				researchAssistant[res_count].seeSuccessfulStudent();
				cout << researchAssistant[res_count].get_Name() << " " << researchAssistant[sec_count].get_Surname() << " have seminar.Therefore," 
					<< researchAssistant[res_count].get_Name() << " " << researchAssistant[res_count].get_Surname() << " see Successful Student. Happiness of " 
					<< researchAssistant[res_count].get_Name() << " " << researchAssistant[res_count].get_Surname() << " is "
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
				cout << lecturer[lec_count].get_Name() << " " << lecturer[lec_count].get_Surname() << " have academicPaper.Therefore," 
					<< lecturer[lec_count].get_Name() << " " << lecturer[lec_count].get_Surname() << " make Publish. Happiness of "
					<< lecturer[lec_count].get_Name() << " " << lecturer[lec_count].get_Surname() << " is "
					<< lecturer[lec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;								
				lec_count += 1;			
			}
			else	/*next time researchAssistant do*/
			{
				researchAssistant[res_count].makePublish();
				cout << researchAssistant[res_count].get_Name() << " " << researchAssistant[sec_count].get_Surname() << " have academic Paper.Therefore," 
					<< researchAssistant[res_count].get_Name() << " " << researchAssistant[res_count].get_Surname() << " make Publish. Happiness of " 
					<< researchAssistant[res_count].get_Name() << " " << researchAssistant[res_count].get_Surname() << " is "
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
				cout << officer[off_count].get_Name() << " " << officer[off_count].get_Surname() << " have administration.Therefore,"
					 << officer[off_count].get_Name() << " " << officer[off_count].get_Surname() << " manage Process. Happiness of " 
				 	<< officer[off_count].get_Name() << " " << officer[off_count].get_Surname() << " is " 
			     	<< officer[off_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;				
				off_count += 1;				
			}
			else	/*next time secretary do*/
			{
				secretary[sec_count].manageProcess();
				cout << secretary[sec_count].get_Name() << " " << secretary[sec_count].get_Surname() << " have administration.Therefore," 
					<< secretary[sec_count].get_Name() << " " << secretary[sec_count].get_Surname() << " manage Process. Happiness of "
					<< secretary[sec_count].get_Name() << " " << secretary[sec_count].get_Surname() << " is "
					<< secretary[sec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;			
				sec_count += 1;				
			}			
			adm_count += 1;	
		}

		else if (effect == giveHW)	/*only lecturer give homework*/
		{
			lecturer[lec_count].giveHW();
			cout << lecturer[lec_count].get_Name() << " " << lecturer[lec_count].get_Surname() << " have HomeworkTime.Therefore,"
			 	<< lecturer[lec_count].get_Name() << " " << lecturer[lec_count].get_Surname() << " give HW. Happiness of "
					<< lecturer[lec_count].get_Name() << " " << lecturer[lec_count].get_Surname() << " is "
					<< lecturer[lec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;			
			lec_count += 1;	
		}

		else if (effect == readHW)		/*only assistant read hw*/
		{
			researchAssistant[res_count].readHW();
				cout << researchAssistant[res_count].get_Name() << " " << researchAssistant[sec_count].get_Surname() << " have homeworkTimeout.Therefore," 
					<< researchAssistant[res_count].get_Name() << " " << researchAssistant[res_count].get_Surname() << " read HW. Happiness of " 
					<< researchAssistant[res_count].get_Name() << " " << researchAssistant[res_count].get_Surname() << " is "
					<< researchAssistant[res_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;								
			res_count += 1;	
		}

		else if (effect == receivePetition)		/*only secretary can do*/
		{
			secretary[sec_count].receivePetition();		
			cout << secretary[sec_count].get_Name() << " " << secretary[sec_count].get_Surname() << " have incident.Therefore," 
					<< secretary[sec_count].get_Name() << " " << secretary[sec_count].get_Surname() << " receive Petition. Happiness of "
					<< secretary[sec_count].get_Name() << " " << secretary[sec_count].get_Surname() << " is "
					<< secretary[sec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;			
			sec_count += 1;	
		}

		else if (effect == submitPetition)
		{
			if (emp_count % 4 == 0)		/*first time lecturer submit petition*/
			{
				lecturer[lec_count].submitPetition();
				cout << lecturer[lec_count].get_Name() << " " << lecturer[lec_count].get_Surname() << " have solution.Therefore," 
					<< lecturer[lec_count].get_Name() << " " << lecturer[lec_count].get_Surname() << " submit Petition. Happiness of "
					<< lecturer[lec_count].get_Name() << " " << lecturer[lec_count].get_Surname() << " is "
					<< lecturer[lec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;								
				lec_count += 1;			
			}
			else if (emp_count % 4 == 1)		/*second time officer submit petition*/
			{
				officer[off_count].submitPetition();
				cout << officer[off_count].get_Name() << " " << officer[off_count].get_Surname() << " have solution.Therefore,"
					 << officer[off_count].get_Name() << " " << officer[off_count].get_Surname() << " submit Petition. Happiness of " 
					 << officer[off_count].get_Name() << " " << officer[off_count].get_Surname() << " is " 
			    	 << officer[off_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;				
				off_count += 1;				
			}
			else if (emp_count % 4 == 2)		/*third time secratary submit petition*/
			{
				secretary[sec_count].submitPetition();
				cout << secretary[sec_count].get_Name() << " " << secretary[sec_count].get_Surname() << " have solution.Therefore," 
					<< secretary[sec_count].get_Name() << " " << secretary[sec_count].get_Surname() << " submit Petition. Happiness of "
					<< secretary[sec_count].get_Name() << " " << secretary[sec_count].get_Surname() << " is "
					<< secretary[sec_count].get_Happiness() << ", contribution of uni is " << university[0].get_Contribution() << "." << endl;		
				sec_count += 1;				
			}
			else		/*next time there submit petition*/
			{
				researchAssistant[res_count].submitPetition();
				cout << researchAssistant[res_count].get_Name() << " " << researchAssistant[sec_count].get_Surname() << " have solution.Therefore," 
					<< researchAssistant[res_count].get_Name() << " " << researchAssistant[res_count].get_Surname() << " submit Petition. Happiness of " 
					<< researchAssistant[res_count].get_Name() << " " << researchAssistant[res_count].get_Surname() << " is "
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
		cout << endl;
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
	cout << "Contribution : " << university->get_Contribution() << endl << endl;		/*all employs Contribution equal to university Contribution*/

}