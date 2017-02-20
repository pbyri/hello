#include <iostream>
#include <vector>

int main(int argc, char **argv) {
    std::cout << "Hello, world!" << std::endl;
    std::vector<uint16_t> vec;
    for(uint16_t val = 0; val < 10; ++val)
    {
      vec.push_back(val);
    }
    for(auto val : vec)
    {
      std::cout<< val << "\n";
	  std::cout<< "TEST" << "\n";
    }
    return 0;
}
