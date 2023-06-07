"use strict";
var findDuplicate = function (nums) {
  nums.sort((a, b) => a - b);
  for (let i = 0; i < nums.length; i++) {
    let s = i + 1,
      e = nums.length - 1,
      mid = Math.floor((s + e) / 2);
    while (s <= e) {
      if (nums[i] === nums[mid]) return nums[mid];
      else if (nums[i] > nums[mid]) s = mid + 1;
      else e = mid - 1;
      mid = Math.floor((s + e) / 2);
    }
  }
};
console.log(findDuplicate([1, 3, 4, 2, 1]));
