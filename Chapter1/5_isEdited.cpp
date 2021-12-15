#include<iostream>
#include<string>

bool isEdited(const std::string&, const std::string&);

int main()

{
	std::string str1, str2;
	std::getline(std::cin, str1);
	std::getline(std::cin, str2);
	if(isEdited(str1, str2))
		std::cout<<"Edited, but OK"<<std::endl;
	else
		std::cout<<"(NOT)Edited, not OK"<<std::endl;
	return 0;
}

bool isEdited(const std::string& str1, const std::string& str2)
{
	int max = (str1.length() > str2.length()) ? str1.length() : str2.length();
       	int ctr{};
	for(int i = 0; i< max; ++i)
	{
		for(int j = 0; j< max; ++j)
		{
			if(str1[i] == str2[j])
				++ctr;
		}
	}	
	if( max - 1 == ctr)
		return true;
	return false;
}
