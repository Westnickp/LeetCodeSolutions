class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) return {};
        int cols = matrix[0].size();
        int rows = matrix.size();
        // int result[rows*cols];
        int numLayers = ((rows%2==1)||(cols%2==1)) ? min(rows, cols)/2+1 : min(rows, cols)/2;
        // int counter = 0;
        vector<int> answer {};
        // std::cout << matrix.empty();
        // iterate through spiral
        for (int shell=0; shell<numLayers; shell++)
        {
            //top row including both ends
            for (int i=shell; i<cols-shell; i++)
            {
                // result[counter] = matrix[shell][i]; counter++;
                // result.push_back(counter) = matrix[shell][i]; counter++;
                answer.push_back(matrix[shell][i]);
            }
            //terminate if no movement downard
            if (shell==rows-(shell+1)) break;
            
            //right column excluding top including bottom
            for (int i=shell+1; i<=rows-(shell+1); i++)
            {
                // result[counter] = matrix[i][cols-(shell+1)]; counter++;
                // result.push_back(counter) = matrix[i][cols-(shell+1)]; counter++;
                answer.push_back(matrix[i][cols-(shell+1)]);
            }
            //terminate if no movement left
            if (cols-(shell+1)==shell) break;
            
            //bottom row excluding right including left
            for (int i=cols-(shell+2); i>=shell; i--)
            {
                // result[counter] = matrix[rows-(shell+1)][i]; counter++;
                // result.push_back(counter) = matrix[rows-(shell+1)][i]; counter++;
                answer.push_back(matrix[rows-(shell+1)][i]);
            }
            //terminate if no movement up
            if (rows-(shell+1)==shell+1) break;
            
            //left column excluding bottom excluding top
            for (int i=rows-(shell+2); i>shell; i--)
            {
                // result[counter] = matrix[i][shell]; counter++;
                // result.push_back(counter) = matrix[shell][i]; counter++;
                answer.push_back(matrix[i][shell]);
            }
        }

        // vector<int> answer {};
        // for (int j=0; j<counter; j++) answer.push_back(result[j]);

        return answer;
        
        
        
    }
};
