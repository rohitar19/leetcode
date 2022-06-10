class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>q;
        vector<int>v;
        int l=nums.size();
        
        
        for(int i =0 ; i<k ; i++){
            while(!q.empty() && nums[i]>=nums[q.back()])
                q.pop_back();
        
        q.push_back(i);
        }
        
          v.push_back(nums[q.front()]);
        
        //remaining k element i=k to l 
        
     for(int i=k;i<l;i++){
         
    
    while(!q.empty() && q.front()<=(i-k) ){
        q.pop_front();
    }
    
    while(!q.empty() && nums[i]>=nums[q.back()])
        q.pop_back();
    
    q.push_back(i);
  v.push_back(nums[q.front()]);
        
     }
    return v;
    
    }
};