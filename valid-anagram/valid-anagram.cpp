class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp,an;

        for(int i=0;i<s.size();i++)
        mp[s[i]]++;

        for(int i=0;i<t.size();i++)
        an[t[i]]++;

        if(mp==an)
        return true;
        else
        return false;
    }
};