/*
Your task is to make two functions ( max and min, or maximum and minimum, etc., depending on the language ) that receive a list of integers as input, and return the largest and lowest number in that list, respectively. Each function returns one number.

Examples (Input -> Output)
* [4,6,2,1,9,63,-134,566]         -> max = 566, min = -134
* [-52, 56, 30, 29, -54, 0, -110] -> min = -110, max = 56
* [42, 54, 65, 87, 0]             -> min = 0, max = 87
* [5]                             -> min = 5, max = 5
*/

#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int min(const vector<int>& list)
{
    if (list.empty()) return INT_MAX;
    
    int Item = list[0];
    for (auto i: list)
    {
        if (Item < i) Item = i;
    }
    return Item;
}

int max(const vector<int> list)
{
    if (list.empty()) return INT_MAX;
    
    int Item = list[0];
    for (auto i: list)
    {
        if (Item > i) Item = i;
    }
    return Item;
}

// nicer looking version
int min1(const vector<int>& list)
{
    if (list.empty()) return INT_MAX;

    return *min_element(list.begin(), list.end());
}

int max1(const vector<int> list)
{
    if (list.empty()) return INT_MAX;

    return *max_element(list.begin(), list.end());
}
