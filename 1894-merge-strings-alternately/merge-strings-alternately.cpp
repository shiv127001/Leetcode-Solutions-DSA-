class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1 = word1.size();
        int l2 = word2.size();
        int i=0;
        int j=0;
        string merged = "";
        while(i<l1 && j<l2){
            merged += word1[i];
            merged += word2[j];
            i+=1;
            j+=1;
        }
        while(i<l1)
        {
            merged += word1[i];
            i+=1;
        }
        while(j<l2)
        {
            merged += word2[j];
            j+=1;
        }
        return merged;
    }
};