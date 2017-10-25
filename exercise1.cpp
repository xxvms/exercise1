
#include <algorithm>
#include "exercise1.hpp"

// Requirements:
//   -- if i is even, returns true
//   -- if i is odd, returns false
bool is_even(int i)
{

    return (i & 1)==0; //i % 2 == 0;
}

// Requirements:
//   -- returns the number of odd numbers in the given vector
int count_odd(const std::vector<int>& vec)
{
  int count = 0;
  for (auto number: vec)
  {
    if (!is_even(number)){

      count++;
    }
  }
    return count;
}

// Requirements:
//   -- returns the sum of the even numbers in the vector
int even_sum(const std::vector<int>& vec)
{
  int sum = 0;
  for (auto number: vec){
    if (is_even(number)){

      sum += number;
    }
  }
    return sum;
}

// Requirements:
//   -- returns a new vector containing only the elements of vec which are
//      divisible by p
std::vector<int> copy_if_divisible_by(const std::vector<int>& vec, int p)
{
  std::vector<int>new_vector;

  for (auto number : vec)
  {
    if (number % p == 0)
    {
      new_vector.push_back(number);
    }
  }
    return new_vector;
}

// Requirements:
//   -- returns the largest number in the vector which is divisible by 3, or
//      zero if there are no such numbers
int largest_div_by_three(const std::vector<int>& vec)
{
  int large_number = 0;

  std::vector<int>large_vector = copy_if_divisible_by(vec, 3);
  std::sort(large_vector.begin(), large_vector.end());
  if ( !large_vector.empty())
  {
    large_number = large_vector.back();
  }
    return large_number;
}

// Requirements:
//   -- returns true if the elements in vec are sorted, and false otherwise
bool is_sorted(const std::vector<int>& vec)
{
  std::vector<int> origin = vec;

  std::sort(origin.begin(), origin.end());

  if (vec == origin)
  {
    return true;
  }

    return false;
}