#include <iostream>
using namespace std;

void print_square(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print_hollow_square(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void Hollow_Square_with_Both_Diagonals(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || i == j || i + j == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }
}
void print_increse_tringle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print_increse_hollow_tringle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (i == n - 1 || i == j || j == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void print_increse_traingle_numbers(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void print_decrease_tringle(int n)
{
    for (int i = 1; i <= n; i++) // rows
    {
        for (int j = 1; j <= n - i + 1; j++) // stars
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print_decrease_hollow_tringle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (i == 0 || j == (n - i - 1) || j == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void print_decrease_numbers_tringle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void print_pyramid_traingle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // for space..
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        // for star..
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        // for space..
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        cout << endl;
    }
}
void print_down_pyramid_pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * (n - i) + 1; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        cout << endl;
    }
}
void print_diamond_pattern(int n)
{
    // UPPER HALF
    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 1; j <= n - i; j++)
            cout << "  ";

        // stars
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "* ";

        cout << endl;
    }

    // LOWER HALF
    for (int i = n - 1; i >= 1; i--)
    {
        // spaces
        for (int j = 1; j <= n - i; j++)
            cout << "  ";

        // stars
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "* ";

        cout << endl;
    }
}
void half_right_side_pyramid(int n)
{
    // upper part print..
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // lower part print..
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void half_left_side_pyramid(int n)
{
    // upper part print..
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // lower part print..
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void binary_alternating_pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
void reverse_numaric_mountain_pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int s = 1; s <= 2 * (n - i); s++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}
void numaric_mountain_pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int a = 1; a <= n - i + 1; a++)
            cout << a;

        for (int s = 1; s <= i * 2 - 2; s++)
            cout << " ";

        for (int b = n - i + 1; b >= 1; b--)
            cout << b;

        cout << endl;
    }
}
void increase_number_traingle(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << count;
            count++;
        }
        cout << endl;
    }
}
void increase_alphabet_traingle(int n)
{

    for (int i = 1; i <= n; i++)
    {
        char count = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << count;
            count++;
        }
        cout << endl;
    }
}
void decrease_alphabet_traingle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char count = 'A';
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << count;
            count++;
        }
        cout << endl;
    }
}
void Alphabet_Increasing_Triangle_Pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char count = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << count;
        }

        cout << endl;
    }
}
void Alphabet_Palindrome_Pyramid_pttern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }

        char h = 'A' + i - 2;
        for (int j = i; j > 1; j--)
        {
            cout << h;
            h--;
        }
        cout << endl;
    }
}
void Reverse_Alphabet_Right_Triangle_Pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + n - i;
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}
void Hollow_Hourglass_Pattern(int n)
{
    // upper half...
    for (int i = 1; i <= n; i++) // rows
    {
        for (int j = 1; j <= n - i + 1; j++) // stars
        {
            cout << "* ";
        }
        for (int j = 1; j <= 2 * i + 1 - 3; j++) // space..
        {
            cout << "  ";
        }

        for (int j = 1; j <= n - i + 1; j++) // stars
        {
            cout << "* ";
        }
        cout << endl;
    }
    // lower half...
    for (int i = n - 1; i >= 1; i--) // rows
    {
        for (int j = 1; j <= n - i + 1; j++) // stars
        {
            cout << "* ";
        }
        for (int j = 1; j <= 2 * i + 1 - 3; j++) // sapce..
        {
            cout << "  ";
        }

        for (int j = 1; j <= n - i + 1; j++) // stars
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void butterfly_pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= n * 2 - i * 2; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= n * 2 - i * 2; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}


int main()
{
    int n = 5;
    // cout << "enter the value of n: " << endl;
    // cin >> n;

    // cout << "print_square: " << endl;
    // print_square(n);

    // cout << "print_hollow_square: " << endl;
    // print_hollow_square(n);

    // cout << "Hollow_Square_with_Both_Diagonals: " << endl;
    // Hollow_Square_with_Both_Diagonals(n);

    // cout << "print_increse_tringle: " << endl;
    // print_increse_tringle(n);

    // cout<<"print_increse_hollow_tringle: " <<endl;
    // print_increse_hollow_tringle(n);

    // cout << "print_increse_traingle_numbers: " << endl;
    // print_increse_traingle_numbers(n);

    // cout << "print_decrease_tringle: " << " " << endl;
    // print_decrease_tringle(n);

    // cout<< "print_decrease_hollow_tringle: "<<endl;
    // print_decrease_hollow_tringle(n);

    // cout << "print_decrease_numbers_tringle: " << endl;
    // print_decrease_numbers_tringle(n);

    // cout<<"print_pyramid_traingle: "<<endl;
    // print_pyramid_traingle(n);

    // cout<< "print_down_pyramid_tringle"<<endl;
    // print_down_pyramid_pattern(n);

    // cout<<"print_dimond_pattern: "<<endl;
    // print_diamond_pattern(n);

    // cout<<"half_right_side_pyramid: "<<endl;
    //    half_right_side_pyramid(n);

    // cout<<"half_left_side_pyramid: "<<endl;
    //    half_left_side_pyramid(n);

    // cout<<"binary_alternating_pattern: "<<endl;
    //    binary_alternating_pattern(n);

    // cout<<"reverse_numrearic_mountain_pattern: "<<endl;
    //   reverse_numaric_mountain_pattern(n);

    // cout<<"reverse_numrearic_mountain_pattern: "<<endl;
    //   reverse_numaric_mountain_pattern(n);

    // cout<<"numaric_mountain_pattern: "<<endl;
    // numaric_mountain_pattern(n);

    // cout <<"increase_number_traingle: " << endl;
    // increase_number_traingle(n);

    // cout<<"increase_alphabet_traingle: "<<endl;
    // increase_alphabet_traingle(n);

    // cout<<"decrease_alphabet_traingle: "<<endl;
    // decrease_alphabet_traingle(n);

    // cout << "Alphabet_Increasing_Triangle_Pattern: " << endl;
    // Alphabet_Increasing_Triangle_Pattern(n);

    // cout<<"Alphabet_Palindrome_Pyramid_pttern: "<<endl;
    // Alphabet_Palindrome_Pyramid_pttern(n);

    // cout<<"Reverse Alphabet Right Triangle Pattern: "<<endl;
    // Reverse_Alphabet_Right_Triangle_Pattern(n);

    // cout << "Hollow Hourglass Pattern : " << endl;
    // Hollow_Hourglass_Pattern(n);

    // cout << "butterfly pattern: " << endl;
    // butterfly_pattern(n);
}