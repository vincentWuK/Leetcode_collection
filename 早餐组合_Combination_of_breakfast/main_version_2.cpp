//KUIZONG WU 20/11/2020
//Bashed on answer <https://leetcode-cn.com/problems/2vYnGI/solution/cpython-er-fen-cha-zhao-shuang-100-by-yanghk/>
//Better algorithm to solve this question (faster and less memory usage)
//Similar to binary search

class Solution {
public:
    int calculation(vector<int>& temp, int x)
    {
        if(temp.back() <= x) return temp.size();
        int left = 0;
        int right = temp.size()-1;
        while (left < right)
        {
            int mid = (left + right -1)/2;
            if (temp[mid]<=x)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
        return left%1000000007;
    }

    int breakfastNumber(vector<int>& staple, vector<int>& drinks, int x) {
        int count = 0;
        if (staple.size()>drinks.size())
        {
            sort(drinks.begin(),drinks.end());
            for (int i : staple)
            {
                count += calculation(drinks,x-i);
            }
        }
        else
        {
            sort(staple.begin(),staple.end());
            for (int j : drinks)
            {
                count = count + calculation(staple,x-j);
                count = count %1000000007;
            }
        }
        return count;
    }
};