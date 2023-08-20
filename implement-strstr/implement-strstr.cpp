class Solution {
public:
    int strStr(string str1, string str2) {
    int pos = 0,ans=-1;
    int index;
    while((index = str1.find(str2, pos)) != string::npos) {
      ans= index;
      break;// << endl;
    }
    return ans;
    }
};