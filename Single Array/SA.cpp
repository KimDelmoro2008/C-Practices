//Single array - A group of consecutive memory locations of the same name and type, structures of related data items.
#include <iostream>
using namespace std;
int main()
{
    int x, choice, sum = 0, count = 0, product = 1, highest;
    float average;
    int num[10] = {3, 4, 5, 6, 1, 2, 7, 2, 4, 3};

    cout << "Name: GROUP 3  ";
    cout << "\nSection: IT11S1  ";

    for (choice = 1; choice <= 7; choice++)
    {
        switch (choice)
        {
            case 1:
                cout << "\n[1] Display all numbers\n     ";
                for (x = 0; x <= 9; x++)
                {
                    cout << num[x] << " ";
                }
                break;

            case 2:
                cout << "\n\n[2] Display the sum of all numbers";
                sum = 0;
                for (x = 0; x <= 9; x++)
                {
                    sum = sum + num[x];
                }
                cout << "\n     The sum of all numbers is  " << sum;
                break;

            case 3:
                cout << "\n\n[3] Display the sum of all given even numbers";
                sum = 0;
                for (x = 0; x <= 9; x++)
                {
                    if (num[x] % 2 == 0)
                    {
                        sum = sum + num[x];
                    }
                }
                cout << "\n     The sum of all given even numbers is  " << sum;
                break;

            case 4:
                cout << "\n\n[4] Display the sum of all numbers in even subscript 0, 2, 4";
                sum = 0;
                for (x = 0; x <= 9; x = x + 2)
                {
                    sum = sum + num[x];
                }
                cout << "\n     The sum of all numbers in even subscript 0, 2, 4 is  " << sum;
                break;

            case 5:
                cout << "\n\n[5] Display the average of all given odd numbers";
                sum = 0;
                count = 0;
                for (x = 0; x <= 9; x++)
                {
                    if (num[x] % 2 != 0)
                    {
                        sum = sum + num[x];
                        count++;
                    }
                }
                average = (float)sum / count;
                cout << "\n     The average of all given odd numbers is  " << average;
                break;

            case 6:
                cout << "\n\n[6] Display the product of all numbers in odd subscript  1, 3, 5, 7, 9";
                product = 1;
                for (x = 1; x <= 9; x = x + 2)
                {
                    product = product * num[x];
                }
                cout << "\n     The product of all numbers in odd subscript 1, 3, 5, 7, 9 is  " << product;
                break;

            case 7:
                cout << "\n\n[7] Display the highest number";
                highest = num[0];
                for (x = 1; x <= 9; x++)
                {
                    if (num[x] > highest)
                    {
                        highest = num[x];
                    }
                }
                cout << "\n     The highest number is  " << highest;
                break;
        }
    }
    cout << endl;
    return 0;
}   //end of main