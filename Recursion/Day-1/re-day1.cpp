#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// /// 👉👉👉👉👉 Problem 1: Cheking the array is sorted or not

// for...loop approach

bool isSorted(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}
// Through Recursion
bool isSortedR(int arr[], int size)
{
    // base case
    if (size == 0 || size == 1)
        return true;
    if (arr[0] > arr[1])
        return false;
    else
    {
        // Recursive relation
        bool ans = isSorted(arr + 1, size - 1);
        return ans;
    }
}

// /// 👉👉👉👉👉 Problem 1: Sum of an Array

// for...loop approach
int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

// Through Recurison
int sumR(int arr[], int size)
{

    // Base case
    if (size == 0)
        return 0;

    // Processing
    if (size == 1)
        return arr[0];
    else
        // Recursive Relation
        return arr[0] + sumR(arr + 1, size - 1);
}

int main()
{
    int arr[5] = {1, 12, 3, 14, 15};
    // cout << isSortedR(arr, 5) << endl;
    // cout << "Sum : " << sum(arr, 5) << endl;
    // cout << sumR(arr, 5) << endl;
    cout << sumR(arr, 5) << endl;
    return -1;
}