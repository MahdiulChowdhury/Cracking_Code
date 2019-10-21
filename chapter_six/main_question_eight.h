#ifndef MAIN_QUESTION_EIGHT 
#define MAIN_QUESTION_EIGHT 

class holds_serial_number
{
private: 
	static int count;
	unsigned int serial_number ;


public: 
	holds_serial_number()
	{	
		count++; 
		serial_number = count; 
	}
	void display_serial_number() const;  

};




#endif 