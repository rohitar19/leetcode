class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        int ans = 0, j, k;
        int mod = 1e9 + 7;
        int n = arr.size();
        for(int i = 0; i < arr.size(); i++) {
            int new_target = target - arr[i];
            int j = i + 1, k = arr.size() - 1;
            while(j < k) {
                if(arr[j] + arr[k] > new_target) {
                    k--;
                }
                else if(arr[j] + arr[k] < new_target) {
                    j++;
                }
                else {
                    if(arr[j] == arr[k]) {
                        long long x = (k - j + 1);
                        long long y = (k - j);
                        long long temp = ((x) * (y))  / (long long)2;
                        temp %= mod;
                        ans += temp;
                        ans %= mod;
                        break;
                    }// j k  
                    else {
                        int left = 1, right = 1;
                        while(j + 1 < k && arr[j] == arr[j+1]) {
                            left++;
                            j++;
                        }
                        
                        while(k-1 > j && arr[k] == arr[k-1]) {
                            right++;
                            k--;
                        }
                        ans += ((left) * (right)) % mod;
                        ans %= mod;
                        j++;
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};
