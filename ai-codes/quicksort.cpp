#include <iostream>

// quicksort

int partition(int arr[], int s, int e)
{
    int pivot = arr[e];
    int i = s - 1;
    for (int j = s; j < e; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[e]);
    return i + 1;
}

void quicksort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(arr, s, e);
    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e);
}

int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}