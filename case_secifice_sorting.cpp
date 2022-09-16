string caseSort(string str, int n)
    {
        vector<char>low,up;
        for(int i =0;i<n;i++){
            if(islower(str[i]))
                low.push_back(str[i]);
                
            else
                up.push_back(str[i]);
        }
        sort(low.begin(),low.end());
        sort(up.begin(),up.end());
        int i =0,j =0, k =0;
        string ans = "";
        for(i =0;i<n;i++){
            if(islower(str[i])){
                ans +=low[j];
                j++;
            }
            else{
                ans+=up[k];
                k++;
            }
        }
        return ans;
    }