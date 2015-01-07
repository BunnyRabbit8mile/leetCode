class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0){return 0;}
        if(s.size()==1){return 1;}

	int head=0, tail=0, maxl = 0;
        map<char,bool> table;

	while ( (head<s.size()) && (tail<s.size()) ){
            if (table[s[tail]]==false){
                table[s[tail]]=true;
                maxl = max(maxl,tail-head+1);
                tail++;
            }else if (table[s[tail]]==true){
                maxl = max(maxl,tail-head);
                table[s[head]]=false;
                head++;
            }
        }
        return maxl;
    }
};
