#include <iostream> 

int main() 
{
  /* std::endl forces a flush of the output buffer  
  which is less efficient than just using \n */
  std::cout << "Hello, World!\n";
  return 0;
}
