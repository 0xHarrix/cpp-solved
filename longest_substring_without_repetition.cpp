#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "abcabcbb";
    string sub = ""; 
    int sublen = 0;
    string final = "";
    int completed = 0;

    while(completed < str.length())
    {
        sub = "";
        for(int i = completed; i < str.length(); i++)
        {
            bool foundDuplicate = false;
            for(int j = 0; j < sub.length(); j++)
            {
                if(sub[j] == str[i])
                {
                    foundDuplicate = true;
                    break;
                }
            }

            if(foundDuplicate)
            {
                break;
            }
            else
            {
                sub.push_back(str[i]);
            }
        }

        if(sub.length() > final.length())
        {
            final = sub;
        }
        
        completed++;
    }

    cout << "The length of the longest substring without repeating characters is: " << final.length() << endl;
    cout << "The longest substring without repeating characters is: " << final << endl;

    return 0;
}
