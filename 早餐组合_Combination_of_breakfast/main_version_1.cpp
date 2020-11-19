class Solution {
public:
    int breakfastNumber(vector<int>& staple, vector<int>& drinks, int x) {
        int temp=0,j = 0, i = 0, count = 0;
        sort(staple.begin(),staple.end());
        sort(drinks.begin(),drinks.end());
        int len = staple.size();
        j = drinks.size()-1;
        while ((i<len)&&(j>=0))
        {
            if (staple[i]+drinks[j]<=x)
            {
                count+= j+1;
                count = count%1000000007;
                i++;
            }
            else
            {
                j--;
            }
        }
        return count%1000000007;
    }
};