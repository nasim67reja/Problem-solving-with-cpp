"use strict";

var runningSum = function (nums) {
  let summArr = [];
  for (let i = 0; i < nums.length; i++) {
    let val = 0;
    for (let j = i; j >= 0; j--) {
      val += nums[j];
    }
    summArr.push(val);
  }
  return summArr;
};

console.log(runningSum([1, 2, 3, 4]));
