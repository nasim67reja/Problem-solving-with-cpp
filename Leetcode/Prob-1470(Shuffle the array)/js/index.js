"use strict";

var shuffle = function (nums, n) {
  let newarr = [];
  let s = 0,
    e = n;
  while (s < n && e < nums.length) {
    newarr.push(nums[s]);
    newarr.push(nums[e]);
    s++, e++;
  }
  return newarr;
};

// another approach
function shuffle2(nums, n) {
  const result = [];
  for (let i = 0; i < n; i++) {
    result.push(nums[i]);
    result.push(nums[i + n]);
  }
  return result;
}

console.log(shuffle([2, 5, 1, 3, 4, 7], 3));
console.log(shuffle2([2, 5, 1, 3, 4, 7], 3));
