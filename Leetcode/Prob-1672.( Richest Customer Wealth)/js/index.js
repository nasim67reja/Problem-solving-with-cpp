"use strict";

//  recursion
const Sum = (arr, s, e) => {
  if (s > e) return 0;
  if (s === e) return arr[e];
  return arr[s] + Sum(arr, s + 1, e);
};

// two pointer
const sum = (arr) => {
  if (arr.length === 0) {
    return 0; // Handle empty array
  }
  let s = 0,
    e = arr.length - 1;
  let count = 0;
  while (s <= e) {
    if (s === e) count += arr[s];
    else count += arr[s] + arr[e];
    s++, e--;
  }
  return count;
};

var maximumWealth = function (accounts) {
  let large = 0;
  for (let i = 0; i < accounts.length; i++) {
    // const res = Sum(accounts[i], 0, accounts[i].length - 1);
    const res = sum(accounts[i]);
    if (res > large) large = res;
  }
  return large;
};

console.log(
  maximumWealth([
    [2, 8, 7],
    [7, 1, 3],
    [1, 9, 5],
  ])
);
