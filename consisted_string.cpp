/*You are given a string allowed consisting of distinct characters and an array of strings words. 
A string is consistent if all characters in the string appear in the string allowed.

Return the number of consistent strings in the array words.*/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        bool flag = true;
        for (auto x : words){
            flag = true;
            for(auto ch : x)
                if(allowed.find(ch) == -1)
                    flag = false;
            if(flag)
                count++;
        }
        return count;
    }
};