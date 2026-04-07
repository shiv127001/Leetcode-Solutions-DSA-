#include <string>
class Solution {
public:
    int compress(vector<char>& chars) {
        for(int k =0; k <chars.size();++k)
        {
            cout<<chars[k]<<"";
        }
        cout<<endl;
        vector<char> result;
        if (chars.size() == 1){return 1;}
        int read =0; 
        int write = 0 ;

        while(read<chars.size() && write<chars.size())
        {
            char current_char = chars[read];
            int count = 0;

            while(read<chars.size() && (chars[read] == current_char))
            {
                read ++;
                count++;
            }
            chars[write] = current_char;
            write++;
            // result.push_back(current_char);
            if(count>1){
            string countStr = to_string(count);
            for(char c : countStr)
            {
                chars[write] = c;
                write++;
                // result.push_back(c);
            }
            }
        }
        // for(int k =0; k <result.size();++k)
        // {
        //     cout<<result[k]<<"";
        //     chars[k] = result[k];
        // }
        return write;







        // // vector<char>& result;
        // string countStr;
        // map<char,int> mpp;
        // char cr=chars[0];
        // int i,count=0;
        // if (chars.size() == 1){return 1;}

        // for(i = 0;i<chars.size();++i)
        // {mpp[chars[i]] = 0;}

        // for(i = 0;i<chars.size();++i)
        // {mpp[chars[i]] += 1;}

        // // cout<<"size = "<<mpp.size();
        // int j = 0;
        // for(auto it: mpp)
        // {
        //     cout<<it.first<<", "<<it.second<<endl;
        //     chars[j] = it.first;
        //     j++;
        //     if (it.second ==1){goto exit_loops;}
        //     countStr = to_string(it.second);
        //     for(char c : countStr)
        //     {
        //         chars[j] = c;
        //         j++;
        //     }
        //     exit_loops:
            
        // }
        // return 2*(mpp.size());
    }
};