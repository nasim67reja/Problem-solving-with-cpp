"use strict";

const Palindrome = (x) => {
  if (x < 0) return false;
  let t = x;
  let r = 0;
  while (x) {
    r = r * 10 + (x % 10);
    x = Math.trunc(x / 10);
  }
  // if (r > INT_MAX || r < INT_MIN)
  //     return 0;
  return r == t;
};

console.log(Palindrome(-121));
