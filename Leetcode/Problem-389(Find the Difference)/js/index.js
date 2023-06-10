"use strict";

var findTheDifference = function (s, t) {
  let charFreq = {};
  for (let i = 0; i < s.length; i++) {
    charFreq[s[i]] = charFreq[s[i]] ? charFreq[s[i]] + 1 : 1;
  }
  for (let j = 0; j < t.length; j++) {
    if (!charFreq[t[j]]) return t[j];
    charFreq[t[j]]--;
  }
};

console.log(findTheDifference("", "y"));
