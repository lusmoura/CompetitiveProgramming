class Solution {
public:
    static bool comp(int a, int b) { 
        return (a < b); 
    }
    
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(), stones.end());
        int size = stones.size();
        
        while (size > 1) {
            if (stones[size-1] == stones[size-2]) size -= 1;
            else stones[size-2] = stones[size-1] - stones[size-2];
            
            size -= 1;
            partial_sort(stones.begin(), stones.begin() + size, stones.end(), comp); 

        }
        
        
        if (size == 0) return 0;
        else return stones[0];
    }
};