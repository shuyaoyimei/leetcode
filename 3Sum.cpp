class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> triples;
        std::sort(nums.begin(), nums.end());
        int i =0,last = nums.size() - 1;
        while(i < last){
            if (nums[i] > 0) {
                break;
            }
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int a = nums[i], j = i+1, k = last;
            while(j < k){
                int b = nums[j], c = nums[k], sum = a+b+c;
                if (sum == 0) triples.push_back({a, b, c});
                if (sum <= 0) while (nums[j] == b && j < k) j++;
                if (sum >= 0) while (nums[k] == c && j < k) k--;
            }
            while (nums[i] == a && i < last) i++;
        }
        return triples;
    }
};
