class Solution {
public:
    int trailingZeroes(int n) {
        //Super uber easy code. Best solution 0ms.
        int cnt = 0;
        while(n > 0){
            int temp = n / 5;
            n = n / 5;
            cnt += temp;
        }
        return cnt;
        //How ? 
        //Factorial is the product of the number 1 to n. When we had 10's we have one zero. 10's mean 5 x 2. When we have something that is product of the 5 like 25 125 that means we have as many as more zeros as the product of the 5. We do not have to worry about 2's because always we have enough 2's to create 10's. We just need to calculate how many 5's we have.  
    }
};
