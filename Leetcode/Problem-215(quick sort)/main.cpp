#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);

        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int findKthLargest(vector<int> &nums, int k)
{
    quickSort(nums, 0, nums.size() - 1);
    return nums[nums.size() - k];
}

int main()
{
    vector<int> v = {3, 2, 1, 5, 6, 4};
    cout << findKthLargest(v, 2);
    return 0;
}