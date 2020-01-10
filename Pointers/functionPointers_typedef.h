
#ifndef FUNCTIONPOINTERS_TYPEDEF_H 
#define FUNCTIONPOINTERS_TYPEDEF_H 
#include <string>

typedef int (*fun_ptr) (std::string command, int sth);

typedef struct 
{	
	const char* command; 
	fun_ptr type_fun_ptr; 
	const char* help;
}commandTable;

extern commandTable table[];
extern int commandProcess(std::string commands, commandTable* tabl);



#endif 