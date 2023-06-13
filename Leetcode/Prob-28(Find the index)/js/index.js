"use strict";

var strStr = function (haystack, needle) {
  const haystackLength = haystack.length;
  const needleLength = needle.length;
  if (needleLength > haystackLength) return -1;

  for (let i = 0; i <= haystackLength - needleLength; i++) {
    let j;
    for (j = 0; j < needleLength; j++) {
      if (needle[j] != haystack[i + j]) break;
    }
    if (j == needleLength) return i;
  }
  return -1;
};

console.log(strStr("sadbutsad", "sad"));
