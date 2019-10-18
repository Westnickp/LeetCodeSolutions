class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int, int> combos;
        int length = A.size();
        int counter = 0;
    
        for (int a = 0; a < length; a++)
        {
            for (int b = 0; b < length; b++)
            {
                combos[A[a]+B[b]]++;
            }
        }
        for (int c = 0; c < length; c++)
        {
            for (int d = 0; d < length; d++)
            {
                counter += combos[-(C[c]+D[d])];
            }
        }

        
        return counter;
    }
};
