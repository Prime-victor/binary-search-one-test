#include <stdio.h>
#include <time.h>

// Declare functions
int binsearch(int x, int v[], int n);
int binsearch_one_test(int x, int v[], int n);

int main() {
    const int size = 100000;
    int v[size];
    for (int i = 0; i < size; i++)
        v[i] = i;

    int target = 12345;

    clock_t start, end;
    int result;

    // Original binary search
    start = clock();
    result = binsearch(target, v, size);
    end = clock();
    printf("binsearch (two tests): index = %d, time = %.6f ms\n",
           result, (double)(end - start) * 1000 / CLOCKS_PER_SEC);

    // One-test binary search
    start = clock();
    result = binsearch_one_test(target, v, size);
    end = clock();
    printf("binsearch_one_test (one test): index = %d, time = %.6f ms\n",
           result, (double)(end - start) * 1000 / CLOCKS_PER_SEC);

    return 0;
}
