// #include <bits/stdc++.h>
// #include <iostream>

// using namespace std;

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

// /// 👉👉👉👉👉 Problem 1: Cheking the array is sorted or not

// for...loop approach

// bool isSorted(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > arr[i + 1])
//             return false;
//     }
//     return true;
// }
// // Through Recursion
// bool isSortedR(int arr[], int size)
// {
//     // base case
//     if (size == 0 || size == 1)
//         return true;
//     if (arr[0] > arr[1])
//         return false;
//     else
//     {
//         // Recursive relation
//         bool ans = isSorted(arr + 1, size - 1);
//         return ans;
//     }
// }

// // /// 👉👉👉👉👉 Problem 2: Sum of an Array

// // for...loop approach
// int sum(int arr[], int size)
// {
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//         sum += arr[i];
//     return sum;
// }

// // Through Recurison
// int sumR(int arr[], int size)
// {

//     // Base case
//     if (size == 0)
//         return 0;

//     // Processing
//     if (size == 1)
//         return arr[0];

//     return arr[0] + sumR(arr + 1, size - 1);
// }

// // /// 👉👉👉👉👉 Problem 3: Find an element from an array
// // for...loop (linear Search)

// bool findEl(int arr[], int size, int el)
// {
//     for (int i = 0; i < size; i++)
//         if (el == arr[i])
//             return true;
//     return false;
// }

// // Recursion
// bool findElR(int arr[], int size, int el)
// {
//     // base case
//     if (size == 0)
//         return false;
//     if (arr[0] == el)
//         return true;
//     // Recursive Relation
//     return findElR(arr + 1, size - 1, el);
// }
// int main()
// {
//     int arr[5] = {1, 12};
//     // cout << isSortedR(arr, 5) << endl;
//     // cout << "Sum : " << sum(arr, 5) << endl;
//     // cout << sumR(arr, 5) << endl;
//     // cout << sumR(arr, 5) << endl;
//     cout << findElR(arr, 5, 12) << endl;
//     return -1;
// }