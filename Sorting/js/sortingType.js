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
// console.log(containsDuplicate(nums));

// 2160. Minimum Sum of Four Digit Number After Splitting Digits

var minimumSum = function (num) {
  let arr = [];

  for (let i = 0; i < 4; i++) {
    arr[i] = num % 10;
    num = Math.floor(num / 10);
  }
  arr.sort((a, b) => a - b);
  let str1 = `${arr[0]}${arr[3]}`;
  let str2 = `${arr[1]}${arr[2]}`;

  return Number(str1) + Number(str2);
};

// console.log(minimumSum(4009));

// 1365. How Many Numbers Are Smaller Than the Current Number

var smallerNumbersThanCurrent = function (nums) {
  let output = [];
  for (let i = 0; i < nums.length; i++) {
    let count = 0;
    for (let j = 0; j < nums.length; j++) {
      if (nums[i] > nums[j]) count++;
    }
    output.push(count);
  }
  return output;
};

smallerNumbersThanCurrent([8, 1, 2, 2, 3]);
smallerNumbersThanCurrent([6, 5, 4, 8]);
