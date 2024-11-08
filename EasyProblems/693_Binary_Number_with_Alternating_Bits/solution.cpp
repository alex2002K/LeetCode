class Solution {
public:
    bool hasAlternatingBits(int n) {
        uint32_t maskA = 0xAAAAAAAA; // 0b1010 1010 1010 1010 1010 1010 1010 1010
        uint32_t maskB = 0x55555555; // 0b0101 0101 0101 0101 0101 0101 0101 0101

        return ((n & maskA) == 0) || ((n & maskB) == 0);
    }
};
