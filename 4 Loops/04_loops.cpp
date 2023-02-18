#include <iostream>
using namespace std;

int main()
{
    // WRITE A PROGRAM TO CALCULATE THE FACTORIAL OF A NUMBER
    /*int num, fact = 1;
    cout << "Enter the you want to calculate the factorial : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial is : " << fact;*/

    // WRITE A PROGRAM TO PRINT ALL ARMSTRONG NUMBERS BETWEEN 100 TO 500

    // WRITE A PROGRAM TO FIND THE SUM OF N NATURAL NUMBERS

    // WRITE A PROGRAM TO REVERSE A GIVEN NUMBER
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

    //WRITE A PROGRAM TO PRINT THE CROSS PATTERN (X SHAPE)

    //WRITE A PROGRAM TO PRINT ALPHABET DIAMOND PATTERN

    //WRITE A PROGRAM TO PRINT THE PLUS PATTERN (+ SHAPE)

    //WRITE A PROGRAM TO PRINT A TRIANGLE OF PRIME NUMBERS

    //WRITE A PROGRAM TO CHECK WHETHER A NUMBER CAN BE EXPRESSED AS A SUM OF TWO PRIME NUMBERS

    //WRITE A PROGRAM TO PRINT A RECTANGLE OUT OF *

























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


    return 0;
}