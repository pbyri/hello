#include <iostream>
#include <vector>
#include <algorithm>

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
    auto f = std::find(std::begin(vec),std::end(vec),2);
    if(f != vec.end())
    {
	std::cout<< "found " << *f << "\n";
    }
    return 0;
}
