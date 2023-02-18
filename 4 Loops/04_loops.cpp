#include <iostream>
using namespace std;

int main()
{
    // PRINT THE FIRST 10 NATURAL NUMBERS
    /*for (int i = 1; i <= 10; i++)
    {
        cout << "The Numbers are :" << i << endl;
    }*/

    // PRINT ALL VALUES BETWEEN 1 AND 100 EXCEPT IT`S A MULTIPLE OF 3
    /*for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        cout << i << " ";
    }*/

    // PRINT ALL FACTORS OF THE NUMBER IN THE INPUT
    /*int num;
    cout << "Enter the number" << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << "Factors are : " << i << endl;
        }
    }*/

    // COUNT THE NUMBER OF DIGITS IN THE GIVEN NUMBER N
    /*int n, count = 0;
    cout << "Enter n" << endl;
    cin >> n;

    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    cout << "Count is : " << count;*/

    // FIND SUM OF DIGITS IN A GIVEN NUMBER N
    /*int n, sum = 0;
    cout << "Enter n" << endl;
    cin >> n;

    while (n != 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    cout << "Sum is : " << sum;*/

    // REVERSE THE DIGIT OF A NUMBER
    /*int n, ans = 0, rem;
    cout << "Enter n" << endl;
    cin >> n;

    while (n > 0)
    {
        rem = n % 10;
        ans = ans * 10 + rem;
        n = n / 10;
    }
    cout << "Reverse is : " << ans;*/

    // FIND THE SUM OF THE FOLLOWING SERIES
    // 1 - 2 + 3 - 4 ....n
    /*int n, sum = 0;
    cout << "Enter the value of n" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        i % 2 == 0 ? sum = sum - i : sum = sum + i;
    }
    cout << "Sum is :" << sum;*/

    // GIVEN TWO NUMBERS A AND B. FIND A RAISE TO THE POWER B
    /*int a, b, ans = 1;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    cout << "A raise to the power B is : " << ans;*/

    // PRINT THE Nth FACTORIAL NUMBER
    /*int num, fact = 1;
    cout << "Enter the you want to calculate the factorial : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial is : " << fact;*/

    // WRITE A PROGRAM TO PRINT ALL ARMSTRONG NUMBERS BETWEEN 100 TO 500
    
    // WRITE A PROGRAM TO CHECK WHETHER A NUMBER CAN BE EXPRESSED AS A SUM OF TWO PRIME NUMBERS
    


    return 0;
}