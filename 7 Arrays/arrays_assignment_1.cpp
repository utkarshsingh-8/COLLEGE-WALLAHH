#include <iostream>
#include <vector>
using namespace std;

// PRINT THE ARRAY
void print_array(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

// PRINT THE COUNT OF ODD AND EVEN INTEGERS PRESENT IN AN ARRAY
// 😵‍💫🙄😵‍💫🙄
/*void count_odd_even(vector<int> v)
{
    int even_count = 0, odd_count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] & 1 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    cout << "The count of even elements present in the array is: " << even_count;
    cout << endl;
    cout << "The count of odd elements present in the array is: " << odd_count;
}*/
//

// FIND THE SUM OF THE GREATEST AND THE SMALLEST ELEMENT IN THE ARRAY
// 😵‍💫🙄😵‍💫🙄
/*int sum_of_G_and_S(vector <int> &v)
{
    int max = INT32_MIN;
    int min = INT32_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
        if (v[i] < min)
        {
            min = v[i];
        }
    }
    return min + max;
}*/
//

// REVERSE AN ARRAY
// 😵‍💫🙄😵‍💫🙄
/*void reverse_array(vector<int> &v)
{
    int start = 0, end = v.size() - 1;

    while (start <= end)
    {
        //swap(v[start], v[end]);
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
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
/*int not_present_in_range(int arr[], int size)
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

// FIND THE ELEMENT IN THE ARRAY FOR WHICH ALL THE ELEMENTS TO ITS LEFT ARE SMALLER THAN IT AND ALL THE ELEMENTS TO THE RIGHT OF IT ARE LARGER THAN IT
// 😵‍💫🙄😵‍💫🙄
/*void element(int arr[], int size)
{

    for (int i = 1; i < size; i++)
    {
        bool isPresent_right = true;
        bool isPresent_left = true;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                isPresent_right = false;
                break;
            }
        }
        for (int k = 0; k < i; k++)
        {
            if (arr[i] < arr[k])
            {
                isPresent_left = false;
                break;
            }
        }
        if (isPresent_right == true && isPresent_left == true)
        {
            cout << arr[i] << " ";
            break;
        }
    }
    cout << "NO element exist" << endl;
}*/

int main()
{
    // int n;
    // cout << "Enter the size of the array:" << endl;
    // cin >> n;
    // vector<int> v(n);

    // cout << "Enter the elements in the array" << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    // }

    // 1 😵‍💫🙄😵‍💫🙄
    // count_odd_even(v);

    // 2 😵‍💫🙄😵‍💫🙄
    // cout << "The sum of the greatest an smallest element present in the array is : " << sum_of_G_and_S(v);

    // 3 😵‍💫🙄😵‍💫🙄
    // cout << "The Reverse Array of the given array is below:" << endl;
    // reverse_array(v);
    // print_array(v);

    // 4 😵‍💫🙄😵‍💫🙄
    // int arr1[] = {5, 1, 88, 0, 74};
    // int arr1[] = {5, 1, 88, 0, 74};
    // int arr2[] = {81, 99, 12, 0, 3};
    // int size1 = sizeof(arr1) / sizeof(int);
    // int size2 = sizeof(arr2) / sizeof(int);
    // cout << endl;
    // cout << "Sum of minimum of elements present in different array is : " << min_sum(arr1, arr2, size1, size2);

    // 5 😵‍💫🙄😵‍💫🙄
    // int arr1[] = {0, 1, 4, 5, 6, 2, 7};
    // int size1 = sizeof(arr1) / sizeof(arr1[0]);
    // cout << endl;
    // cout << "The number that is not present in the range:" << not_present_in_range(arr1, size1);

    // 6 😵‍💫🙄😵‍💫🙄
    // int arr[] = {1, 6, 5, 7, 10, 8, 9};
    // int arr[] = {5, 6, 2, 8, 10, 9};
    // int arr[] = {1,18,17,20,0};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // cout << endl;
    // element(arr, size);

    return 0;
}