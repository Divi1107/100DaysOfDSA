//brute force ig
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        nums1.erase(remove(nums1.begin()+m,nums1.end(),0),nums1.end()); //remove zeros
        //push nums2 into nums1
        int n1 = nums1.size();
        for(int i =0;i<n;i++)
        {
            nums1.push_back(nums2[i]);
        }
        
        sort(nums1.begin(),nums1.end());

    }
};
//optimal
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
       for(int j=0,i = m;j<n;j++)
       {
        nums1[i] = nums2[j];
        i++;
       }
        
        sort(nums1.begin(),nums1.end());

    }
};
