// Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.

// The output should be two capital letters with a dot separating them.

// It should look like this:

// Sam Harris => S.H

// patrick feeney => P.F

#include <string>
#include <cctype>

std::string abbrevName(const std::string& name)
  {
    size_t spacePosition = name.find(" ");
    if (spacePosition == std::string::npos) return "";

    char firstInitial = std::toupper(name[0]);
    char lastInitial = std::toupper(name[spacePosition + 1]);

    return std::string(1, firstInitial) + '.' + (lastInitial);
    // if firstInitial isn't turned into a string it will stay a char,
    // '.' and lastInitial are also chars, so they will be added together as integers and return an int
    // promoting firstInitial to string promotes the added chars to strings
  }


// Sliff 

std::string abbrevName1(std::string name)
{
  std::string ret;
  ret.push_back(toupper(name[0]));
  ret.push_back('.');
  ret.push_back(toupper(name[name.find(' ') + 1] ));
  return ret;
}