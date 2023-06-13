"use strict";

// my own solution
// var addBinary = function (a, b) {
//   let f = a.length - 1,
//     s = b.length - 1;
//   let ans = [];
//   let remainder = 0;
//   while (f >= 0 && s >= 0) {
//     let temp = parseInt(a[f]) + parseInt(b[s]) + remainder;
//     if (temp === 2) {
//       ans.unshift(0);
//       remainder = 1;
//     } else if (temp === 3) {
//       ans.unshift(1);
//       remainder = 1;
//     } else if (temp == 0) {
//       ans.unshift(0);
//       remainder = 0;
//     } else {
//       ans.unshift(1);
//       remainder = 0;
//     }

//     f--, s--;
//   }
//   while (f >= 0) {
//     let temp = parseInt(a[f]) + remainder;

//     if (temp === 2) {
//       ans.unshift(0);
//       remainder = 1;
//     } else if (temp === 3) {
//       ans.unshift(1);
//       remainder = 1;
//     } else if (temp == 0) {
//       ans.unshift(0);
//       remainder = 0;
//     } else {
//       ans.unshift(1);
//       remainder = 0;
//     }
//     f--;
//   }

//   while (s >= 0) {
//     let temp = parseInt(b[s]) + remainder;

//     if (temp === 2) {
//       ans.unshift(0);
//       remainder = 1;
//     } else if (temp === 3) {
//       ans.unshift(1);
//       remainder = 1;
//     } else if (temp == 0) {
//       ans.unshift(0);
//       remainder = 0;
//     } else {
//       ans.unshift(1);
//       remainder = 0;
//     }
//     s--;
//   }

//   if (remainder) ans.unshift(1);

//   return ans.join("");
// };

// chatgpt's solution

function addBinary(a, b) {
  let result = "";
  let carry = 0;
  let i = a.length - 1;
  let j = b.length - 1;

  while (i >= 0 || j >= 0) {
    let x = i >= 0 ? parseInt(a[i]) : 0;
    let y = j >= 0 ? parseInt(b[j]) : 0;

    let sum = x + y + carry;
    console.log(sum % 2);
    result += sum % 2;
    carry = Math.floor(sum / 2);
    console.log(sum, carry);

    i--;
    j--;
  }

  if (carry > 0) {
    result += carry;
  }

  return result.split("").reverse().join("");
}

console.log(addBinary("1111", "1111"));
