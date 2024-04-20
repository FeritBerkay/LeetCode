#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
string findMinSizeString(const vector<string>& strings) {
    if (strings.empty()) {
        return ""; 
    }

    int minSize = strings[0].size();
    string minString = strings[0];

    for (const string& str : strings) {
        if (str.size() < minSize) {
            minSize = str.size();
            minString = str;
        }
    }

    return minString;
}
    string longestCommonPrefix(vector<string>& strs) {
        //3 ms solution
        string patates;
        string minString = findMinSizeString(strs);
        for(int j = 0; j < minString.size(); j++){
            for(int i = 0; i < strs.size(); i++){
            if(minString[j] != strs[i].at(j)){
                return patates;
            }
       }
        patates.push_back(minString[j]);
        }
        return patates;
    }
};