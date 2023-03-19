"use strict";

// const buildArray = (nums) => {
//   const res = [];
//   for (let i = 0; i < nums.length; i++) res.push(nums[nums[i]]);
//   return res;
// };

// const reverseArray = (nums) => {
//   let s = 0,
//     e = nums.length - 1;
//   while (e >= s) {
//     [nums[s], nums[e]] = [nums[e], nums[s]];
//     s++;
//     e--;
//   }
//   return nums;
// };

// console.log(buildArray([0, 2, 1, 5, 3, 4]));

// console.log(reverseArray([0, 2, 1, 5, 3, 4]));

// 989. Add to Array-Form of Integer

var addToArrayForm = function (num, k) {
  let n = +num.join("");
  n += k;
  return n.toString().split("");
};
// console.log(addToArrayForm([2, 7, 4], 181));

// 2011. Final Value of Variable After Performing Operations

var finalValueAfterOperations = function (operations) {
  let x = 0;
  for (const val of operations) {
    if (val === "++X" || val === "X++") x++;
    else x--;
  }
  return x;
};
// console.log(finalValueAfterOperations(["--X", "X++", "X++"]));

var reverseWords = function (s) {
  // const words = s.split(" ").map((el) => el.split("").reverse().join(""));
  // // console.log(words.join(" "));
  // return words.join(" ");
  return s
    .split(" ")
    .map((el) => el.split("").reverse().join(""))
    .join(" ");
};
console.log(reverseWords("God Ding"));
