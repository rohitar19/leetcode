class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        mergeSort(nums,0,nums.size()-1);
        return nums;
        
    }
    void mergeSort(vector<int>&nums ,int l , int r){
        if(l>=r)
            return;
        
        int mid=l+(r-l)/2;
        
          mergeSort(nums,l,mid);
        mergeSort(nums,mid+1,r);
        mergeArray(nums,l,mid,r);
        
    }
    
    void mergeArray(vector<int>&nums, int l , int mid, int r){
        
        
        vector<int>numsL , numsR;
        
        for(int i=l ; i<=mid; i++){
            numsL.push_back(nums[i]);
        }
         
        for(int i=mid+1 ; i<=r; i++){
            numsR.push_back(nums[i]);
        }
        
        int numsLp=0, numsRp=0, numsP=l;
        while(numsLp!=numsL.size() && numsRp!=numsR.size())
        {
            if(numsL[numsLp]<=numsR[numsRp]){
                nums[numsP]=numsL[numsLp];
                numsP++;
                numsLp++;
            }
            else{
                nums[numsP]=numsR[numsRp];
                numsP++;
                numsRp++;
            }  
            
        }
        while(numsLp<numsL.size()){
            nums[numsP]=numsL[numsLp];
            numsP++;
            numsLp++;
        }
        while(numsRp<numsR.size()){
            nums[numsP]=numsR[numsRp];
            numsP++;
            numsRp++;
            }
    }
    
  
    
    
};