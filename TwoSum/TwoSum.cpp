class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
	vector<int> res;
        for (vector<int>::size_type first = 0;first != numbers.size();
	        first++) {
	    for (vector<int>::size_type second = 0;second != numbers.size();
		    second++) {
		if (numbers[first]+numbers[second] == target) {
		    res.push_back(first+1);
		    res.push_back(second+1);
		}
	    }
	}
	return res;
    }
};
