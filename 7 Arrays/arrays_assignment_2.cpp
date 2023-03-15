#include <bits/stdc++.h>
using namespace std;

// Merges two sorted vectors and returns the result as a sorted vector.
/*void merge_sorted_vector(vector<int> v1, vector<int> v2)
{
    vector<int> merge_v(v1.size() + v2.size());

    int i = 0, j = 0;
    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] < v2[j])
        {
            merge_v.push_back(v1[i++]);
        }
        else
        {
            merge_v.push_back(v2[j++]);
        }
    }

    while (i < v1.size())
    {
        merge_v.push_back(v1[i++]);
    }
    while (j < v2.size())
    {
        merge_v.push_back(v2[j++]);
    }

    for (int i = 0; i < merge_v.size(); i++)
    {
        cout << merge_v[i] << " ";
    }
}*/
// 😵‍💫😵‍🙄🙄🙄

// Pair Sum is exactly equal to element x
// 1ST METHOD
/*int check_sum_pair(vector<int> v1, int x)
{
    int count_sum_pair = 0;

    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = i + 1; j < v1.size(); j++)
        {
            if (v1[i] + v1[j] == x)
            {
                count_sum_pair++;
            }
        }
    }

    return count_sum_pair;
}*/
// 2ND METHOD (TWO POINTER APPROACH)
/*int check_sum_pair(vector<int> v1, int x)
{
    int start = 0, end = v1.size() - 1, count_sum_pair = 0;
    while (start <= end)
    {
        if (v1[start] + v1[end] == x)
        {
            count_sum_pair++;
        }
        else if (v1[start] + v1[end] < x)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return count_sum_pair;
}*/
// 😵‍💫😵‍💫🙄🙄🙄

// Pair absolute difference is equal to the element x
// 1ST METHOD
/*int check_difference_pair(vector<int> v1, int x)
{
    int count_diff_pair = 0;

    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = i + 1; j < v1.size(); j++)
        {
            if (-(v1[i] - v1[j]) == x)
            {
                count_diff_pair++;
            }
        }
    }

    return count_diff_pair;
}*/
// 2ND METHOD (TWO POINTER APPROACH)
/*int check_difference_pair(vector<int> v1, int x)
{
    int start = 0, end = v1.size() - 1, count_diff_pair = 0;
    while (start <= end)
    {
        if (-(v1[start] - v1[end]) == x)
        {
            count_diff_pair++;
        }
        else if (-(v1[start] - v1[end]) < x)
        {
            start++;
        }
        else if (-(v1[start] - v1[end]) > x)
        {
            end--;
        }
    }
    return count_diff_pair;
}*/

int main()
{
    // 1 🙂🙂🙂
    // vector<int> v1 = {1, 2, 6};
    // vector<int> v2 = {3, 5, 7, 9};
    // merge_sorted_vector(v1, v2);

    // 2 🙂🙂🙂
    /*int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    vector<int> v1(n);

    cout << "Enter the elements in the array in sorted order" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    int x;
    cout << "Enter the value of x" << endl;
    cin >> x;

    cout << "The Number of Pair that is exactly equal to the element x is: " << check_sum_pair(v1, x);*/

    // 3 🙂🙂🙂
    /*int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    vector<int> v1(n);

    cout << "Enter the elements in the array in sorted order" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    int x;
    cout << "Enter the value of x" << endl;
    cin >> x;

    cout << "The number of pair whose absolute difference is exactly equal to the element x is: " << check_difference_pair(v1, x);*/

    // 4 🙂🙂🙂
    
}