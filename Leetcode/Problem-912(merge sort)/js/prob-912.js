const merge = (nums, s, mid, e) => {
  const n1 = mid - s + 1;
  const n2 = e - mid;

  // create temporary array
  let temp1 = [],
    temp2 = [];

  for (let i = 0; i < n1; i++) temp1[i] = nums[s + i];
  for (let j = 0; j < n2; j++) temp2[j] = nums[mid + 1 + j];

  //   now merge this array
  let i = 0,
    j = 0,
    k = s;
  while (i < n1 && j < n2) {
    if (temp1[i] <= temp2[j]) {
      nums[k] = temp1[i];
      i++;
    } else {
      nums[k] = temp2[j];
      j++;
    }
    k++;
  }

  // rest element of temp1 if exist

  while (i < n1) {
    nums[k] = temp1[i];
    i++, k++;
  }

  // rest element of temp1 if exist

  while (j < n2) {
    nums[k] = temp2[j];
    j++, k++;
  }
};

const mergeSort = (nums, s, e) => {
  if (s < e) {
    const mid = Math.floor(s + (e - s) / 2);
    mergeSort(nums, s, mid);
    mergeSort(nums, mid + 1, e);
    merge(nums, s, mid, e);
  }
};

var sortArray = function (nums) {
  mergeSort(nums, 0, nums.length - 1);
  return nums;
};
