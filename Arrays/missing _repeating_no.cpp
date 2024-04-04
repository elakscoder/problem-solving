/*Brute Force approach
#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a) {
    int n = a.size(); // size of the array
    int repeating = -1, missing = -1;

    //Find the repeating and missing number:
    for (int i = 1; i <= n; i++) {
        //Count the occurrences:
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == i) cnt++;
        }

        if (cnt == 2) repeating = i;
        else if (cnt == 0) missing = i;

        if (repeating != -1 && missing != -1)
            break;
    }
    return {repeating, missing};
}

int main()
{
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}



*/
/*Better approach


vector<int> findMissingRepeatingNumbers(vector < int > a) 
{
    int n=a.size();
    int mp[n+1] = {0};
     int missing = -1;
    int repeat=-1;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(mp[i]==2)
        repeat=i;
        if(mp[i]==0)
        missing=i;
        if(missing!=-1&&repeat!=-1)
        break;

    }
    ans.push_back(repeat);
    ans.push_back(missing);
    return ans;


    // Write your code here
}
*/

/*
Optimized-maths

vector<int> findMissingRepeatingNumbers(vector < int > a) 
{
    vector<int>ans;
    long long n=a.size();
    long long x=0;//repeating
    long long y=0;//missing
    //y-x=sumN-sum
    long long sumN=(n*(n+1))/2;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    //y2-x2=sumN2-sum2;
    long long sumN2=(n*(n+1)*(2*n+1))/6;
    long long sum2=0;
    for(int i=0;i<n;i++)
    {
        sum2+=a[i]*a[i];
    }
    long long div=(sumN2-sum2)/(sumN-sum);
    long long ad=div+(sumN-sum);
    y=ad/2;
    x=y-(sumN-sum);
    
    ans.push_back(x);
    ans.push_back(y);
    return ans;
    // Write your code here
}






*/