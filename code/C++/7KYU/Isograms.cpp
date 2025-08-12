/*
An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.

Example: (Input --> Output)

"Dermatoglyphics" --> true
"aba" --> false
"moOse" --> false (ignore letter case)
*/

#include <string>
#include <algorithm>
#include <cctype>

bool is_isogram(const std::string& str)
{
    if (str.empty()) return true;

    std::string sorted = str;
    for (char& c: sorted)
    {
        c = std::tolower(c);
    }

    std::sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.length(); i++)
    {
        if (sorted[i] == sorted[i+1]) return false;
    }

    return true;
}

// ebx
#include <cctype>
#include <unordered_set>

bool is_isogram1(std::string str)
{
    std::unordered_set<char> char_set;
    for (const auto &c : str) {
        auto c_lower = std::tolower(c);
        if (char_set.count(c_lower) == 0) char_set.insert(c_lower);
        else return false;
    }
    return true;
}