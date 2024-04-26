#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Solution 1
        // int n = nums.size();
        // for (int i = 0; i < n; i++)
        // {
        //  int count = 0;
        //  int tempi = i;
        //  while (tempi + 1 < n && nums[tempi]==nums[tempi + 1])
        //  {
        //     count++;
        //     tempi++;
        //  }
        //  if(count>0){
        //    for (int j = i + 1; j <= i + count; j++) {
        //             nums.erase(nums.begin() + (i + 1));
        //         }
        //  }
        //  n = nums.size(); 
        // }
        // return nums.size();


    //Solution 2 
    int count = 0;
    for(int i = 0; i < nums.size() - 1 - count; i++){
        while(nums[i] == nums[i + 1]){
            nums.erase(nums.begin() + i );
            nums.push_back(-101);
            count++;
        }
    }
    return nums.size() - count;

    //Solution 3
    // int j = 1;
    //     for(int i = 1; i < nums.size(); i++){
    //         if(nums[i] != nums[i - 1]){
    //             nums[j] = nums[i];
    //             j++;
    //         }
    //     }
    //     return j;
         }
};