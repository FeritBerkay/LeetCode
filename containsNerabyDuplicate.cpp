#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// In main()
int main() {
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //Soluiton 1 2000ms
        // for(int i = 0; i < nums.size(); i++){
        //     for(int j = 1; j <= k; j++){
        //         if(i+j<nums.size()){
        //         if(nums[i] == nums[i+j]){
        //             return true;
        //         }
        //         }
        //     }
        // }
        // return false;
        
        //Solution 2 121ms
         unordered_map<int,int> mp;
        int n = nums.size();
        
        for(int i=0; i<n; i++)
        {
           
            if(mp.count(nums[i]))
            {
                if(abs(i-mp[nums[i]])<=k)
                    return true;
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};
}