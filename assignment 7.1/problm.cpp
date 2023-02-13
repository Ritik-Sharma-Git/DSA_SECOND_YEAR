class Solution {
private:
   bool binearysearch(vector<int>& nums, int target){
       int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(high - low)/2+low;
            if(nums[mid]==target)
                return true;
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
   }
public:
    vector<int> searchRange(vector<int>& num, int target) {

        int low=0,high=num.size()-1; 
        vector<int>a={-1,-1};
        if(binearysearch(num,target)==false){
            return a;
        }
        else{
        while(low<=high){
            long long mid = low + (high-low)/2;
            if(num[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        a[0]=low;
    int l=0,h=num.size()-1;
        while(l<=h){
            long long mid = l + (h-l)/2;
            if(num[mid]>target){
                h=mid-1;
            }
            else{
               l=mid+1; 
            }
        }
        a[1]=h;
        return a;
        }
           
    }
};
