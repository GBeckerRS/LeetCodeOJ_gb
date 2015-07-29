#include    <iostream>
#include    <vector>

#include    "inc/solution.h"

int main(void)
{
    std::cout << "Problem1-TwoSum" << std::endl;

    int inteiros [4] = {2,5,8,9};
    std::vector<int> v (inteiros, inteiros + sizeof(inteiros) / sizeof(int));

    Solution s;
    std::vector<int> res = s.twoSum (v,17);

    for (unsigned int i = 0; i < res.size (); i++)
    {
        std::cout << "Indice " << (i+1) << ": " << res[i] << std::endl;
    }

    return 0;
}

