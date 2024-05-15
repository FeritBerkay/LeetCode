class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    //     Solution 1
    //     int first = 0;
    //     int last = nums.size() - 1;
    //     while(last>=first){
    //         int mid = (first + last) / 2;
    //         if(nums[mid] > target){
    //             last = mid - 1;
    //         }
    //         else if(nums[mid] < target){
    //             first = mid + 1;
    //         }
    //         else{
    //             return mid;
    //         }
    //     }
        
    //     return last+1;
    // }




    // Solution 2
    int l = nums.size();
    int f = 0;
    int mid;
    while( f < l){
        mid = (l + f) / 2;
        if(nums[mid] > target){
           //because in the division operations int val takes the floor of the resutl
            l = mid;
        }
        else if(nums[mid] < target){
            f = mid + 1;
        }
        else{
            return mid;
        }
    }
    return l;

    }
};
