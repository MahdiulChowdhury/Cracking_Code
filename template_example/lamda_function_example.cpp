#include <iostream>
#include <algorithm>
/*
int main()
{
	auto heall = [](int a, int b){
		return a+b; 
	};
	std::cout<<heall(190,10)<<'\n'; 

	return 0; 
}*/


/*int main()
{
	auto i = 10;
	auto j = 5; 
	auto heall = [i,j](int a, int b)-> int{
		return a+b+i+j; 
	};
	std::cout<<heall(190,10)<<'\n'; 

	return 0; 
}*/

/*int main()
{
	auto i = 10;
	auto j = 5; 
	auto heall = [=](int a, int b)-> int{
		return a+b+i+j; 
	};
	std::cout<<heall(190,10)<<'\n'; 

	return 0; 
}*/
/*
int main()
{
	auto i = 10;
	auto j = 5; 
	auto heall = [&,j](int a, int b)-> int{
		j = 1;
		return a+b+i+j; 
	};
	std::cout<<heall(190,10)<<'\n'; 

	return 0; 
}*/

int main()
{
	std::vector<int> arr = {1,2,3,4,5};
	auto total = 0; 

	std::for_each(begin(arr),end(arr), [&](int x){total += x;});
	std::cout<<"sum is"<< total << '\n'; 

	return 0; 
}