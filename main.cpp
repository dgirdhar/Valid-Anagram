class Solution {
public:
    bool isAnagram(string s, string t) {
        bool ret = true;
        int str1Arr[26] = {0};
        int str2Arr[26] = {0};
        
        for (int i = 0; i < s.size(); ++i) {
            str1Arr[s[i] - 'a']++;
        }
        
        for (int i = 0; i < t.size(); ++i) {
            str2Arr[t[i] - 'a']++;
        }
        
        for (int i = 0; i < 26; ++i) {
            if (str1Arr[i] != str2Arr[i]) {
                ret = false;
                break;
            }
        }
        
        return ret;
    }
};
