/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> vec;
        int flag = false; 
        int list_of_values = nums.size(); 
     
        for (int i=0; i<(list_of_values-1); i++){
            for (int j=i+1; j<list_of_values; j++){
                if (nums[i]+nums[j] == target)
                {
                    vec.push_back(i);
                    vec.push_back(j);
                    flag = true; 
                    break; 
                }
            }
            if (flag == true)
                break; 
        }
        
       return vec;
    }
};



/*class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> vec;
        unordered_map <int,int> mp; 
        
        /*
            Iterate through the list and store the values in the map
        */
        /*for (int i=0; i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for (auto s:mp){
            cout<< s.first << " "<< s.second<<endl; 
        }
        for (int i = 0; i<nums.size(); i++){
            if(mp.find(target-nums[i]) != mp.end() && mp[target-nums[i]]!=i){
                vec.push_back(i);
                vec.push_back(mp[target-nums[i]]);
                break;
            }
        }
        return vec;
    }
};*/