class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        if(bits.size() == 1)
         {
         	if(bits[0] == 0)
         	return true;
         	
         	return false;
		 }
		 //[1,1,0]
		 int idx=0;
		 while(idx < bits.size())
		 {
		 	if(idx == bits.size()-1)
		 	{
		 	   	if(bits[idx] == 0)
		 	   	return true;
                
                return false;
		    }else if((idx < bits.size()) and (idx+1) < (bits.size()))
		 	{
                if(bits[idx] == 1 and bits[idx+1] == 0)
                idx = idx + 2;
                else if(bits[idx] == 1 and bits[idx+1] == 1)
                idx = idx + 2;
                else
                idx++;
		    }
		 }
		 return false;
    }
};