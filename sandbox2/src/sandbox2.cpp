//============================================================================
// Name        : sandbox2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int longestIdealString(string s, int k) {
    int tmp = 0;
    int res = 0;
    int cnt = k;
    char alpha[26] = {};

    for(int i=0; i<s.length();i++)
    {
        alpha[s[i]-'a']++;
    }

    for(int i=0; i<26; i++)
    {
        if(alpha[i] >= 1)
        {
            tmp++;
        }
        else
        {
            cnt--;
            if(cnt == 0)
            {
                cnt = k;
                res = res<tmp? tmp: res;
                tmp = 0;
            }
        }
    }

    return res;
}


int main() {

	int res = longestIdealString("acfgbd",2);

	return 0;
}
