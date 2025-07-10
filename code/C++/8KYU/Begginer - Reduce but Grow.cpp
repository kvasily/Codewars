/*
Given a non-empty array of integers, return the result of multiplying the values together in order. Example:

[1, 2, 3, 4] => 1 * 2 * 3 * 4 = 24
*/

#include <vector>
int grow(const std::vector<int>& arr) 
 {
    int product = 1;
    for (int nums : arr)
     {
       product *= nums; 
     }
    return product;
 }



