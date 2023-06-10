"use strict";
// explaination lies in page number 1

var reverseStr = function (s, k) {
  let arr = s.split("");
  for (let start = 0; start < arr.length; start += 2 * k) {
    let end = Math.min(start + k - 1, arr.length - 1);
    reverse(arr, start, end);
  }
  return arr.join("");
};

function reverse(arr, start, end) {
  while (start < end) {
    [arr[start], arr[end]] = [arr[end], arr[start]];
    start++;
    end--;
  }
}

console.log(reverseStr("abcdefgh", 3));
