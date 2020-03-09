


/*************** Problem **************************
Given a set of distinct integers, nums, return all possible subsets (the power set).

Note: The solution set must not contain duplicate subsets.

Example:

Input: nums = [1,2,3]
Output:
[
  [3],
  [1],
  [2],
  [1,2,3],
  [1,3],
  [2,3],
  [1,2],
  []
]
mask        binary          subset 
0           000             0
1           001             1
2           010             2
3           011             1,2
4           100             3
5           101             1,3
6           110             2,3
7           111             1,2,3  
*/



//---------------------------------------------------------------------------------
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int number_of_subsets = nums.size(); 
        vector<vector<int>>subset((1<<number_of_subsets)); // left shift gives number of total subsets to generate 
        /*
        cout << "test " << (44|(1<<4)) << endl; //60
        */
        for(int mask = 0; mask < (1<<number_of_subsets); mask++)
        {
            for(int i = 0; i < number_of_subsets; i++)
            {
                cout << "(mask&(1<<i)) =="<< (mask&(1<<i)) << endl; 
                if(mask&(1<<i)) 
                {
                    subset[mask].push_back(nums[i]);
                }
            }
        }
        
        return subset;  
    }
    
};