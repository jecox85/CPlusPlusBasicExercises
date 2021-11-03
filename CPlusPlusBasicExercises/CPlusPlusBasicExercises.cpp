using namespace std;
#include <iostream>
#include <limits.h>
#include <iomanip>

//A quick function that ouputs space to the console to separate exercises
void newExercise();
//Prints out a + b and says if overflow was detected or not.
void exercise8Addition(int a, int b);
//Prints out a * b and says if overflow was detected or not.
void exercise8Multiplication(int a, int b);

int main()
{
    cout << "This program is to do the practice solutions found on www.w3resource.com/cpp-exercises/basic/index.php" << endl << endl;
    
    //1. Write a program in C++ to print a welcome text in a separate line. 
    cout << "Exercise 1. Write a program in C++ to print a welcome text in a separate line.\n\n";
    cout << "Welcome!\n";
    newExercise();
    
    //2. Write a program in C++ to print the sum of two numbers.
    cout << "Exercise 2. Write a program in C++ to print the sum of two numbers. \n\n";
    cout << "Number 1: ";
    int num1, num2, sum;
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    sum = num1 + num2;
    cout << num1 << " + " << num2 << " = " << sum << endl;
    newExercise();

    //3. Write a program in C++ to find Size of fundamental data types.
    cout << "Exercise 3. Write a program in C++ to find Size of fundamental data types.\n\n";
    cout << "The size of a char is: " << sizeof(char) << " bytes." << endl;
    cout << "The size of a short is: " << sizeof(short) << " bytes." << endl;
    cout << "The size of a int is: " << sizeof(int) << " bytes." << endl;
    cout << "The size of a long is: " << sizeof(long) << " bytes." << endl;
    cout << "The size of a long long is: " << sizeof(long long) << " bytes." << endl;
    cout << "The size of a float is: " << sizeof(float) << " bytes." << endl;
    cout << "The size of a double is: " << sizeof(double) << " bytes." << endl;
    cout << "The size of a long double is: " << sizeof(long double) << " bytes." << endl;
    cout << "The size of a bool is: " << sizeof(bool) << " bytes." << endl;
    newExercise();

    //4. Write a program in C++ to print the sum of two numbers using variables.
    cout << "Exercise 4. Write a program in C++ to print the sum of two numbers using variables.\n\n";
    cout << "See solution for exercise 2." << endl;
    newExercise();

    //5. Write a program in C++ to check the upper and lower limits of integer.
    cout << "Exercise 5. Write a program in C++ to find Size of fundamental data types.\n\n";
    //included limits.h
    cout << "Values for data types:" << endl;
    cout << left << setw(20) << "Data Type" << setw(23) << "Min" << setw(23) << "Max" << endl;
    cout << left << setw(20) << "signed char" << setw(23) << SCHAR_MIN << setw(23) << SCHAR_MAX << endl;
    cout << left << setw(20) << "unsigned char" << setw(23) << "0" << setw(23) << UCHAR_MAX << endl;
    cout << left << setw(20) << "char" << setw(23) << CHAR_MIN << setw(23) << CHAR_MAX << endl;
    cout << left << setw(20) << "short" << setw(23) << SHRT_MIN << setw(23) << SHRT_MAX << endl;
    cout << left << setw(20) << "unsigned short" << setw(23) << "0" << setw(23) << USHRT_MAX << endl;
    cout << left << setw(20) << "int" << setw(23) << INT_MIN << setw(23) << INT_MAX << endl;
    cout << left << setw(20) << "unsigned int" << setw(23) << "0" << setw(23) << UINT_MAX << endl;
    cout << left << setw(20) << "long" << setw(23) << LONG_MIN << setw(23) << LONG_MAX << endl;
    cout << left << setw(20) << "unsigned long" << setw(23) << "0" << setw(23) << ULONG_MAX << endl;
    cout << left << setw(20) << "long long" << setw(23) << LLONG_MIN << setw(23) << LLONG_MAX << endl;
    cout << left << setw(20) << "unsigned long long" << setw(23) << "0" << setw(23) << ULLONG_MAX << endl;
    cout << "The number of bits in a char data type = " << CHAR_BIT << endl;
    newExercise();

    //6. Write a program in C++ to check whether the primitive values crossing the limits or not.
    cout << "Exercise 6. Write a program in C++ to check whether the primitive values crossing the limits or not.\n\n";
    char gender = 'F';
    bool married = 1;
    unsigned short sons = 2;
    unsigned short apptYear = 2009;
    unsigned int salaryPerYear = 1500000;
    double height = 79.48;
    float gpa = 4.69f;
    long salaryDrawn = 12047235L;
    long long balanceTill = 995324987LL;

    cout << "The Gender is: " << gender << endl;
    cout << "Is she married?" << married << endl;
    cout << "Number of sons she has: " << sons << endl;
    cout << "Year of her appointment: " << apptYear << endl;
    cout << "Salary for a year: " << salaryPerYear << endl;
    cout << "Height is: " << height << endl;
    cout << "GPA is: " << gpa << endl;
    cout << "Salary drawn upto: " << salaryDrawn << endl;
    cout << "Balance till: " << balanceTill << endl;
    newExercise();

    //7. Write a program in C++ to display various type or arithmetic operation using mixed data type.
    cout << "Exercise 7. Write a program in C++ to display various type or arithmetic operation using mixed data type.\n\n";
    int int1 = 5, int2 = 7;
    double d1 = 3.7, d2 = 8.0;
    cout << int1 << " + " << int2 << " = " << int1 + int2 << endl;
    cout << d1 << " + " << d2 << " = " << d1 + d2 << endl;
    cout << int1 << " + " << d2 << " = " << int1 + d2 << endl;
    cout << int1 << " - " << int2 << " = " << int1 - int2 << endl;
    cout << d1 << " - " << d2 << " = " << d1 - d2 << endl;
    cout << int1 << " - " << d2 << " = " << int1 - d2 << endl;
    cout << int1 << " * " << int2 << " = " << int1 * int2 << endl;
    cout << d1 << " * " << d2 << " = " << d1 * d2 << endl;
    cout << int1 << " * " << d2 << " = " << int1 * d2 << endl;
    cout << int1 << " / " << int2 << " = " << int1 / int2 << endl;
    cout << d1 << " / " << d2 << " = " << d1 / d2 << endl;
    cout << int1 << " / " << d2 << " = " << int1 / d2 << endl;
    newExercise();

    //8. Write a program in C++ to check overflow/underflow during various arithmetical operation.
    cout << "Exercise 8. Write a program in C++ to check overflow/underflow during various arithmetical operation.\n\n";
    exercise8Addition(INT_MAX, 2);
    exercise8Addition(100, 2);
    exercise8Addition(INT_MIN, -2);
    exercise8Multiplication((INT_MAX / 2) + 2, 2);
    exercise8Multiplication((INT_MAX / 2) + 2, -2);
    exercise8Multiplication(-50, -5);
    exercise8Multiplication(50, 5);
    exercise8Multiplication(50, -5);
    newExercise();

    //9. Write a program in C++ to display the operation of pre and post increment and decrement.
    cout << "Exercise 9. Write a program in C++ to display the operation of pre and post increment and decrement.\n\n";
    int ex9Num = 5;
    cout << "The number x is " << ex9Num << endl;
    cout << "x = " << ex9Num;
    cout << ". x++ = " << ex9Num++;
    cout << ". x now = " << ex9Num << endl;

    cout << "x = " << ex9Num;
    cout << ". ++x = " << ++ex9Num;
    cout << ". x now = " << ex9Num << endl;

    cout << "x = " << ex9Num;
    cout << ". x-- = " << ex9Num--;
    cout << ". x now = " << ex9Num << endl;

    cout << "x = " << ex9Num;
    cout << ". --x = " << --ex9Num;
    cout << ". x now = " << ex9Num << endl;
    newExercise();

    //10. Write a program in C++ to formatting the output.
    cout << "Exercise 10. 10. Write a program in C++ to formatting the output.\n\n";
    double pi = 3.14159265;
    cout << right;
    cout << "The value of pi = " << pi << endl;
    cout << "The value of pi 4 decimal places with a total width of 8 = |" << setw(8) << setprecision(5) << pi << "|" << endl;
    cout << "The value of pi 4 decimal places with a total width of 10 = |" << setw(10) << setprecision(5) << pi << "|" << endl;
    cout << "The value of pi 4 decimal places with a total width of 8 = |"  << setfill('-') << setw(8) << setprecision(5) << pi << "|" << endl;
    cout << "The value of pi 4 decimal places with a total width of 8 = |" << setfill('-') << setw(10) << setprecision(5) << pi << "|" << endl;
    cout << "The value of pi in scientific format = " << setprecision(4) << scientific << pi << endl;
    newExercise();



    return 0;
}

//A quick function that ouputs space to the console to separate exercises
void newExercise() {
    cout << endl;
    for (int i = 0; i < 80; i++) {
        cout << '-';
    }
    cout << endl << endl;
}
//returns true if there is an overflow or underflow after the addition.  Result is changed either way
void exercise8Addition(int a, int b) {
    int temp = a + b;
    cout << a << " + " << b << " = " << temp << ". ";
    if (a > 0 && b > 0 && temp < 0)
        cout << "Overflow detected!" << endl;
    else if (a < 0 && b < 0 && temp > 0)
        cout << "Overflow detected!" << endl;
    else
        cout << "No Overflow detected!" << endl;
}
//returns true if there is an overflow or underflow after the multiplication.  Result is changed either way
void exercise8Multiplication(int a, int b) {
    int temp = a * b;
    cout << a << " * " << b << " = " << temp << ". ";
    if (a > 0 && b > 0 && temp < 0)
        cout << "Overflow detected!" << endl;
    else if (a < 0 && b < 0 && temp < 0)
        cout << "Overflow detected!" << endl;
    else if (a < 0 && b > 0 && temp > 0)
        cout << "Overflow detected!" << endl;
    else if (a > 0 && b < 0 && temp > 0)
        cout << "Overflow detected!" << endl;
    else
        cout << "No Overflow detected!" << endl;
}
