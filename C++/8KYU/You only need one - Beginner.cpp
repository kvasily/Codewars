// You will be given an array a and a value x. All you need to do is check whether the provided array contains the value.

// a can contain numbers or strings. x can be either.

// Return true if the array contains the value, false if not.

// using namespace std;
#include <vector>
#include <string>

bool check(const std::vector<std::string>& seq, const std::string& elem) {
    for (const std::string& item : seq) {
        if (item == elem) {
            return true;
        }
    }
    return false;
}

// User user5709300
bool check1(const std::vector<std::string>& seq, const std::string& elem) {
  for(auto i:seq) if(i==elem)return 1;
  // (auto& i:seq) to avoid creating copy of the elements pass by reference 
  return 0;
}