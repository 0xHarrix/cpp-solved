#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str = "mississippi";
    int len = str.length();
    string sub = "";
    string rev = "";
    string final = "";
    
    for(int i = 0; i < len; i++) {
        sub = "";
        for(int j = i; j < len; j++) {
            sub.push_back(str[j]);
            rev = string(sub.rbegin(), sub.rend());
            if(rev == sub && sub.length() > final.length()) {
                final = sub;
            }
        }
    }
    cout << "Longest palindromic substring: " << final << endl;
    return 0;
}
