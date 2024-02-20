  
#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int m = 0, l = 0, i;
    for (i = 0; i < str.size(); i++)
    {
        if (str[i] == 'o')
            l++;
        else if (str[i] == 'z')
            m++;
    }
    if (l == 2 * m)
        printf("Yes");
    else
        printf("No");
    return 0;
}
