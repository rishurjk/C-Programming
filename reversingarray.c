#include<stdio.h>
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
void reverse(int arr[], int n)
{
    int aux[n];
    for (int i = 0; i < n; i++) {
        aux[n - 1 - i] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = aux[i];
    }
}
int main(void)
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, n);
    print(arr, n);
    return 0;
}