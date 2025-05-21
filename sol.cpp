class Solution {
    public:
        int minOperations(vector<int>& nums) {
            
       // using the bits manipulation and the brute force solution;
    
    
       int count = 0;
    
       for(int i = 0; i<=nums.size()-3; i++){
         
         if(nums[i] == 1) continue;
    
         for(int j = i; j<i+3; j++){
           
             nums[j] = 1-nums[j];  // flipping the binary number.
         }
    
        count++;
    
       }
    
    
    
        if(find(nums.begin(),nums.end(),0) != nums.end()) return -1;
    
        return count;
    
    
        }
    };