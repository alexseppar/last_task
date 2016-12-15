#include <cstdio>
#include <cassert>
#include "dot.h"
#include <vector>
#include "sphere.h"
#include <string>
#include <fstream>

void fill_with_dots(std::vector<dot*>& dots, const std::vector<int>& nums)
{
    unsigned num_dots = nums.size() / 3;
    unsigned count = 0, iter = 0;
    while (count != num_dots)
    {
        dots.push_back(new dot(iter, iter + 1, iter + 2));
        iter += 3;
        ++count;
    }
}

std::vector<int>* read_info(const std::string& file_name)
{
    std::ifstream input(file_name);
    assert(input.is_open());
    char tmp;
    int num;
    unsigned file_size;
    input >> tmp;
    while (tmp != ';')
        input >> tmp;
    std::vector<int> *vec = new std::vector<int>;
    while (input >> num)
    {
        vec->push_back(num);
        input >> tmp;
    }
    assert(!input.bad());
    input.close();
    return vec;
}

int main(int argc, char **argv)
{
    assert(argc == 4);
    int Rmin = atoi(argv[1]);
    int Rmax = atoi(argv[2]);
    std::vector<int> *nums = read_info(std::string(argv[3]));

    unsigned num_dots = nums->size() / 3;
    std::vector<dot*> dots;
    fill_with_dots(dots, *nums); 
    
    /*    
    algorithm here!
    */

    for (unsigned i = 0; i < num_dots; ++i)
        delete dots[i];
    delete nums;
    return 0;
}
