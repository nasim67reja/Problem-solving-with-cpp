"use strict";

var maximumCount = function (nums) {
  let neg = 0,
    pos = 0;
  for (const el of nums) {
    if (el > 0) pos++;
    else if (el < 0) neg++;
  }
  return pos > neg ? pos : neg;
};

// console.log(maximumCount([-2, -1, -1, 1, 2, 3]));

// //////// 🔥🔥🔥🔥🔥🔥🔥🔥🔥 Medium
// 852. Peak Index in a Mountain Array

var peakIndexInMountainArray = function (arr) {
  let s = 0,
    e = arr.length - 1,
    mid = Math.floor(s + (e - s) / 2);
  while (e > s) {
    if (arr[mid] < arr[mid + 1]) s = mid + 1;
    else e = mid;
    mid = Math.floor(s + (e - s) / 2);
  }

  return s;
};
// console.log(peakIndexInMountainArray([3, 4, 5, 1]));

// 2389. Longest Subsequence With Limited Sum

//  👉👉👉👉👉👉👉  Medium
// 34. Find First and Last Position of Element in Sorted Array

// var searchRange = function (nums, target) {
//   let arr = [];
//   arr.push(nums.findIndex((el) => el === target));

//   return [nums.indexOf(target), nums.lastIndexOf(target)];
// };

const searchRange = (nums, target) => [
  nums.indexOf(target),
  nums.lastIndexOf(target),
];
// console.log(searchRange([5, 7, 7, 8, 8, 10], 6));

var missingNumber = function (nums) {
  // Binary search
  // nums.sort((a, b) => a - b);
  // let s = 0,
  //   e = nums.length - 1,
  //   mid = Math.floor(s + (e - s) / 2);

  // while (s <= e) {
  //   if (nums[mid] <= mid) s = mid + 1;
  //   else e = mid - 1;
  //   mid = Math.floor(s + (e - s) / 2);
  // }
  // return s;

  // broute force solution
  let n = nums.length;
  return (n * n + n) / 2 - nums.reduce((acc, val) => acc + val, 0);
};
// console.log(missingNumber([0, 1]));

// 704. Binary Search

var search = function (nums, target) {
  let s = 0,
    e = nums.length - 1,
    mid = Math.floor(s + (e - s) / 2);
  while (s <= e) {
    if (nums[mid] == target) return mid;
    else if (target > nums[mid]) s = mid + 1;
    else e = mid - 1;
    mid = Math.floor(s + (e - s) / 2);
  }
  return -1;
};
// console.log(search([-1, 0, 3, 5, 9, 12], 9));

// 2540. Minimum Common Value

var getCommon = function (nums1, nums2) {
  nums1.sort((a, b) => a - b);
  for (const val of nums1) {
    let s = 0,
      e = nums2.length - 1,
      mid = Math.floor(s + (e - s) / 2);
    while (s <= e) {
      if (nums2[mid] == val) return nums2[mid];
      else if (val > nums2[mid]) s = mid + 1;
      else e = mid - 1;
      mid = Math.floor(s + (e - s) / 2);
    }
  }
  return -1;
};

// 441. Arranging Coins

var arrangeCoins = function (n) {
  let s = 0,
    e = n,
    mid = Math.floor(s + (e - s) / 2),
    ans = 1;

  while (s <= e) {
    let p = (mid * mid + mid) / 2;
    if (p >= n) {
      ans = mid;
      if (p > n) ans--;
      e = mid - 1;
    } else s = mid + 1;
    mid = Math.floor(s + (e - s) / 2);
  }
  return ans;
};
// console.log(arrangeCoins(1804289383));

// 744. Find Smallest Letter Greater Than Target

var nextGreatestLetter = function (letters, target) {
  let s = 0,
    e = letters.length - 1,
    mid = Math.floor(s + (e - s) / 2);
  let ans = letters[0];
  while (s <= e) {
    let t = target.charCodeAt(0);
    let mn = letters[mid].charCodeAt(0);

    if (t < mn) {
      ans = letters[mid];
      e = mid - 1;
    } else s = mid + 1;

    mid = Math.floor(s + (e - s) / 2);
  }
  return ans;
};

console.log(nextGreatestLetter(["c", "f", "j"], "a"));
