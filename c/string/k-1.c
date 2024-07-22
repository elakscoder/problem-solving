int countOfSubstrings(string S, int K) 
    {
        int l = 0;
        int r = 0;
        int arr[26] = {0};
        int cnt = 0;
        int ans = 0;
        
        while(r<S.size())
        {
            if(arr[S[r]-'a'] == 0)
            {
                cnt++;
            }
             arr[S[r]-'a']++;
             
             while(cnt>K-1)
             {
                 arr[S[l]-'a']--;
                 if(arr[S[l]-'a'] == 0)
                 {
                     cnt--;
                 }
                 l++;
             }
             
             if(K == (r-l+1))
             {
                 ans++;
             }
             while((r-l+1)>K)
             {
                 arr[S[l]-'a']--;
                 if(arr[S[l]-'a'] == 0)
                 {
                     cnt--;
                 }
                 l++;
             }
             if(K == (r-l+1))
             {
                 ans++;
             }
             
             r++;
        }
        
        return ans;
        
      
    }