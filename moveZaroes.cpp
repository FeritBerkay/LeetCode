#include <vector>
#include <iostream>

using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        //Solution 1 26ms
        // int index = 0;
        // auto result = find(nums.begin() + index, nums.end(), 0);
        // int count = 0;
        // while(result!=nums.end()){
        //     int tempindex = distance(nums.begin(), result);
        //     nums.erase(nums.begin() + tempindex);
        //     index = tempindex;
        //     count++;
        //     result = find(nums.begin() + index, nums.end(), 0);
        // }
        // for(int i = 0; i < count; i++){
        //     nums.push_back(0);
        // }
        // //return nums;

        //Solution 2 23 ms
        // int count =0;
        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i]==0){
        //         nums.erase(nums.begin() + i);
        //         count++;
        //         i--;
        //     }
        // }
        // for(int i =0; i < count; i++){
        //     nums.push_back(0);
        // }


        //Solution 3 22ms
        // int count =0;
        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i-count]==0){
        //         nums.erase(nums.begin() + i-count);
        //         count++;
        //         nums.push_back(0);
        //     }
        // }

        //Solution 4 3ms best solution
        int left = 0;
        int right = 0;
        while(right<nums.size()){
            if(nums[right]  != 0){
                nums[left] = nums[right];
                left++;
            }
            right++;
        }

        while(left<nums.size()){
            nums[left] = 0;
            left++;
        }
    }
};