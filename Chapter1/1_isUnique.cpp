#include<iostream>

bool isUnique(const std::string&);

int main()
{
	std::string str;
	std::getline(std::cin, str);
	if(isUnique(str))
		std::cout<<"unique"<<std::endl;
	else
		std::cout<<"Not unique"<<std::endl;
	
	return 0;
}

bool isUnique(const std::string& str)
{

	std::size_t size = str.length();
	int unique{};
	for(int i = 0; i<size; ++i)
	{
		if(unique & ( 1 << (str[i] - 'a')))
			return false;
		unique |= 1 << (str[i] - 'a');
	}
	return true;
}
