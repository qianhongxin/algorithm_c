//
// Created by Red on 2017/12/3.
//

/**
 * 冒泡排序, 从小到大排序
 *
 * @param a 待排序数组
 * @param n 数组的长度
 */
void bubble_sort(int a[], int n) {
    int temp = 0;
    for (int i = n - 1, change = 1; i < n && change; --i) {
        change = 0;
        for (int j = 0; j < i; ++j) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                change = 1;
            }
        }
    }

    return;
}

