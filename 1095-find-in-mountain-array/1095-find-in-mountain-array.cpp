/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n=mountainArr.length();
        int l=0,r=n-1,p=0,m;
        while(l<r){
            m=l+(r-l)/2;
            if(mountainArr.get(m)<mountainArr.get(m+1)) p=l=m+1;
            else r=m;
        }
        l=0;r=p;
        while(l<=r){
            m=l+(r-l)/2;
            if(mountainArr.get(m)<target) l=m+1;
            else if(mountainArr.get(m)>target) r=m-1;
            else return m;
        }
        l=p;r=n-1;
        while(l<=r){
            m=l+(r-l)/2;
            if(mountainArr.get(m)>target) l=m+1;
            else if(mountainArr.get(m)<target) r=m-1;
            else return m;
        }
        return -1;
    }
};