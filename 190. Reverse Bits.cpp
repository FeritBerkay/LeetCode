class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        //uint32_t is a 32-bit unsigned integer type.
        uint32_t result = 0;
        int power = 0;
        for(int i = 0; i < 32; i++){
            //It extracts the (32 - i - 1)-th bit from number and assigns it to temp.
            int temp = (n >> (32 - i - 1)) & 1;
            //We do not use this in that dat type;
            //int temp = n[32 - i - 1];
            if(temp != 0){
                result += pow(2,i);
            }

        }
        
        return result;

    }
};
