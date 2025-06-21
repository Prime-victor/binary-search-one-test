# binary-search-one-test
# Binary Search — One Test Inside Loop

## 📌 Exercise 3-1 (from *The C Programming Language*)

This exercise improves the classic binary search by reducing the number of tests inside the loop from two to one.

✅ **Original version:**  
Checks `if x < v[mid]` and `else if x > v[mid]` on each loop.

✅ **Optimized version:**  
Uses only `if (x <= v[mid])` inside the loop and checks equality only once outside.

## 🗂️ Files
- `binsearch.c` — Original version
- `binsearch_one_test.c` — Optimized version
- `main.c` — Runs both and measures runtime
- `Makefile` — Easy build

## ⚡ How to build & run

```bash
make
./main
