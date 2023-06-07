"use strict";

var generate = function (numRows) {
  let vp = new Array(numRows);
  for (let i = 0; i < numRows; i++) {
    vp[i] = [];
  }

  for (let i = 0; i < numRows; i++) {
    vp[i][0] = 1;
    vp[i][i] = 1;
    for (let j = 1; j < i; j++) {
      vp[i][j] = vp[i - 1][j - 1] + vp[i - 1][j];
    }
  }
  return vp;
};

console.log(generate(5));
