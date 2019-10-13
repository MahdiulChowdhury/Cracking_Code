#ifndef QUESTION_THREE_MAIN 
#define QUESTION_THREE_MAIN 


class Time 
{
	private: 
		int hours; 
		int minutes; 
		int seconds; 
	public: 
		Time(): hours(0), minutes(0), seconds(0)
		{}
		Time(int hours, int minutes, int seconds): hours(hours), minutes(minutes), seconds(seconds)
		{}
		void Display(); 
		void Add_two_objects(Time one, Time two);  
};



#endif 