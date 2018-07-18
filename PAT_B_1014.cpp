#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    string a, b, week[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    cin >> a >> b;
    int len = a.length() > b.length() ? b.length() : a.length(), flag = 1;
    for (int i = 0; i < len; i++)
    {
        if (a[i] == b[i] && isupper(a[i]) && a[i] <= 'G' && flag)
        {
            cout << week[a[i] - 'A'] << " ";
            flag = 0;
        }
        else if (a[i] == b[i] && isupper(a[i]) && a[i] <= 'N' && !flag)
        {
            printf("%02d:", a[i] - 'A' + 10);
            break;
        }
        else if (a[i] == b[i] && isdigit(a[i]) && !flag)
        {
            printf("%02d:", a[i] - '0');
            break;
        }
    }
    cin >> a >> b;
    len = a.length() > b.length() ? b.length() : a.length();
    for (int i = 0; i < len; i++)
    {
        if (a[i] == b[i] && isalpha(a[i]))
        {
            printf("%02d", i);
            break;
        }
    }
    return 0;
}