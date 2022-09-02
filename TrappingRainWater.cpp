class Solution {
public:
    int trap(vector<int>& height) {
        
        // answer
        
        int total = 0;
        
        // Find ze maximum of the array 
        int max = 0;
        
        for (int i = 0; i < height.size(); i++){
            
            if (height[max] < height[i]){
                max = i;
            }   
        }
        
        // Find left max and sum the deposits until max
        
        int left_max = 0;
            
        for (int i = 0; i < max; i++){
            
             if (height[left_max] < height[i]){
                left_max = i;
            }            
            
            // Add the difference between left max height and current index height (will be 0 when height[i] == height[left max])
            // if left_max = 1, and i == 1 we get 0
            // then if i is 0 and left_max is unchanged we add difference
            total += height[left_max] - height[i];
            
        }
        
        // Then after we done with left side we go from right to max
        
        int right_max = height.size() -1;
        
        for (int i = height.size() -1; i > max; i--){
            
             if (height[right_max] < height[i]){
                right_max = i;
            }            
            
            total += height[right_max] - height[i];
            
        }
        
    return total;
    }
};