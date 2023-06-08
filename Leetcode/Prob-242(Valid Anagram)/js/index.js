"use strict";

function isAnagram(s, t) {
  if (s.length !== t.length) {
    return false;
  }

  const charFreq = {};

  // Count the frequency of characters in string s
  for (let i = 0; i < s.length; i++) {
    const char = s[i];
    charFreq[char] = charFreq[char] ? charFreq[char] + 1 : 1;
  }
  // Decrement the frequency of characters in string t
  for (let i = 0; i < t.length; i++) {
    const char = t[i];

    // If a character in t doesn't exist in charFreq or its frequency is already 0, return false
    if (!charFreq[char]) {
      return false;
    }

    charFreq[char]--;
  }

  return true;
}

// Example usage
const s = "anagram";
const t = "nagaram";
console.log(isAnagram(s, t)); // Output: true

// var isAnagram = function (s, t) {
//   if (s.length !== t.length) return false;
//   let arr1 = s.split("");
//   let arr2 = t.split("");

//   for (let i = 0; i < arr1.length; i++) {
//     let ans = false;
//     for (let j = 0; j < arr2.length; j++) {
//       if (arr1[i] === arr2[j]) {
//         arr2[j] = "";
//         ans = true;
//         break;
//       }
//     }
//     if (!ans) return false;
//   }
//   return true;
// };

// console.log(isAnagram("aacc", "ccac"));
