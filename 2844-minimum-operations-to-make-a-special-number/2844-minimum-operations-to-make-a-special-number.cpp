class Solution {
public:
    int minimumOperations(string num) {
        int n = num.length();
        int cnt = -1, cnt1 = -1, cnt2 = -1, cnt3 = -1;
cout <<n<<" ";
        // Check for "25"
        for (int i = n - 1; i > 0; i--) {
            if (num[i] == '5') {
                //cnt = (n - 1) - i;
                for (int j = i - 1; j >= 0; j--) {
                    if (num[j] == '2') {
                        cnt = (n - 1) - j - 1;
                        break;
                    }
                }
                break;
            }
        }

        // Check for "50"
        for (int i = n - 1; i > 0; i--) {
            if (num[i] == '0') {
                //cnt1 = (n - 1) - i;
                for (int j = i - 1; j >= 0; j--) {
                    if (num[j] == '5') {
                        cnt1 = (n - 1) - j - 1;
                        break;
                    }
                }
                break;
            }
        }

        // Check for "75"
        for (int i = n - 1; i > 0; i--) {
            if (num[i] == '5') {
                //cnt2 = (n - 1) - i;
                for (int j = i - 1; j >= 0; j--) {
                    if (num[j] == '7') {
                        cnt2 = (n - 1) - j - 1;
                        break;
                    }
                }
                break;
            }
        }

        // Check for "00"
        for (int i = n - 1; i > 0; i--) {
            if (num[i] == '0') {
               // cnt3 = (n - 1) - i;
                //cout<<cnt3<<" ";
                for (int j = i - 1; j >= 0; j--) {
                    if (num[j] == '0') {
                        cnt3 = (n - 1) - j ;
                        cnt3--;
                        //cout<<cnt3<<" ";
                        break;
                    }
                }
                break;
            }
        }

        // Return -1 if no target number is achievable
        if (cnt == -1 && cnt1 == -1 && cnt2 == -1 && cnt3 == -1) {
            
            int nz=0;
        for( int i=0;i<n;i++)
            if(num[i]!='0')
                nz++;
            
            return nz;
        }
        //cout<< cnt<<" "<<cnt1<<" "<<cnt2<<" "<<cnt3;
        // Find the minimum among achievable target numbers
        int minOps = INT_MAX;
        if (cnt != -1 ) minOps = min(minOps, cnt);
        if (cnt1 != -1) minOps = min(minOps, cnt1);
        if (cnt2 != -1) minOps = min(minOps, cnt2);
        if (cnt3 != -1) minOps = min(minOps, cnt3);
        int nz=0;
        for( int i=0;i<n;i++)
            if(num[i]!='0')
                nz++;
                
    if(minOps==-1)
        return nz;
        return minOps;
    }
};