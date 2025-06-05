#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int count = 0;
    char *ptr = &str[0];

    while (*ptr != '\0')
    {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')
        {
            count++;
        }
        ptr++;
    }

    cout << count << endl;
    return 0;
}
