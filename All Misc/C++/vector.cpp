#include <iostream>
#include <vector>

int main()
{
    std::vector <std::string> names (10);
    
    std::cout << names.size() << std::endl;

    names[0] = "jarell";

    std::cout << names[0] << std::endl;
}
