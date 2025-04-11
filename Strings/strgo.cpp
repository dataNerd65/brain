#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<cctype>

/** 
* @brief functions to transform to lowercase the strings
* @param  string
* @return lowercase string 
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
/**
 * @brief a function to check if a string is a palindrome
*/
bool ispalindrome(const std::string& line){
	return true;
}


int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	std::cout<<"***WELCOME TO STR-GO***"<<'\n';
	std::cout<<"---Your Best Platform to learn about strings.---"<<'\n';

	std::string line;
	while(std::getline(std::cin, line)){
		line = tolowerbytransform(line);

		std:: string line2 = tolowerbyloop(line);
		std::cout<<line<<'\n';
		std::cout<<line2<<'\n';
	}
	return 0;
}