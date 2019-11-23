class Solution {
public:
    int hammingDistance(int x, int y) {
     vector<int> xbin,ybin;
        int xval=0,yval=0;
        int count=0;
        while(x!=0 || y!=0)
        {
            xval= x%2;
            yval=y%2;
            x=x/2;
            y=y/2;
            xbin.emplace(xbin.begin(),xval);
            ybin.emplace(ybin.begin(),yval);
        }
        for (int i=0 ; i!=xbin.size() ; i++) {
            if (xbin[i] != ybin[i]) count++;
        }
        return count;
    }
};