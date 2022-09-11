#include <iostream>
#include <map>
#include <string>

int romanToInt(std::string s) {
      	std::map<char, int> numbers = { {'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000} };
        int result = 0;

	for(int i = 0; i < s.length(); i++){
        	if(i < s.length() - 1 && numbers.at(s[i]) < numbers.at(s[i+1])){
                	result -= numbers.at(s[i]);
                } else {
                        result += numbers.at(s[i]);
             	}
	}

        return result;
}

int main(){
	std::string userInput;

	std::cout << "Enter number using the Roman numerical system: ";
	std::cin >> userInput;

	for(int j=0;j < userInput.length();j++){
		userInput[j] = toupper(userInput[j]);
	}

	std::cout << "Your provided value in the Arabic numerical system is " << romanToInt(userInput);

	return 0;
}
