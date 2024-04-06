//-------------------Approach 1.---------- This is not Optimised Soln-------------//
// class Solution {
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
//         sort(nums1.begin(), nums1.end());
//         sort(nums2.begin(), nums2.end());
//         vector<int> ans;

//         for(int i=0; i<nums1.size(); i++)
//         {
//             int elmn = nums1[i];
//             for(int j=0; j<nums2.size(); j++)
//             {
//                 if(elmn == nums2[j])
//                 {
//                     ans.push_back(elmn);
//                     nums2[j] = INT_MIN;
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };

/*
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
*/

//-------------------Approach 2.-----------------------// nlog(n);

//         sort(nums1.begin(), nums1.end());
//         sort(nums2.begin(), nums2.end());

//         int i=0; int j=0;
//         vector<int> v;
//         while(i<nums1.size() && j<nums2.size())
//         {
//             if(nums1[i] == nums2[j])
//             {
//                 v.push_back(nums1[i]);
//                 i++;
//                 j++;
//             }
//             else
//             {
//                 if(nums1[i] < nums2[j])
//                 {
//                     i++;
//                 }
//                 else
//                 {
//                     j++;
//                 }
//             } 
//         }