#include <bits/stdc++.h>
using namespace std;

// FIND THE SUM OF THE ELEMENTS BETWEEN INDEX L AND R (WHERE L & R IS INCLUSIVE)
/*int sum(vector<int> &v, int L, int K)
{
    int sum = 0;
    for (int i = L; i <= K; ++i)
    {
        sum += v[i];
    }
    return sum;
}*/
// 😵‍💫😵‍🙄🙄

// RETURN AN ANS ARRAY SUCH THAT ANS[I] IS EQUAL TO THE PRODUCT OF ALL THE ELEMENTS OF ARR EXCEPT ARR[I]
/*void product_array(vector<int> &v)
{
    
    for (int i = 0; i < v.size(); i++)
    {
        int product = 1;
        for (int j = 0; j < v.size(); j++)
        {
            if (j != i)
            {
                product *= v[j];
            }
        }
        v[i] = product;
    }

    cout << "The Required Array are :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}*/

void product_array(vector<int> &v)
{
    
    for (int i = 0; i < v.size(); i++)
    {
      
    }

    cout << "The Required Array are :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    // 1 😵‍💫😵‍💫😵‍😬
    /*int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    vector<int> v(n);

    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int index_of_L, index_of_R;
    cout << "Enter the value of L and R" << endl;
    cin >> index_of_L >> index_of_R;

    cout << "The sum of the elements between the index L and R (where L & R is inclusive) : " << sum(v, index_of_L, index_of_R);*/

    // 2 😵‍💫😵‍😬😬
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    vector<int> v(n);

    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    product_array(v);
}