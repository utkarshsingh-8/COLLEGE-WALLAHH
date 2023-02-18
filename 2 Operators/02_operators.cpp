#include <iostream>
using namespace std;

int main()
{
    // Write a program to check whether two numbers (entered by user) are equal or not
    /*int num1, num2;
    cout << "Enter the value of Num1 & Num2" << endl;
    cin >> num1 >> num2;

    (num1 == num2) ? cout << "Equal" : cout << "Not Equal";*/

    // Write a program to take the values of two variables a and b from the keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.
    /*int a, b;
    cout << "Enter the value of a & b" << endl;
    cin >> a >> b;
    ((a < 50) && (a < b)) ? cout << "TRUE" : cout << "FALSE";*/

    // There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls received grades "A" if 17 boys made up 80% of the students that received grades "A".
    /*int total, boys = 17, girls;
    total = (80 * 45) / 100;
    girls = total - boys;
    cout << "girls received grades A :" << girls << endl;*/

    // Write a program to calculate the sum of the first and the second last digit of a 5 digit number
    /*int num, sum, first, second,third,fourth,fifth;
    cout << "Enter a five digit number :" << endl;
    cin >> num;

    first = num / 10000;
    num=num%10000;
    second=num/1000;
    num=num%1000;
    third=num/100;
    num=num%100;
    fourth=num/10;
    fifth=num%10;

    sum = first + fourth;
    cout << "the sum of the first and the second last digit of a five digit number is : " << sum;*/

    // Write a program to calculate the sum of digits of a 3 digit number.
    /*int num, sum, first, second, third;
    cout << "Enter a three digit number :" << endl;
    cin >> num;

    first = num / 100;
    num = num % 100;
    second = num / 10;
    third = num % 10;

    sum = first + second + third;
    cout << "the sum of the first and the second last digit of a three digit number is : " << sum;*/

    //Design a calculator to perform basic arithmetic operations (+,-,/,*,%)
    /*int a=8,b=10;
    cout<<"Sum "<<a+b<<endl;
    cout<<"Difference "<<a-b<<endl;
    cout<<"Product "<<a*b<<endl;
    cout<<"Division "<<(float)a/b<<endl;*/

    return 0;
}