"use strict";

var nextGreaterElement = function (nums1, nums2) {
  let ansArr = [];
  for (let i = 0; i < nums1.length; i++) {
    let checker = true;
    const res = nums2.indexOf(nums1[i]) + 1;
    for (let j = res; j < nums2.length; j++) {
      if (nums1[i] < nums2[j]) {
        ansArr.push(nums2[j]);
        checker = false;
        break;
      }
    }
    if (checker) ansArr.push(-1);
  }
  return ansArr;
};

console.log(nextGreaterElement([4, 1, 2], [1, 3, 4, 2]));
