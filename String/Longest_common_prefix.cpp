 #include<bits/stdc++.h>
 using namespace std;
 
 string longestCommonPrefix(vector<string>& strs) 
    {
        string s=strs[0];
        string finalans="";
        for(int i=0;i<s.length();i++)
        {
            for(int j=1;j<strs.size();j++)
            {
                string str=strs[j];
                if(s[i]!=str[i])
                {
                    return finalans;

                }
            }
            finalans+=s[i];
        }
        return finalans;


        
    }

    int main()
    {
         /*vector<string> input_strings;
    string input;
    int n;
    cin>>n;
    cout << "Enter strings (type 'done' when finished):" << endl;
    while (n--) {
        cout << "> ";
        cin >> input;
        input_strings.push_back(input);
    }*/

    
        int n;
        cin>>n;
        string a;
        vector<string> strs;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            strs.push_back(a);
            
        }
        cout<<longestCommonPrefix(strs);
        return 0;

    }