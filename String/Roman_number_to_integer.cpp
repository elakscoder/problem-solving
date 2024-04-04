#include<bits/stdc++.h>
using namespace std;
int roman_to_integer(char c)
{
    switch(c)
    {
        case 'I':
        return 1;
        break;
        case 'V':
        return 5;
        break;
        case 'X':
        return 10;
        break;
        case 'L':
        return 50;
        break;
        case 'C':
        return 100;
        break;
        case 'D':
        return 500;
        break;
        case 'M':
        return 1000;
        break;
        
    }
    return 0;

}
    int romanToInt(string s) 
    {
        int i, int_num = roman_to_integer(s[0]);

    for (i = 1; i<s.size(); i++) 
    {
        int prev_num = roman_to_integer(s[i - 1]);
        int cur_num = roman_to_integer(s[i]);
        if (prev_num < cur_num) {
            int_num = int_num - prev_num + (cur_num - prev_num);
        } else {
            int_num += cur_num;
        }
    }
    return int_num;
    }
int main()
{
    string a;
    cin>>a;
    cout<<romanToInt(a);
    return 0;
}