"use strict";
// quick sort
const Partition = (arr, s, e) => {
  const pivot = arr[e];
  let i = s - 1;
  for (let j = s; j < e; j++) {
    if (arr[j] < pivot) {
      i++;
      [arr[i], arr[j]] = [arr[j], arr[i]];
    }
  }
  [arr[i + 1], arr[e]] = [arr[e], arr[i + 1]];
  return i + 1;
};

const quickSort = (arr, s, e) => {
  if (s < e) {
    const pi = Partition(arr, s, e);

    quickSort(arr, s, pi - 1);
    quickSort(arr, pi + 1, e);
  }
};
const sortArr = (arr) => {
  quickSort(arr, 0, arr.length - 1);
  return arr;
};

var findKthLargest = function (nums, k) {
  quickSort(nums, 0, nums.length - 1);
  return nums[nums.length - k];
};

console.log(
  findKthLargest(
    [
      3, 2, 3, 1, 2, 4, 5, 5, 6, 7, 7, 8, 2, 3, 1, 1, 1, 10, 11, 5, 6, 2, 4, 7,
      8, 5, 6,
    ],
    2
  )
);
