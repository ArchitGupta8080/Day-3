/*Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it.
That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

Return the answer in an array.*/

class Solution {
public:
    int binary(vector<int> v,int n, int key )
    {
        int mid=0, pos=-1;
        int low=0, high=n-1;
        while(low<=high)
        {
            mid=low+((high-low)/2);
            if(v[mid]==key)
            {
                pos=mid;
                break;
            }
            else if(v[mid]>key)
                high=mid-1;
            else
                low=mid+1;
        }
        while(pos>0)
        {
            if(v[pos-1]==v[pos])
                pos--;
            else
                break;
        }
        return pos;
    }
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v(nums);
        vector<int> res;
        sort(v.begin(),v.end());
        for(int x :nums){
            res.push_back(binary(v, v.size(), x));            
        }
        return res;
        
    }
};