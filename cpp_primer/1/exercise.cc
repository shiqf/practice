#include <iostream>
#include "Sales_item.h"

using namespace std;

/* 1.11 */
void printFor(int, int);
/* 1.13 */
void printWhile(int, int);

int main(void)
{

    /* /1* 1.9 *1/ */
    /* int sum = 0; */
    /* int i = 50; */
    /* while (i <= 100) { */
    /*     sum += i; */
    /*     i++; */
    /* } */
    /* cout << sum << endl; */

    /* /1* /2* 1.10 *2/ *1/ */
    /* int i = 10; */
    /* while (i > 0) { */
    /*     cout << i << endl; */
    /*     i--; */
    /* } */

    /* /1* 1.11 *1/ */
    /* int m, n; */
    /* cout << "Enter value of m and n: "; */
    /* cin >> m >> n; */
    /* if (m > n) { */
    /*     printWhile(n, m); */
    /* } else { */
    /*     printWhile(m, n); */
    /* } */
    
    /* /1* 1.12 *1/ */
    /* int sum = 0; */
    /* for (int i = -100; i <= 100; i++) { */
    /*     sum += i; */
    /* } */
    /* cout << sum << endl; */

    /* /1* 1.13 for 的使用 *1/ */
    /* /1* 1.9 *1/ */
    /* int sum = 0; */
    /* for (int i = 50; i <= 100; i++) { */
    /*     sum += i; */
    /* } */
    /* cout << sum << endl; */

    /* /1* 1.10 *1/ */
    /* for (int i = 10; i >= 0; i--) { */
    /*     cout <<  i << endl; */
    /* } */

    /* /1* 1.11 *1/ */
    /* int m, n; */
    /* cout << "Enter value of m and n: "; */
    /* cin >> m >> n; */
    /* if (m > n) { */
    /*     printFor(n, m); */
    /* } else { */
    /*     printFor(m, n); */
    /* } */

    /* /1* 1.14 *1/ */
    /* char ch; */
    /* while ((ch = getchar()) != EOF) { */
    /*     putchar(ch); */
    /* } */

    /* /1* 1.16 *1/ */
    /* int temp, sum = 0; */
    /* while (cin >> temp) { */
    /*     sum += temp; */
    /* } */
    /* cout << sum << endl; */

    /* /1* 1.17 *1/ */
    /* int currentVal = 0, val = 0; */
    /* if (cin >> currentVal) { */
    /*     int cnt = 1; */
    /*     while (cin >> val) { */
    /*         if (currentVal == val) { */
    /*             cnt++; */
    /*         } else { */
    /*             cout << currentVal << " occurs " << cnt << " times " << endl; */
    /*             currentVal = val; */
    /*             cnt = 1; */
    /*         } */
    /*     } */
    /*     cout << currentVal << " occurs " << cnt << " times " << endl; */
    /* } */

    /* /1* 1.20 *1/ */
    /* Sales_item currentBook, book; */
    /* if (cin >> currentBook) { */
    /*     while (cin >> book) { */
    /*         if (currentBook.isbn() == book.isbn()) { */
    /*             currentBook += book; */
    /*         } else { */
    /*             cout << currentBook << endl; */
    /*             currentBook = book; */
    /*         } */
    /*     } */
    /*     cout << currentBook << endl; */
    /* } */

    /* 1.23 */

    return 0;
}

/* 1.11 */
void printWhile(int m, int n) {
    int i = m;
    while (i <= n) {
        cout << i << endl;
        i++;
    }
}

/* 1.13 */
void printFor(int m, int n) {
    for (int i = m; i <= n; i++) {
        cout << i << endl;
    }
}
