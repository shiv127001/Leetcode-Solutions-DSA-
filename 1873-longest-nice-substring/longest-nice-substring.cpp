class Solution {
public:
    string longestNiceSubstring(string s) {
        if(s.size() <=1 ) return "";
        set<char> st(s.begin(), s.end());
        for(int i = 0; i < s.size(); ++i){
            char ch = s[i];
            if((isupper(ch) && st.find(tolower(ch)) == st.end()) || 
               (islower(ch) && st.find(toupper(ch)) == st.end())) {

                string left = longestNiceSubstring(s.substr(0,i));
                string right = longestNiceSubstring(s.substr(i+1));

                return left.size() >= right.size() ? left : right;
            }
        }
        return s;
    }
};




// class Solution {
// public:

//     int longestNiceSubstring_using_divide_conquer(string s,int maxsize)
//     {
//         if(s.size()) return 1;
//         set<char> st;
//         for(auto ch : s)
//         {
//             st.insert(ch);
//         }int i=0;
//         for(auto ch : s)
//         {
//             if(isupper(ch)) 
//             {
//                 char lower = tolower(ch);
//                 if(st.find(lower) == st.end()) {
//                     pivotindex = i+1;
//                     string s1="",s2="";int n=s.size();
//                     for(int j=0;j<pivotindex;++j){s1=s1+s[j];}
//                     for(int j=pivotindex;j<n;++j){s2=s2+s[j];}
//                     maxsize = max(longestNiceSubstring_using_divide_conquer(s1,maxsize),maxsize); // left
//                     maxsize = max(longestNiceSubstring_using_divide_conquer(s2,maxsize),maxsize); // right
//                 }
//             }
//             i++;
//         }

//         longestNiceSubstring_using_divide_conquer()
//         return maxsize;
//     }

//     string longestNiceSubstring(string s) {
//         int maxsize=0;
//         int maxlen = longestNiceSubstring_using_divide_conquer(s,maxsize);
//         return maxlen;
//     }
// };