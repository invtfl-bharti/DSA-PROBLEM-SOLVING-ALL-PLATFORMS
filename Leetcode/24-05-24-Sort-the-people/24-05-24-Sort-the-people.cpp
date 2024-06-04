class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<string,int>freqMap;
        sort(heights.end(),heights.begin());
        int tallest = names[0];
        for(int i=0;i<names.size();i++) {
            if(freqMap.find(names[i])!=freqMap.end()) {
                freqMap[names[i]]++;
            }
            else{
                freqMap[names[i]] = 1;
            }
        }
        for(int i=0;i<heights.size();i++) {
            if(freqMap.find(heights[i])!=freqMap.end()) {
                freqMap[heights[i]]++;
            }
            else{
                freqMap[heights[i]] = 1;
            }
        }
        list<int>myList;
        


    }
};
