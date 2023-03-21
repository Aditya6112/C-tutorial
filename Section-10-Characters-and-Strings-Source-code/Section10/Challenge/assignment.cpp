// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string pyramid{};
//     getline(cin, pyramid);

//     size_t num_letters = pyramid.length();

//     int position{0};

//     for (char c : pyramid)
//     {

//         size_t num_spaces = num_letters - position;
//         while (num_spaces > 0)
//         {
//             std::cout << " ";
//             num_spaces--;
//         }

//         for (size_t j = 0; j < position; j++)
//         {
//             std::cout << pyramid.at(j);
//         }

//         cout << c;
//         for (int j = position - 1; j >= 0; --j)
//         {
//             auto k = static_cast<size_t>(j);
//             cout << pyramid.at(k);
//         }

//         cout << endl;
//         position++;
//     }

//     return 0;
// }
// method 2
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Pleas enter a string" << endl;
    cin >> str;
    int len = str.length();

    for (int i = 0; i < len; i++)
    {
        string tmp;
        int numOfSpace = len - 1 - i;
        for (int j = 0; j < numOfSpace; j++)
        {
            tmp += " ";
        }
        for (int j = 0; j < i; j++)
        {
            tmp += str.at(j);
        }
        tmp += str.at(i);
        for (int j = i - 1; j >= 0; j--)
        {
            tmp += str.at(j);
        }
        for (int j = 0; j < numOfSpace; j++)
        {
            tmp += " ";
        }
        cout << tmp << endl;
    }

    return 0;
}