#include<iostream>
#include<string>

void url(std::string&);

int main()
{
	std::string str;
	std::getline(std::cin, str);
	url(str);
	return 0;
}

void url(std::string& str)
{
	for(int i = str.length(); str[i] == 32; --i)
		if(str[i] == 32)
			str.erase(i);
	std::string rep = "%20";
    for(int i=0 ; i<str.length() ; i++)
    {
        if(str[i] == ' ')
            str.replace(i,1,rep);
    }
    std::cout<<str;
}	
	
