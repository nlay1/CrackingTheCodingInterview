#include<iostream>

bool isPermutation(const std::string&, const std::string& );

int main()
{
	std::string str1;
	std::getline(std::cin, str1);
	std::string str2;
	std::getline(std::cin, str2);
	if( isPermutation (str1, str2))
		std::cout<<"The strings are permutted"<<std::endl;
	else
		std::cout<<"Not permutted"<<std::endl;

	return 0;
}

bool isPermutation(const std::string& str1, const std::string& str2)
{
	if(str1.length() != str2.length()) return false;
	std::size_t ctr{};
	for(int i = 0; i<str1.length(); ++i)
	{
		for(int j = 0; j<str2.length(); ++j)
			if(str1[i] == str2[j]) 
				++ctr;
	}
	if(ctr == str1.length())
		return true;
	return false;
}
