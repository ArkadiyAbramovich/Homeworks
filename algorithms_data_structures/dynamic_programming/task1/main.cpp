#include <iostream>
#include <map>

int Fibonacci(int num)
{
  static std::map<long int, long int> cache{{0, 1}, {1, 1}};

  auto found = cache.find(num);
  if (found != std::end(cache)) {
    return found->second;
  }

  cache[num] = Fibonacci(num - 1) + Fibonacci(num - 2);
  return cache[num];
}

int main() {
  
  std::cout << Fibonacci(90) << std::endl;
}
