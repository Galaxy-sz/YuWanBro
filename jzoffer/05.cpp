#include <string.h>
#include <iostream>
using namespace std;

class Solution {
public:
    string replaceSpace(string s) {
        int cnt = 0;
        for(int i = 0; i<s.size();i++){
            if (s[i] == ' ') cnt++;
        }
        int i = s.size() -1;
        s.resize(s.size()+2*cnt);
        int j = s.size() -1;
        while(i!=j){
            if (s[i] == ' '){
                s[j] = '0';
                s[j-1] = '2';
                s[j-2] = '%';
                j -= 3;
                i -= 1;
            }else{
                s[j] = s[i];
                j--;
                i--;
            }
        }
        return s;
    }
};