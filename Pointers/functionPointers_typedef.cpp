
#include <string>
#include "functionPointers_typedef.h"


int commandProcess(std::string commands, commandTable* tabl)
{
	commandTable* struct_ptr = tabl; 

	while (struct_ptr -> command)
	{
		if (struct_ptr->command == commands)
		{
			return(tabl->type_fun_ptr("SLAM",6));
		}
	}
	return 0; 
}
