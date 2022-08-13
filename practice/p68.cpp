vector<vector<int>> v1;
        set<int> s1,s2;
        vector<int> v2;
        vector<int> v3;
        for(int i=0;i<nums1.size();i++)
        {
            if(!isPresent(nums1[i],nums2)) s1.insert(nums1[i]);
        }
        set<int>::iterator itr1;
        for(itr1=s1.begin();itr1!=s1.end();itr1++)
        {
            v2.push_back(*itr1);
        }
        v1.push_back(v2);
        
        for(int i=0;i<nums2.size();i++)
        {
            if(!isPresent(nums2[i],nums1)) s2.insert(nums2[i]);
        }
        set<int>::iterator itr2;
        for(itr2=s2.begin();itr2!=s2.end();itr2++)
        {
            v3.push_back(*itr2);
        }
        v1.push_back(v3);
    
        return v1;





int isPresent(int x,vector<int> v)
    {
       for(int i=0;i<v.size();i++)
       {
           if(v[i]==x) return 1;
       }
       return 0;
    }