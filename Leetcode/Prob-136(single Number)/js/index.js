"use strict";

// 136. Single Number

var singleNumber = function (nums) {
  for (let i = 0; i < nums.length; i++) {
    let s = i + 1,
      e = nums.length - 1,
      mid = Math.floor(s + (e - s) / 2);
    let ans = false;
    while (s < e) {
      if (nums[i] === nums[mid]) ans = true;
      else if (nums[i] > nums[mid]) s = mid + 1;
      else e = mid - 1;
      mid = Math.floor(s + (e - s) / 2);
    }
    if (!ans) return nums[i];
  }
};

console.log(singleNumber[(2, 2, 1)]);
