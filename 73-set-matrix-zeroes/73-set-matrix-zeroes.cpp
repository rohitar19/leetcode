class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        vector<pair<int,int>>v; 
         for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==0)
                {
                    v.push_back(make_pair(i,j)); 
                }
            
            }
        }
        
        
                for(auto x:v)
                {
                    for(int k=0;k<mat.size();k++)
                        mat[k][x.second]=0; 
                    for(int k=0;k<mat[x.first].size();k++)
                        mat[x.first][k]=0;
                }
        
    }
};