#include<iostream>
#include<string>

bool isPalind(std::string str);
std::string lower(std::string& str);

int main()
{
    bool flag = isPalind("Tactcoa");
    std::cout<< (flag ? "The strings can form palindrom " : "Can't form") << std::endl;
    return 0;    
}
bool isPalind(std::string str)
{
    str = lower(str);
    const int SIZE = 128;
    char sym[SIZE]{};
    for(int i{}; i<str.length(); ++i)
    {
        ++sym[str[i]];
    }
    int ctr{};
    for(int i = 0; i<SIZE; ++i)
    {
        if(sym[i] == 1) ++ctr;
    }
    if(ctr > 1) return false;

    return true;
}

std::string lower(std::string& str)
{
    for(int i = 0; i<str.size(); ++i)
        if(str[i] >= 65 && str[i] <= 90) 
            str[i] += 32;
    return str;
}
