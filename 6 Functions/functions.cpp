#include <iostream>
using namespace std;

// WRITE A FUNCTION TO PRINT SQUARES OF THE FIRST 5 NATURAL NUMBERS
/*void print_square()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << i * i << " ";
    }
}*/

// WRITE A FUNCTION TO PRINT THE AREA AND CIRCUMFERENCE OF THE CIRCLE
/*void circle()
{
    int radius = 3;
    float circumference = 2 * 3.14 * radius;
    float area = 3.14 * (radius * radius);
    cout << area << " " << circumference;
}*/

// WRITE A FUNCTION TO CHECK A PERSON IS ELIGIBLE TO VOTE OR NOT
/*void eligible_to_vote(int age)
{

    if (age >= 18)
    {
        cout << "Eligible to vote";
    }
    else
    {
        cout << "Not Eligible to vote";
    }
}*/

// WRITE A PROGRAM TO PRINT ALL THE ODD NUMBERS BETWEEN a and b;
/*void print_odd_numbers(int a, int b)
{
    for (int i = a; i <= b; i += 2)
    {
        if (a%2!=0)
        {
            cout<<i<<" ";
        }
        else
        {
            cout<<i+1<<" ";
        }
    }
}*/

// WRITE A PROGRAM TO PRINT ALL THE PRIME NUMBERS BETWEEN a AND b;
/*void print_prime(int a, int b)
{
    while (a <= b)
    {
        int c = 1;
        int count = 0;
        while (c <= a)
        {
            if (a % c == 0)
            {
                count++;
            }
            c++;
        }
        if (count == 2)
        {
            cout << a << " ";
        }
        a++;
    }
}*/

int main()
{

    /*cout << "The square of the first 5 natural numbers:" << endl;
    print_square();*/

    /*cout << "The Area and Circumference of the circle is :" << endl;
    circle();*/

    /* int age;
     cout << "Enter the age of the person:" << endl;
     cin >> age;
     eligible_to_vote(age);*/

    /*int a, b;
    cout << "Enter the value of a and b:" << endl;
    cin >> a >> b;
    cout << "The Odd numbers between a and b are :" << endl;
    print_odd_numbers(a, b);*/

    /*int a, b;
    cout << "Enter the value of a and b:" << endl;
    cin >> a >> b;
    cout << "The prime numbers between a and b are :" << endl;
    print_prime(a, b);*/

    return 0;
}