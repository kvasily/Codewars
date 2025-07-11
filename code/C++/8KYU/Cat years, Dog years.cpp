/*
Kata Task
I have a cat and a dog.

I got them at the same time as kitten/puppy. That was humanYears years ago.

Return their respective ages now as [humanYears,catYears,dogYears]

NOTES:{
hum(anY{ars >= 1
hum(anYears}are whole numbers only
Cat Year}
15 cat years for first year
+9 cat years for second year
+4 cat years for each year after that
Dog Years
15 dog years for first year
+9 dog years for second year
+5 dog years for each year after that
*/


#include <vector>

std::vector<int> humanYearsCatYearsDogYears(int humanYears) 
{
  if (humanYears > 2) return {humanYears, 4*(humanYears-2)+24, 5*(humanYears-2)+24};
  if (humanYears == 2) return {humanYears, 24, 24};
  if (humanYears == 1) return {humanYears, 15, 15};
}