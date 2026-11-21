class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=0;
        int balance=0;

        for(int x:nums){
            if(balance==0){
                candidate=x;
            }
            if(x==candidate){
                balance++;
            }else{
                balance--;
            }
        }
        return candidate;
    }
};