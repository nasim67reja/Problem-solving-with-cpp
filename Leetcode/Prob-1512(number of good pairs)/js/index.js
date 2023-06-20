"use strict";

var numIdenticalPairs = function (nums) {
  //   let arrOfarr = [];
  let count = 0;
  for (let i = 0; i < nums.length; i++) {
    for (let j = i + 1; j < nums.length; j++) {
      if (nums[i] === nums[j]) {
        // arrOfarr.push([i, j]);
        count++;
      }
    }
  }
  return count;
};

console.log(numIdenticalPairs([1, 1, 1, 1]));
