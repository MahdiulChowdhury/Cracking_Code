#include <iostream>
#include <sstream>
#include <vector>

template < typename T > 
std::string to_string_alt(const T& t){
	std::stringstream ss; 
	ss<<t; 
	return ss.str(); 
}
template<typename ... Param> 
std::vector <std::string> to_string_altII(const Param& ... param){
	return {to_string_alt(param) ...};
}


template<typename ...ParamII> 
std::vector<std::string> to_string (const ParamII& ... param){
	const auto to_string_imp1 = [](const auto &p){
		std::stringstream ss; 
		ss << p; 
		return ss.str(); 
	};
	return {to_string_imp1(param) ...};
}

int main(){
	//const auto vec = to_string_altII("hello", 1, 4, 5,4);
	const auto vec = to_string("hello", 1, 4, 5,4);
	for(const auto &a:vec){
		std::cout<<a<<'\n';
	}
	return 0;
}