#ifndef UNIVERSITY_H_
#define UNIVERSITY_H_

using namespace std; 

namespace use_University
{
	class University 	/*normal class for University*/
	{
		public:
			University();
			~University();
			University(University & temp);
			University & operator=(const University & temp);

			void set_Contribution(int num);
			int get_Contribution() const ;
			
		private:
			int contribution;
	};
}

#endif