#include "CapitalistEducation.h"

namespace use_CapitalistEducation
{

	template <class T>
	void CapitalistEducation<T>::foundUni(University<T>* &uni ,string name)
	{ 
			uni = new University<T>[1];	/*i delete last university and define new adress for new university*/
			uni[0].set_Name_emp(name);		/*give name the new university*/
	}

	template <class T>
	void CapitalistEducation<T>::giveJob(string name,string surname,University<T> * uni,Lecturer<T> * lec,ResearchAssistant<T> * res,Secretary<T> * sec,Officer<T> * off,int size_veriable,char who)
	{
		if (who == 'L')			/*for employ which job*/
		{
			cout << "CapitalistEducation give job to " << name << " " << surname << " as Lecturer." << endl ;
			lec[size_veriable].set_Name(name);
			lec[size_veriable].set_Surname(surname);			
			lec[size_veriable].employ( uni );
			cout << uni->get_Name_emp() <<" employs " << lec[size_veriable].get_Name() << " " << lec[size_veriable].get_Surname() << " as Lecturer." << endl ;
		}
		else if (who == 'R')
		{
			cout << "CapitalistEducation give job to " << name << " " << surname << " as ResearchAssistant." << endl ;
			res[size_veriable].set_Name(name);
			res[size_veriable].set_Surname(surname);			
			res[size_veriable].employ( uni );				
			cout << uni->get_Name_emp() << " employs " << res[size_veriable].get_Name() << " " << res[size_veriable].get_Surname() << " as ResearchAssistant." << endl ;
		}
		else if (who == 'O')
		{
			cout << "CapitalistEducation give job to " << name << " " << surname << " as Officer." << endl ;
			off[size_veriable].set_Name(name);
			off[size_veriable].set_Surname(surname);			
			off[size_veriable].employ( uni );				
			cout << uni->get_Name_emp() << " employs " << off[size_veriable].get_Name() << " " << off[size_veriable].get_Surname() << " as Officer." << endl ;
		}
		else if (who == 'S')
		{
			cout << "CapitalistEducation give job to " << name << " " << surname << " as Secretary." << endl ;		
			sec[size_veriable].set_Name(name);
			sec[size_veriable].set_Surname(surname);			
			sec[size_veriable].employ( uni );				
			cout << uni->get_Name_emp() << " employs " << sec[size_veriable].get_Name() << " " << sec[size_veriable].get_Surname() << " as Secretary." << endl ;
		}
	}

}