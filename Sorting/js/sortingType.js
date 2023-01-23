"use strict";

// reverse array
const reverseArr = (arr, position) => {
  let s = position || 0,
    e = arr.length - 1;
  while (s <= e) {
    [arr[s], arr[e]] = [arr[e], arr[s]];
    s++;
    e--;
  }
  return arr;
};

const arr = [2, 3, 4, 1];
// console.log(arr);
const ansArr = reverseArr(arr, 0);
// console.log(ansArr);

//  leetcode 217. Contains Duplicate

var containsDuplicate = function (nums) {
  for (let i = 0; i < nums.length - 1; i++) {
    for (let j = i + 1; j < nums.length; j++) {
      if (nums[i] === nums[j]) {
        return true;
      }
    }
  }
  return false;
};

const nums = [1, 2, 3, 1];
console.log(containsDuplicate(nums));
