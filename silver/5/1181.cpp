//
// Created by subin on 2025. 8. 24..
//
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int compare (const void* first, const void* second)
{
    int len_first = strlen((char*)first), len_second = strlen((char*)second);

    if (len_first > len_second)
        return 1;
    if (len_first < len_second)
        return -1;

    for (int i = 0; i < len_first; i++) {
        if (((char*)first)[i] < ((char*)second)[i])
            return -1;
        if (((char*)first)[i] > ((char*)second)[i])
            return 1;
    }
    return 0;
}

int main()
{
    int num;
    cin >> num;
    char arr[20000][51];

    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    qsort(arr, num, sizeof(arr[0]), compare);

    for (int i = 0; i < num; i++) {
        if (i == 0 || (strcmp(arr[i - 1], arr[i]) != 0)) {
            cout << arr[i] << "\n";
        }
    }
}
