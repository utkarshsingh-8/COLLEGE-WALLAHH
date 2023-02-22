#include <iostream>
using namespace std;

// PRINT THE COUNT OF ODD AND EVEN INTEGERS PRESENT IN AN ARRAY
// 😵‍💫🙄😵‍💫🙄
/*void count_odd_even(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    cout << "The count of even elements present in the array is: " << count;
    cout << endl;
    cout << "The count of odd elements present in the array is: " << size - count;
}*/
//

// FIND THE SUM OF THE GREATEST AND THE SMALLEST ELEMENT IN THE ARRAY
// 😵‍💫🙄😵‍💫🙄
/*int sum_of_G_and_S(int arr[], int size)
{
    int max = INT32_MIN;
    int min = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min + max;
}*/
//

// REVERSE AN ARRAY
// 😵‍💫🙄😵‍💫🙄
/*void reverse_array(int arr[], int size)
{
    int start = 0, end = size - 1;

    while (start <= end)
    {
        // swap(arr[start], arr[end]);
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}*/
//

// FIND THE MINIMUM SUM OF TWO ELEMENTS SUCH THAT THEY BELONG TO THE DIFFERENT ARRAY AND THEY ARE NOT PRESENT AT THE SAME INDEX
// 😵‍💫🙄😵‍💫🙄
/*int min_sum(int arr1[], int arr2[], int size1, int size2)
{
    int i, j, index1 = 0, index2 = 0;
    int min1 = INT32_MAX, min2 = INT32_MAX, min1A = INT32_MAX, min2B = INT32_MAX;

    for (i = 0; i < size1; i++)
    {
        if (arr1[i] < min1)
        {
            min1A=min1;
            min1 = arr1[i];
            index1 = i;
        }
        else if (arr1[i] < min2 && arr1[i] != min1)
        {
            min2 = arr1[i];
        }
    }

    for (j = 0; j < size2; j++)
    {
        if (arr2[j] < min2)
        {
            min2B=min2;
            min2 = arr2[j];
            index2 = j;
        }
        else if (arr2[i] < min2 && arr2[i] != min1)
        {
            min2 = arr2[i];
        }
    }

    if (index1 != index2)
    {
        return min1 + min2;
    }
    else
    {
        return (min1 + min2B, min1A + min2);
    }
}*/
//

// FIND AND RETURN THE ONLY NUMBER OF THE RANGE THAT IS NOT PRESENT IN THE ARRAY
// 😵‍💫🙄😵‍💫🙄
/*void range(int arr[], int size)
{
    int i, j, range = INT32_MIN;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > range)
        {
            range = arr[i];
        }
    }
    cout << "Range of the Given array is [0," << range << "]";
    cout << endl;
    cout << "THe only number that is not present in the range are: ";

    for (i = 0; i <= range; i++)
    {
        bool present = false;
        for (j = 0; j < size; j++)
        {
            if (i != arr[j])
            {
                present = true;
            }
        }
        if (present == true)
        {
            cout << i << " ";
        }
    }
}*/
/*int not_prsent(int arr[], int size)
{
    int i, array_sum = 0;
    for (i = 0; i < size; i++)
    {
        array_sum += arr[i];
    }

    int range_sum = (size) * (size + 1) / 2;

    return range_sum - array_sum;
}*/
//

//FIND THE ELEMENT IN THE ARRAY FOR WHICH ALL THE ELEMENTS TO ITS LEFT ARE SMALLER THAN IT AND ALL THE ELEMENTS TO THE RIGHT OF IT ARE LARGER THAN IT
// 😵‍💫🙄😵‍💫🙄

// PRINT THE ARRAY
// void print_array(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

int main()
{
    // int arr[] = {1, 5, 88, 23, 74, 81, 99, 12, 35};
    // int size = sizeof(arr) / sizeof(int);
    // cout << endl;

    // 1 😵‍💫🙄😵‍💫🙄
    // count_odd_even(arr, size);

    // 2 😵‍💫🙄😵‍💫🙄
    // cout << "The sum of the greatest an smallest element present in the array is : " << sum_of_G_and_S(arr, size);

    // 3 😵‍💫🙄😵‍💫🙄
    // cout << "The Reverse Array of the given array is below:" << endl;
    // reverse_array(arr, size);
    // print_array(arr, size);

    // 4 😵‍💫🙄😵‍💫🙄
    // int arr1[] = {5, 1, 88, 0, 74};
    // int arr2[] = {81, 99, 12, 2, 3};
    // int size1 = sizeof(arr1) / sizeof(int);
    // int size2 = sizeof(arr2) / sizeof(int);
    // cout << endl;
    // cout << "Sum of minimum of elements present in different array is : " << min_sum(arr1, arr2, size1, size2);

    // 5 😵‍💫🙄😵‍💫🙄
    // int arr1[] = {0, 1, 4, 5, 6, 2, 7};
    // int size1 = sizeof(arr1) / sizeof(arr1[0]);
    // cout << endl;
    // cout << "The number that is not present in the range is: " << not_prsent(arr1, size1);

    // 6 😵‍💫🙄😵‍💫🙄
    int arr[] = {0, 1, 4, 5, 6, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << endl;
    element(arr, size);

    return 0;
}