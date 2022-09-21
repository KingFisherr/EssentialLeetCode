class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> res;
        vector<int> fromleft;
        vector<int> fromright;
        int lproduct = 1;
        int rproduct = 1;
        
        // Push all the product of everything before i (forward pass)
        // Push all the product of everything before j (backward pass)
        for (int i = 0, j = nums.size() - 1; i < nums.size() && j >= 0; i++, j--){
            

            fromleft.push_back(lproduct);
            fromright.push_back(rproduct);
            
            lproduct *= nums[i];
            rproduct *= nums[j];
 
        }
                
        // Loop thru fromleft or fromright vector and multiply each at corresponding indices
        for (int i = 0, j = fromleft.size() - 1; i < fromleft.size() && j >= 0; i++, j--){
            res.push_back(fromleft[i]*fromright[j]);
        }
       
    return res;
        
    }
};

// 1 1 2 6
// 1 4 12 24


// 24 12 8 6