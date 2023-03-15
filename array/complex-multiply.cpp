#include <bits/stdc++.h>
using namespace std;
string complexNumberMultiply(string num1, string num2)
{

    // break all strings into real and imaginary then multiply each one two get result;

    int mid1 = -1;
    int mid2 = -1;
    string s11;
    string s12;
    string s21;
    string s22;

    for (int i = 0; i < num1.length(); i++)
    {
        if (num1[i] == '+')
        {
            mid1 = i;
            break;
        }
    }
    if (mid1 == -1)
    {
        s11 = num1;
    }
    else
    {
        s11 = num1.substr(0, mid1);
        s12 = num1.substr(mid1+1);
    }

    for (int i = 0; i < num2.length(); i++)
    {
        if (num2[i] == '+')
        {
            mid2 = i;
            break;
        }
    }

    if (mid2 == -1)
    {
        s21 = num2;
    }
    else
    {
        s21 = num2.substr(0, mid2);
        s22 = num2.substr(mid2+1);
    }

    // if both number are complex numbers;

    if (mid1 != -1 && mid2 != -1)
    {

        int a1, a2, b1, b2;
        stringstream s1, s2, s3, s4;
        s1 << s11;
        s2 << s12;
        s3 << s21;
        s4 << s22;
        s1 >> a1;
        s2 >> b1;
        s3 >> a2;
        s4 >> b2;

        cout << s11 << " " << s12 << " " << s21 << "  " << s22 << "  " << endl;

        int real = a1 * a2 - b1 * b2;
        int imaginary = a1 * b2 + b1 * a2;

        ostringstream str1, str2;
        str1 << real;
        str2 << imaginary;
        string realString = str1.str();
        string imaginaryString = str2.str();
        string result = realString + "+" + imaginaryString + "i";
        return result;
    }
    return "";
}
int main()
{
    string num1 = "1+-1i", num2 = "1+-1i";

    cout << complexNumberMultiply(num1, num2) << endl;
}