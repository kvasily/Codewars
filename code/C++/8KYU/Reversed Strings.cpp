/*
Complete the solution so that it reverses the string passed into it.

'world'  =>  'dlrow'
'word'   =>  'drow'
*/


#include <string>
#include <vector>

std::string reverseString(const std::string &str)
{
    std::vector<char> lettersInWord(str.begin(), str.end());
    std::string reversed;
    reversed.reserve(str.size());

    for (auto i = lettersInWord.rbegin(); i != lettersInWord.rend(); i++)
    {
        reversed.push_back(*i);
    }
    return reversed;
}

// better version, no vector

std::string reverseString1(const std::string &str)
{
    return std::string(str.rbegin(), str.rend());
}