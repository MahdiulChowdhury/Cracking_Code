#ifndef MAIN_QUESTION_SEVEN 
#define MAIN_QUESTION_SEVEN


class Angle{
private: 
	int degrees; 
	float minutes; 
	char direction; 
public: 
	Angle():degrees(0),minutes(0),direction(0)
	{

	}  
	Angle(int deg, float min, char dir): degrees(deg), minutes(min), direction(dir)
	{

	}
	void user_input(int dgr, float mnt, char dre); 
	void display() const; 
};




#endif 