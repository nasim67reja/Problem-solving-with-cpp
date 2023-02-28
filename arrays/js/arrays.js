"use strict";

// 344. Reverse String

var reverseString = function (s) {
  let e = s.length - 1;
  let mid = Math.floor(e / 2);
  for (let i = 0; i <= mid; i++) [s[i], s[e - i]] = [s[e - i], s[i]];
  return s;
};

// console.log(reverseString(["H", "a", "n", "n", "a", "h"]));
// 189. Rotate Array

var rotate = function (nums, k) {
  let i = 0;
  while (i < k) {
    let temp = nums.pop();
    nums.unshift(temp);
    i++;
  }
  console.log(nums);
  //   let size = nums.length - 1;
  //   for (let i = 0; i < k; i++) {
  //     let temp = nums[size];

  //     for (let j = size; j > 0; j--) nums[j] = nums[j - 1];

  //     nums[0] = temp;
  //   }
  //   return nums;
};
rotate([1, 2, 3, 4, 5, 6, 7], 3);
// console.log(rotate([1, 2, 3, 4, 5, 6, 7], 3));
