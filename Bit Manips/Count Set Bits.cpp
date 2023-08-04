class Solution {
  public:
    int setBits(int N) {
        // Simple Technique - C++
        return __builtin_popcount(N);
        
        // 1
        int cnt = 0, mask = 1;
        while(mask <= N){
            if(N & mask) cnt++;
            mask <<= 1;
        }
        return cnt;
        
        // 2
        int cnt = 0;
        while(N){
            cnt++;
            N = N & (N - 1);
        }
        return cnt;
    }
};
