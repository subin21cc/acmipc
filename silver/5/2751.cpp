//
// Created by subin on 2025. 8. 26..
//
#include <iostream>
#include <stdlib.h>
using namespace std;

// int compare (const void* first, const void* second)
// {
//     if (*(int*)first > *(int*)second)
//         return 1;
//     if (*(int*)first < *(int*)second)
//         return -1;
//     return 0;
// }

int compare(const void* first, const void* second) {
    return (*(int*)first - *(int*)second);
}

int main()
{
    int num;
    cin >> num;
    int arr[1000000];

    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    qsort(arr, num, sizeof(arr[0]), compare);
    // qsort(arr, num, sizeof(int), compare);

    for (int i = 0; i < num; i++) {
        cout << arr[i] << "\n";
    }
}
