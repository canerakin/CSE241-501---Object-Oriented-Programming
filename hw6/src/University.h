#ifndef UNIVERSITY_H_
#define UNIVERSITY_H_

#include <string>
using namespace std; 

namespace use_University
{
	template<class T>
	class University 	/*normal class for University*/
	{
		public:
			University();
			University(T num , string arr);	
			~University();
			University(University<T> & temp);
			University<T> & operator=(const University<T> & temp);

			void set_Contribution(T num);
			T get_Contribution() const ;

			void set_Name_emp(string array) ;
			string get_Name_emp() const ;			
			
		private:
			T contribution;
			string name; /*for üniversity name*/
	};
}

#endif