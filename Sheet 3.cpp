// Sheet 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    /*
    //Problem 1
    int i, j;
    for (i = 0; i < 10; ++i)
    {
        for (j = 0; j < i; j++)
            cout << i * j << "\n";
        cout << "Good Luck\n";
    }
    */

    /*
    //Problem 2
    int i = 0;
    int count = 0;
    int n = 10;
    int x;

    while (i < n)
    {
        cin >> x;
        if (x == i)
            ++count;
        i++;
    }
    */


    /*
    //Problem 3 
    
    //the following part is common in all codes from a) to e)
    int n;
    double count = 0;
    cout << "Insert n\n";
    cin >> n;

    //Series a) 
    for (int i = 1; i <= n; i++)
    {
        count += pow(i, 2);
    }

    cout << "Answer of series a) is " << count <<"\n";

    //Series b)
    for (int i = 1; i <= n; i++)
    {
        count += double(1 / i);
    }

    cout << "Answer of series b) is " << count << "\n";

    //Series c)
    for (int i = 1; i <= n; i++)
    {
        count += double((2 * i - 1) / (pow(i, 2)));
    }

    cout << "Answer of series c) is " << count << "\n";

    //Series d)
    int k;
    cout << "Insert k\n";
    cin >> k;

    for (int i = 1; i <= n; i++)
    {
        count += i * k;
    }
    
    cout << "Answer of series d) is " << count << "\n";

    //Series e)
    int A, B;
    cout << "Insert A and B\n";
    cin >> A >> B;

    for (int i = 0; i <= n; i++)
    {
        count += double(1 / (A + i * B));
    }

    cout << "Answer of series e) is " << count << "\n";
    */

    /*
    //Problem 4
    int x_degree;
    double x_rad;
    double fact_value = 1;
    double sin_value = 0;
    int n = 1;

    cout << "Insert x in degrees to claculate sin(x)\n";
    cin >> x_degree;

    x_rad = x_degree * 3.14159 / 180.0;

    //We will use the series to calculate to the next 20 terms
    for (int i = 1; n <= 20; i += 2)
    {
        //This while loop will calculate factorial
        int fact_count = i;
        while (fact_count >= 1)
        {
            fact_value *= fact_count;
            fact_count--;
        }

        if(n%2 != 0)
            sin_value += (pow(x_rad, i) / fact_value);
        else
            sin_value -= (pow(x_rad, i) / fact_value);
       
        n++;
    }

    cout << "sin(" << x_degree << ") is " << sin_value;
    

    /*
    //Problem 5
    long num = 6543;
    
    do
    {
        cout << (num % 10);
        num /= 10;
    } while (num != 0);

    cout << endl;
    */

    /*
    //Problem 6
    int count = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0 && i % 3 == 0)
        {
            count += i;
        }
    }

    cout << "The sum is " << count;
    */
    
    /*
    //Problem 7
    int grade;
    int count = 0;
    int sum = 0;
    int max = 0;
    int min = 100;
    int average = 0;

    while (1)
    {
        cout << "Insert grade or 101 to exit\n";
        cin >> grade;

        if (grade >= 0 && grade <= 100)
        {
            count++;
            sum = sum + grade;
            if (grade > max)
                max = grade;
            if (grade < min)
                min = grade;
            average = sum / count;
        }

        else
            break;

    }

    cout << "Min = " << min << "\n"
    << "Max = " << max << "\n"
    << "Average = " << average;
    */

    /*
    //Problem 8
    char input;
    int letter_count = 0;
    int word_count = 0;

    //while (1) is an infinite loop until break happens
    while (1)
    {
        input = _getch();

        if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
            letter_count++;
        if (input == ' ')
            word_count++;
        if (input == '\r')
        {
            word_count++;
            break;
        }
            
    }

    cout << "Letter count is " << letter_count << "\n"
        << "Word count is " << word_count;
    */

    /*
    //Problem 9
    float A = 52; 
    float B = 85;
    float growth_A = 0.06;
    float growth_B = 0.04;
    int year = 2023;
    int year_count = 0;
    cout << setw(4) << "Year" << setw(10) << "A" << setw(10) << "B" << "\n";
    cout << setw(4) << year << fixed << setw(10) << setprecision(2) << A << setw(10) << setprecision(2) << B << "\n";
    while (A <= B)
    {
        A += A * growth_A;
        B += B * growth_B;
        year_count++;
        cout << setw(4) << year + year_count << fixed << setw(10) << setprecision(2) << A << setw(10) << setprecision(2) << B << "\n";
    }
    
    cout << "\nNeeded years are " << year_count << " years\n";
    */

    //Problem 10
    // See problem 4 

    
    //Problem 11

    //for first part to print a pyramid
    int raw_no;
    for (raw_no = 0; raw_no < 4; raw_no++)
    {
        for (int space_count = 0; space_count < 3 - raw_no; space_count++)
        {
            cout << " ";
        }

        for (int asterisk_count = 0; asterisk_count < 2 * raw_no + 1; asterisk_count++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    //for second part to print an upside down pyramid
    for (raw_no = 0; raw_no < 3; raw_no++)
    {
        for (int space_count = 0; space_count < raw_no + 1; space_count++) //we need to redeclare space_count as it is local variable for the first for loop 
        {
            cout << " ";
        }

        for (int asterisk_count = 0; asterisk_count < 5 - 2 * raw_no; asterisk_count++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
