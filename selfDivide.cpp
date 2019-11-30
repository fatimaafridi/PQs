class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for (int i=left ; i<=right; i++) {
            if (selfDivide(i)) {
                res.push_back(i);
            }
        }
        return res;
    }
    bool selfDivide(int i) {
        int x=i;
        if (x==0) return false;
        while (x>0) {
            int num = x%10;
            if (num==0 || i%num !=0) return false;
            x=x/10;
        }
        return true;
    }
};