class Solution {
public:
    int findMaxValue(vector<vector<int>>&mat, int N){
        vector<vector<int>>ans(N, vector<int>(N));
        
        int maxVal=INT_MIN;
        
        ans[N-1][N-1]=mat[N-1][N-1];
        
        int currMax= ans[N-1][N-1];
        
        for(int i=N-2;i>=0;i--){
            if(mat[i][N-1]>currMax){
                currMax=mat[i][N-1];
            }
            ans[i][N-1]=currMax;
        }
        
        currMax= ans[N-1][N-1];
        for(int j=N-2;j>=0;j--){
            if(mat[N-1][j]>0){
                currMax=mat[N-1][j];
            }
            ans[N-1][j]= currMax;
        }
        
        for(int i=N-2;i>=0;i--){
            for(int j=N-2;j>=0;j--){
                if(ans[i+1][j+1]-mat[i][j]>maxVal){
                    maxVal=ans[i+1][j+1]-mat[i][j];
                }
                ans[i][j]= max(mat[i][j], max(ans[i+1][j],ans[i][j+1]));
            }
        }
        return maxVal;
    }
};
