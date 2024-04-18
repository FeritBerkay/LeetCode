#include <iostream>
#include <string>
#include <map>

using namespace std;
class Solution {
public:
    int romanToInt(string s) {
    map<string, int> romanNumerals = {
        {"I", 1},
        {"IV", 4},
        {"V", 5},
        {"IX", 9},
        {"X", 10},
        {"XL", 40},
        {"L", 50},
        {"XC", 90},
        {"C", 100},
        {"CD", 400},
        {"D", 500},
        {"CM", 900},
        {"M", 1000}
    };
        //SOlution 1 28ms
    int result = 0;
    if(s.size()==1){
        return romanNumerals[s];
    }
    for(int i = s.size() - 1; i > 0; i--){
        string sub = s.substr(i-1, 2);
         auto it = romanNumerals.find(sub);
    if (it != romanNumerals.end()) {
        result +=  romanNumerals[sub];
        i--;
    }
    else{
        result+=romanNumerals[s.substr(i, 1)];

    }
    if(i==1){
        result+=romanNumerals[s.substr(0, 1)];
    }
    }



    //Solution 2 30ms
//    int result = 0;
// for(int i = 0; i < s.size(); i++) {
//     if (i < s.size() - 1 && romanNumerals[s.substr(i, 2)] > romanNumerals[s.substr(i, 1)]) {
//         result += romanNumerals[s.substr(i, 2)];
//         i++; // Skip next character since we already processed it
//     } else {
//         result += romanNumerals[s.substr(i, 1)];
//     }
// }


        //Best solution 0ms
    //  unordered_map<char, int> m;
        
    //     m['I'] = 1;
    //     m['V'] = 5;
    //     m['X'] = 10;
    //     m['L'] = 50;
    //     m['C'] = 100;
    //     m['D'] = 500;
    //     m['M'] = 1000;
        
    //     int ans = 0;
        
    //     for(int i = 0; i < s.length(); i++){
    //         if(m[s[i]] < m[s[i+1]]){
    //             ans -= m[s[i]];
    //         }
    //         else{
    //             ans += m[s[i]];
    //         }
    //     }
    //     return ans;

      return result;
    }
};