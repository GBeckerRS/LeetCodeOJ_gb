#include    "inc/solution.h"

// O(nlog n)
std::vector<int> Solution::twoSum(std::vector<int>& nums, int target)
{
    std::vector<int> res;

    std::vector<int> temp (nums.begin(), nums.end());
    std::sort (temp.begin(), temp.end());

    int head = 0, tail = temp.size()-1;
    for (; head != tail;)
    {
        if (temp[head] + temp[tail] < target)
        {
            head++;
        }
        else
        {
            if (temp[head] + temp[tail] > target)
            {
                tail--;
            }
            else
            {
                break;
            }
        }
    }

    for (int i = 0; res.size() < 2; i++)
    {
        if (nums[i] == temp[head])
        {
            res.push_back(i+1);
        }
        else
        {
            if (nums[i] == temp[tail])
            {
                res.push_back(i+1);
            }
        }
    }

    return res;
}

