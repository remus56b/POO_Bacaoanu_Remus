/*
#include <stdlib.h>
#include <iostream>
#pragma warning (disable : 4996)
using namespace std;

int CONVERSIE(char* str) {
    int nr = 0;
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        nr = nr * 10 + (str[i] - '0');
        i++;
    }
    return nr;
}

int main()
{

    FILE* fis;
    int s = 0, k = 0;
    char str[256];
    if (!(fis = fopen("Text.txt", "r+")))
    {
        perror("error");
        exit(1);
    }
    while (!feof(fis))
    {
        fgets(str, 100, fis);
        k = CONVERSIE(str);
        ///cout << k << endl;
        s = s + k;
    }
    fclose(fis);
    cout << s;
    return 0;
}
*/

#include <stdlib.h>
#include <iostream>
#include <cstring>
#pragma warning (disable : 4996)
using namespace std;
int i, j, k;
char* p;
char t[265][256], s[256];
int main()
{
    cin.getline(s, 256);
    p = strtok(s, " ");
    while (p)
    {
        strcat(t[k++], p);
        p = strtok(NULL, " ");
    }

    for (i = 0; i < k; i++)
        for (j = i + 1; j <= k; j++)
            if (strlen(t[i]) > strlen(t[j]))
                swap(t[i], t[j]);

    for (i = k; i >= 1; i--)
        cout << t[i] << endl;

    return 0;
}