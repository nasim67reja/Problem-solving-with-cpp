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

// 1859. Sorting the Sentence

const sortSentence = (s) => {
  const arrc = s.split(" ").map((element, i) => {
    return {
      [element[element.length - 1]]: element.slice(0, element.length - 1),
    };
  });
  const str = arrc
    .sort((a, b) => {
      return Number(Object.keys(a)[0]) - Number(Object.keys(b)[0]);
    })
    .map((el) => Object.values(el)[0])
    .join(" ");
  return str;
};

// console.log(sortSentence("sentence4 a3 is2 This1"));

// 2500. Delete Greatest Value in Each Row

var deleteGreatestValue = function (grid) {
  let answer = 0;

  for (let val of grid) val.sort((a, b) => a - b);

  for (let i = 0; i < grid[0].length; i++) {
    let max = grid[0][i];
    for (let val of grid) if (val[i] > max) max = val[i];

    answer += max;
  }

  return answer;
};

// console.log(

//   deleteGreatestValue([
//     [1, 2, 4],
//     [3, 3, 1],
//   ])
// );

// 2037. Minimum Number of Moves to Seat Everyone
var minMovesToSeat = function (seats, students) {
  seats.sort((a, b) => a - b);
  students.sort((a, b) => a - b);
  let moves = 0;
  for (let i = 0; i < seats.length; i++) {
    moves = moves + Math.abs(students[i] - seats[i]);
  }

  return moves;
};

// console.log(minMovesToSeat([4, 1, 5, 9], [1, 3, 2, 6]));

// 1913. Maximum Product Difference Between Two Pairs int main()
var maxProductDifference = function (nums) {
  nums.sort((a, b) => a - b);
  return nums[nums.length - 1] * nums[nums.length - 2] - nums[0] * nums[1];
};
// console.log(maxProductDifference([5, 6, 2, 7, 4]));

// 1464. Maximum Product of Two Elements in an Array int main()
var maxProduct = function (nums) {
  nums.sort((a, b) => a - b);
  return (nums[nums.length - 1] - 1) * (nums[nums.length - 2] - 1);
};
// console.log(maxProduct([3, 4, 5, 2]));

// 2089. Find Target Indices After Sorting Array

var targetIndices = function (nums, target) {
  nums.sort((a, b) => a - b);
  let arr = [];
  for (let i = 0; i < nums.length; i++) if (nums[i] == target) arr.push(i);

  return arr;
};
// console.log(targetIndices([1, 2, 5, 2, 3], 2));

// 561. Array Partition

var arrayPairSum = function (nums) {
  let sum = 0;
  nums.sort((a, b) => a - b);
  for (let i = 0; i < nums.length; i++) if (i % 2 == 0) sum += nums[i];

  return sum;
};
// console.log(arrayPairSum([1, 4, 3, 2]));

// 905. Sort Array By Parity

var sortArrayByParity = function (nums) {
  for (let i = 1; i < nums.length; i++) {
    let temp = nums[i];
    let j = i - 1;

    if (temp % 2 != 0) continue;
    else {
      while (j >= 0) {
        if (nums[j] > temp || nums[j] % 2 != 0) nums[j + 1] = nums[j];
        else break;
        j--;
      }
      nums[j + 1] = temp;
    }
  }

  return nums;
};
// console.log(sortArrayByParity([3, 1, 2, 4]));

//  🔥🔥🔥🔥🔥🔥 Medium Problem 🔥🔥🔥🔥🔥🔥🔥

// 2545. Sort the Students by Their Kth Score

var sortTheStudents = function (score, k) {
  for (let i = 1; i < score.length; i++) {
    let vTemp = score[i];
    let j = i - 1;
    while (j >= 0) {
      if (score[j][k] < vTemp[k]) score[j + 1] = score[j];
      else break;
      j--;
    }
    score[j + 1] = vTemp;
  }
  return score;
};
// console.log(
//   sortTheStudents(
//     [
//       [10, 6, 9, 1],
//       [7, 5, 11, 2],
//       [4, 8, 3, 15],
//     ],
//     2
//   )
// );

// 1637. Widest Vertical Area Between Two Points Containing No Points

var maxWidthOfVerticalArea = function (points) {
  let newArr = points.map((el) => el[0]).sort((a, b) => a - b);

  let maxDif = 0;

  for (let i = 0; i < newArr.length - 1; i++)
    if (newArr[i + 1] - newArr[i] > maxDif) maxDif = newArr[i + 1] - newArr[i];
  return maxDif;
};
// console.log(
//   maxWidthOfVerticalArea([
//     [8, 7],
//     [9, 9],
//     [7, 4],
//     [9, 7],
//   ])
// );

// 1877. Minimize Maximum Pair Sum in Array

var minPairSum = function (nums) {
  //  sort(nums.begin(), nums.end());
  nums.sort((a, b) => a - b);
  let minSum = nums[0] + nums[nums.length - 1];

  for (let i = 0; i < nums.length / 2; i++) {
    if (nums[i] + nums[nums.length - i - 1] > minSum)
      minSum = nums[i] + nums[nums.length - i - 1];
  }
  return minSum;
};

// console.log(minPairSum([3, 5, 4, 2, 4, 6]));

// 1. Two Sum
var twoSum = function (nums, target) {
  let arr = [];
  for (let i = 0; i < nums.length; i++) {
    let num = target - nums[i];

    for (let j = i + 1; j < nums.length; j++) {
      if (num == nums[j]) {
        arr.push(i);
        arr.push(j);
      }
    }
  }

  return arr;
};

console.log(twoSum([2, 7, 11, 15], 9));
