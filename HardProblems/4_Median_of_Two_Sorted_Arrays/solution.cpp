class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        std::vector<int> merged;

        merged.reserve(nums1.size() + nums2.size());
        merged.insert(merged.end(), nums1.begin(), nums1.end());
        merged.insert(merged.end(), nums2.begin(), nums2.end());

        std::sort(merged.begin(), merged.end());

        int totalSize = merged.size();
        
        if (totalSize % 2 != 0) {
            return merged[totalSize / 2];
        }
        else {
            return (merged[totalSize / 2 - 1] + merged[totalSize / 2]) / 2.0;
        }
    }
};
