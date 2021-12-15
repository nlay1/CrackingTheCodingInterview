#include <string>
#include <iostream>

void append_compression(std::string&, char, std::size_t);
std::string compress(const std::string&);


int main()
{
    std::cout << compress("test") << std::endl;
    std::cout << compress("aabcccccaaa") << std::endl;
    std::cout << compress("a") << std::endl;
    std::cout << compress("") << std::endl;
}

void append_compression(std::string& s, char c, std::size_t ctr)
{
    s.push_back(c);
    s.append(std::to_string(ctr));
}

std::string compress(const std::string& s)
{
    if (s.size() == 0)
        return s;

    std::size_t ctr = 0;
    char current = s[0];
    std::string result;

    for (char c : s)
    {
        if (c == current)
        {
            ++ctr;
        }
        else
        {
            append_compression(result, current, ctr);
            current = c;
            ctr = 1;
        }
    }
    append_compression(result, current, ctr);

    if (result.size() >= s.size())
        return s;

    return result;
}
