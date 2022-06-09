class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         int bal=0;
        int start=0;
        int loss=0;
        
        for(int i =0; i<gas.size(); i++){
            bal+=gas[i]-cost[i];
            if(bal<0){
                start=i+1;
                loss+=bal;
                bal=0;
            }
        }
        
        if(bal+loss>=0)
            return start;
        else
            return -1;
    }
};