using namespace std;
#include <iostream>

int main()
{
    cout << "This program is to do the practice solutions found on www.w3resource.com/cpp-exercises/basic/index.php" << endl << endl;
    //1. Write a program in C++ to print a welcome text in a separate line. 
    cout << "Exercise 1. Write a program in C++ to print a welcome text in a separate line.\n";
    cout << "Welcome!\n\n";
    
    
    //2. Write a program in C++ to print the sum of two numbers.
    cout << "Exercise 2. Write a program in C++ to print the sum of two numbers. \n";
    cout << "Number 1: ";
    int num1, num2, sum;
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    sum = num1 + num2;
    cout << num1 << " + " << num2 << " = " << sum << endl;

    //3. Write a program in C++ to find Size of fundamental data types.
    cout << "\nExercise 3. Write a program in C++ to find Size of fundamental data types.\n";
    cout << "The size of a char is: " << sizeof(char) << " bytes." << endl;
    cout << "The size of a short is: " << sizeof(short) << " bytes." << endl;
    cout << "The size of a int is: " << sizeof(int) << " bytes." << endl;
    cout << "The size of a long is: " << sizeof(long) << " bytes." << endl;
    cout << "The size of a long long is: " << sizeof(long long) << " bytes." << endl;
    cout << "The size of a float is: " << sizeof(float) << " bytes." << endl;
    cout << "The size of a double is: " << sizeof(double) << " bytes." << endl;
    cout << "The size of a long double is: " << sizeof(long double) << " bytes." << endl;
    cout << "The size of a bool is: " << sizeof(bool) << " bytes." << endl;

    //4. Write a program in C++ to print the sum of two numbers using variables.
    cout << "\nExercise 4. Write a program in C++ to print the sum of two numbers using variables.\n";
    cout << "See solution fo rexercise 2." << endl;

    //5. Write a program in C++ to check the upper and lower limits of integer.
    cout << "\nExercise 5. Write a program in C++ to find Size of fundamental data types.\n";
    return 0;
}
