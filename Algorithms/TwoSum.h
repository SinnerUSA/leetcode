/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target
You may assume that each input would have exactly one solution, and you may not use the same element twice

Example:
Given nums = [2,7,11,15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0,1]
*/

#ifndef LEETCODE_TWOSUM_H
#define LEETCODE_TWOSUM_H

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

namespace TwoSum {
	static vector<int> twoSum(vector<int> &nums, int target)
	{

		vector<int> result;

		map<int, int> hmap;

		hmap.clear();

		for (int i = 0; i < nums.size(); i++)
		{
			hmap[nums[i]] = i;
		}

		sort(nums.begin(), nums.end());

		int n = nums.size();

		int low = 0;
		int high = n - 1;
		while (low < high)
		{
			int b = nums[low];
			int c = nums[high];
			if (b + c == target)
			{
				
				result.push_back(hmap[b]);
				result.push_back(hmap[c]);
				return result;
			}
			else if (b + c > target)
			{
				while (high > 0 && nums[high] == nums[high - 1]) high--;
				high--;
			}
			else
			{
				while (low < n - 1 && nums[low] == nums[low + 1]) low++;
				low++;
			}
		}
		return result;
	}

	static void printMatrix(vector<int> &matrix)
	{
		cout << "{";
		for (int i = 0; i < matrix.size(); i++)
		{
			cout << matrix[i] << ",";
		}
		cout << "}" << endl;
		return;
	}
};

#endif

