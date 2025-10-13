class Solution {
public:
    string intToRoman(int num) {
        vector<string> thousands = {"", "M", "MM", "MMM"};
        vector<string> hundreds  = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        vector<string> tens      = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        vector<string> ones      = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

        string result = "";
        result += thousands[num / 1000];
        result += hundreds[(num % 1000) / 100];
        result += tens[(num % 100) / 10];
        result += ones[num % 10];

        return result;
    }
};


// class Solution {
// public:
//     string intToRoman(int num) {
//         int n = num,cnt=0;
//         vector<int> arr;
//         while(n)
//         {
//             int rem = n%10;
//             arr.push_back(rem);
//             n = n/10;
//             cnt++;
//         }
//         reverse(arr.begin(),arr.end());
//         int n1 = arr.size();
//         for(int i=0;i<cnt;++i)
//         {
//             arr[i] = arr[i]*(10^(cnt-(i+1)));
//         }
//         string st = "";
//         for(int i=0;i<n1;++i)
//         {
//             if(arr[i] >=1000) 
//             {
//                 int big = arr[i]/1000;
//                 while(big--) {st=st+'M'; arr[i] = arr[i] -1000;}
//             }
//             else if(arr[i]>500 && arr[i]<1000) 
//             {
//                 st = st+'D';
//                 arr[i] = arr[i]-500;
//                 int big = arr[i]/100;
//                 while(big--) {st=st+'C'; arr[i] = arr[i] -100;}
//             }
//             else if(arr[i]==500) st=st+'D';
//             else if(arr[i]>100 && arr[i]<500)
//             {
//                 int big = arr[i]/100;
//                 while(big--) {st=st+'C';arr[i] = arr[i]-100;}
//             }
//             else if()

//         }
//     }
// };