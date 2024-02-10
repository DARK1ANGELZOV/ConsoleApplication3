#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>& arr, int key) {
    int left = 0;                   // левая граница массива
    int right = arr.size() - 1;     // правая граница массива

    while (left <= right) {
        int mid = (left + right) / 2;   // средний элемент массива

        if (arr[mid] == key) {
            return mid;     // возвращаем индекс ключа, если найден
        }
        else if (arr[mid] < key) {
            left = mid + 1;     // ищем в правой половине массива
        }
        else {
            right = mid - 1;    // ищем в левой половине массива
        }
    }

    return -1;      // возвращаем -1, если ключ не найден
}

int main() {
    setlocale(LC_ALL, "RU");
    vector<int> arr = { 2, 5, 8, 12, 16, 23, 38, 56, 72 };    // пример отсортированного массива
    int key = 16;                                           // ключ для поиска

    int index = binarySearch(arr, key);     // вызов функции бинарного поиска

    if (index != -1) {
        cout << "Ключ " << key << " находится " << index << endl;
    }
    else {
        cout << "Ключа нет" << endl;
    }

    return 0;
}
