/*ProblemStatement:
GivenanarrayArr[]ofNintegernumbers.Thetaskistorewritethearraybyputtingallmultipliersattheendofthegivenarray.
Note:Theorderofthenumberswhicharenotthemultiplierof10shouldremainunaltered,andsimilarlytheorderofthenumberswhicharethemultiplierof10shouldremainunaltered.
Forexample:
SupposeN=9andArr[]={10,12,5,40,30,7,5,9,10}
Youhavetopushallthemultipleof10attheendofthearrayArr[].
Hencetheoutputis:12 5 7 5 9 10 40 30 10
TestCase:
N=9
100 21 5 6 3 7 11 89 10
Output:
21 5 6 3 7 11 89 100 10*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%10!=0)
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%10==0)
        cout<<arr[i]<<" ";
    }
    return 0;
    

}