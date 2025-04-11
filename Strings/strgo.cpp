#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<cctype>

/** 
* @brief A function to transform to lowercase the strings
* @param a string
* @return a lowercase string 
*/
std::string tolowerbytransform(std::string line){
	std::transform(line.begin(), line.end(), line.begin(), [](unsigned char c){
		return std::tolower(c);
	});
	return line;
}
std::string tolowerbyloop(std::string line){
	for(char &c : line){
		c = std::tolower(c);
	} 
	return line;
}
std::string ispalindrome(const std::string& line){
	return line;
}


int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	std::cout<<"***WELCOME TO STR-GO***"<<'\n';
	std::cout<<"-Your Best Platform to learn about strings.-"<<'\n';

	std::string line;
	while(std::getline(std::cin, line)){
		line = tolowerbytransform(line);

		std:: string line2 = tolowerbyloop(line);
		std::cout<<line<<'\n';
		std::cout<<line2<<'\n';
	}
	return 0;
}