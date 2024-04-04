/*Brute Force O(n2) O(n)




#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> v) {
    int n = v.size(); //size of the array
    vector<int> ls; // list of answers

    for (int i = 0; i < n; i++) {
        //selected element is v[i]:
        // Checking if v[i] is not already
        // a part of the answer:
        if (ls.size() == 0 || ls[0] != v[i]) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                // counting the frequency of v[i]
                if (v[j] == v[i]) {
                    cnt++;
                }
            }

            // check if frquency is greater than n/3:
            if (cnt > (n / 3))
                ls.push_back(v[i]);
        }

        if (ls.size() == 2) break;
    }

    return ls;
}

int main()
{
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    vector<int> ans = majorityElement(arr);
    cout << "The majority elements are: ";
    for (auto it : ans)
        cout << it << " ";
    cout << "\n";
    return 0;
}




	// Write your code here
}
*/

/*Better solution -Hashing 

*/

/*Moore's Voting Algorithm\\vector<int> majorityElement(vector<int> v) 
{
	vector<int>ans;
	int n=v.size();
	int ele1=0;
	int cnt1=1;
	int ele2=0;
	int cnt2=1;
	if(v.size()==1)
	{
		ans.push_back(v[0]);
		return ans;
	}
	
	for(int i=0;i<n;i++)
	{
		if(cnt1==0&&v[i]!=ele2)
		{
			cnt1=1;
			ele1=v[i];
		}else if(cnt2==0&&v[i]!=ele1)
		{
			cnt2=1;
			ele2=v[i];
		}else if(ele1==v[i])
		{
			cnt1++;

		}else if(ele2==v[i])
		{
			cnt2++;
		}else
		{
			cnt1--;
			cnt2--;
		}

	}
	cnt1=0;
	cnt2=0;
	for(int i=0;i<n;i++)
	{
		if(ele1==v[i])
		cnt1++;
		if(ele2==v[i])
		cnt2++;
		
	}
	if(cnt1>=n/3)
	{
		ans.push_back(ele1);

	}
	if(cnt2>=n/3)
	{
		ans.push_back(ele2);
	}
	return ans;


	// Write your code here
}



*/