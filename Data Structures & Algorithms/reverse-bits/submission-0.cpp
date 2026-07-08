class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t a = 0;
        for (int i = 0; i < 32; ++i){
            a += ((n >> i) & 1) ? (1 << (31 - i)) : 0;
        }
        return a;
    }
};
