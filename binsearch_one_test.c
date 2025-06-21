int binsearch_one_test(int x, int v[], int n) {
    int low = 0, high = n - 1, mid;

    while (low < high) {
        mid = (low + high) / 2;
        if (x <= v[mid])
            high = mid;
        else
            low = mid + 1;
    }

    if (v[low] == x)
        return low;
    else
        return -1;
}
