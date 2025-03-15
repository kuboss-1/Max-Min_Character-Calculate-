#include <iostream>
using namespace std;

int main()
{
    char strarray[10000];
    cin >> strarray;

    int char_num[26] = {0};

    for (int i = 0; strarray[i] != '\0'; i++)
    {
        char character = strarray[i];
        int index;
        if (character >= 'a')
        {
            index = character - 'a';
        }
        else
        {
            index = character - 'A';
        }
        char_num[index]++;
    }

    int max_num = -1, min_num = 10001;
    char max_char, min_char;

    for (int i = 0; i < 26; ++i)
    {
        if (char_num[i] == 0)
            continue;

        if (char_num[i] > max_num)
        {
            max_num = char_num[i];
            max_char = i + 'A';
        }

        if (char_num[i] < min_num)
        {
            min_num = char_num[i];
            min_char = i + 'A';
        }
    }

    cout << "Max : " << max_char << " " << max_num << endl;
    cout << "Min : " << min_char << " " << min_num << endl;

    return 0;
}
