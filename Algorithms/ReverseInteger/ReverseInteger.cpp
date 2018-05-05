class Solution {
public:
    int reverse(int x) {
        int output = 0;
        int tmp = 0;
        
        while (x) {
            tmp = x % 10;
            output = output * 10 + tmp;
            if (tmp != output % 10) return 0;
            x /= 10;
        } 
        return output;
    }
};