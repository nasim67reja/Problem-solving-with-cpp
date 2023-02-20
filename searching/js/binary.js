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
console.log(searchRange([5, 7, 7, 8, 8, 10], 6));
