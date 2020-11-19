//KUIZONG WU 19/11/2020
//Depending on the answer <https://leetcode-cn.com/problems/2vYnGI/solution/shuang-zhi-zhen-bian-li-liang-ge-zu-shu-by-ranlizz/>
//this program has two pointers, one points to the begining of staple[], another points to the end of drinks[]
class Solution {
public:
    int breakfastNumber(vector<int>& staple, vector<int>& drinks, int x) {
        int temp = 0, j = 0, count = 0;
        int i = 0; //pointer of staples
        sort(staple.begin(),staple.end());
        sort(drinks.begin(),drinks.end());
        j = drinks.size()-1; // pointer of drinks[]
        while ((i<staple.size())&&(j>=0))
        {
            if (staple[i]+drinks[j]<=x)
            {
                count+= j+1; 
                count = count%1000000007; // avoid huge result
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