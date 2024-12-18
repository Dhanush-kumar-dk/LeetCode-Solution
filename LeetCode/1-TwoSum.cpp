
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> d;
        for (int i = 0;; ++i) {
            int x = nums[i];
            int y = target - x;
            if (d.contains(y)) {
                return {d[y], i};
            }
            d[x] = i;
        }
    }
};


#C++
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (auto i=0;i<nums.size()-1;i++){
          for( auto j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j] == target){
                return vector<int>{i,j};
            } 
          }  
        }
        return vector<int> {};
    };
};


#JavaScript
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
  const value = {}
  for( i=0; i<nums.length; i++){
    const currentnumber = nums[i]
    const neededvalue = target - currentnumber
    const index2 = value[neededvalue]
    if(index2 !=null){
    return [ index2, i]
    }else{
    value[currentnumber]= i
    }
  }  
};
