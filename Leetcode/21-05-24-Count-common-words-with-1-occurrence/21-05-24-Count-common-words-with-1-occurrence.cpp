class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int i, c1, c2, ans=0;
        for(i=0 ; i<words1.size() ; i++)
        {
            c1 = count(words1.begin(), words1.end(), words1[i]);
            c2 = count(words2.begin(), words2.end(), words1[i]);
            if(c1==1 && c2==1)
            {
                ans++;
            }
        }
        return ans;
    }
};
