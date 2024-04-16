#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> values;
        for(int i = 0; i < nums.size() - 1; i++){
            auto result = std::find(nums.begin() + i + 1, nums.end(), target - nums[i]);
            if(result!= nums.end()){
                int index = std::distance(nums.begin() , result);
                values.push_back(i);
                values.push_back(index);
                break;
            }
        }

        
        // int count = 0;
        // while(true){
        //      auto result = find(nums.begin() + count + 1, nums.end(), target - nums[count]);
        //     if(result!= nums.end()){
        //         int index = distance(nums.begin() , result);
        //         values.push_back(count);
        //         values.push_back(index);
        //         break;
        //     }
        //     count++;
        // }
        return values;

        //42 ms solution
    }
};
int main(){

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution solution;

    vector<int> result = solution.twoSum(nums, target);

    if(result.size() == 2) {
        cout << "Indices of the two numbers: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two numbers found that add up to the target." << endl;
    }

    return 0;

}