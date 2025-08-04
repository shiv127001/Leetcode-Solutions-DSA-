class Solution {
public:
    string reverseWords(string s) {
        int start = 0, end = s.size() - 1;
        while (start <= end && s[start] == ' ') start++;
        while (end >= start && s[end] == ' ') end--;

        // int f = 0;
        // int r = s.size()-1;
        // while(f!=r)
        // {
        //     while(q)
        // }


        vector<string> temp;
        char s2=' ';
        string s1 = "";
        for(int i=start;i<=end;++i)
        {
            
            if(s[i] != s2)
            {
                s1=s1+s[i];
            }

            else if (!s1.empty())
            {
                temp.push_back(s1);
                s1 = "";
            }
        }
        if (!s1.empty()) 
        {
            temp.push_back(s1);
        }
        reverse(temp.begin(), temp.end());
        string result;
        for (int i = 0; i < temp.size(); i++) {
            result += temp[i];
            if (i < temp.size() - 1) result += ' ';
        }

        
        return result;
    }
};