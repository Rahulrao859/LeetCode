class Solution {
public:
    vector<int> constructRectangle(int area) {
            // Start by finding the square root of the area
    int W = (int)sqrt(area);
    
    // Iterate down from the square root to find a factor pair (W, L)
    while (area % W != 0) {
        W--;  // Decrease W until we find a factor
    }
    
    // Calculate L as the corresponding length that satisfies L * W = area
    int L = area / W;
    
    // Return the result as a vector [L, W]
    return {L, W};
    }
};