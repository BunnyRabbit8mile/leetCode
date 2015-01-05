class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> res;
        map<int, int> h_map;
        //initial h_map;
        h_map.clear();
        for (vector<int>::size_type tem = 0;tem != numbers.size();tem++) {
            h_map[numbers[tem]] = tem;
        }

        for (vector<int>::size_type first = 0;first != numbers.size();first++) {
            if (h_map.find(target - numbers[first]) != h_map.end()) {
                if (first < h_map[target - numbers[first]]) {
                        res.push_back(first+1);
                        res.push_back(h_map[target-numbers[first]]+1);
                } else if (first > h_map[target - numbers[first]]) {
                    res.push_back(h_map[target-numbers[first]]+1);
                    res.push_back(first+1);
                }
            }
        }
        return res;
    }
};
