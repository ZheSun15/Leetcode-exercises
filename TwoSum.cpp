class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> target_idx;
        int i,j = 0;
        int nums_len;
        nums_len = nums.size();
        for (i=0; i<nums_len; i++) {
			// when the element equals to the target, search for zero in the vector
			if (nums[i] == target) {
                // traverse to find zero
                for (j=0; j<nums_len; j++) {
                    if ((nums[j] == 0) && (j != i)) {
                        target_idx.push_back(i);
                        target_idx.push_back(j);
                        return target_idx; 
                    }
                }
                continue;
            }
       		// traverse temp_arr to find the counterpart of current element
			for (j=i+1; j<nums_len; j++) {
				if (nums[i] + nums[j] == target) {
					target_idx.push_back(i);
					target_idx.push_back(j);
					return target_idx;
				}
			}
        }
    	return target_idx;
    }
};