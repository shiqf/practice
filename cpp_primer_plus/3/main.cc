#include <iostream>

/* 3.1 类型限制大小*/
#include <climits>

/* 3.2 */
#define ZERO 0

using namespace std;

int main(void)
{

    /* /1* 3.1 *1/ */
    /* int n_int = INT_MAX; */
    /* short n_short = SHRT_MAX; */
    /* long n_long = LONG_MAX; */
    /* long long n_llong = LLONG_MAX; */
    /* cout << "int is " << sizeof (n_int) << " bytes." << endl; */
    /* cout << "short is " << sizeof (n_short) << " bytes." << endl; */
    /* cout << "long is " << sizeof (n_long) << " bytes." << endl; */
    /* cout << "long long is " << sizeof (n_llong) << " bytes." << endl; */
    /* cout << endl; */
    /* cout << "Maxium values:" << endl; */
    /* cout << "int: " << n_int << endl; */
    /* cout << "short: " << n_short << endl; */
    /* cout << "long: " << n_long << endl; */
    /* cout << "long long: " << n_llong << endl; */
    /* cout << "Minimum int value = " << INT_MIN << endl; */
    /* cout << "Bits per byte = " << CHAR_BIT << endl; */

    /* /1* 3.2 *1/ */
    /* short sam = SHRT_MAX; */
    /* unsigned short sue = sam; */
    /* cout << "Sam has " << sam << " dollars and Sue has " << sue; */
    /* cout << " dollars deposited." << endl */
    /*     << "Add $1 to each account." << endl << "Now "; */
    /* sam++; */
    /* sue++; */
    /* cout << "Sam has " << sam << " dollars and Sue has " << sue; */
    /* cout << " dollars deposited.\npoor Sam!"  << endl; */
    /* sam = ZERO; */
    /* sue = ZERO; */
    /* cout << "Sam has " << sam << " dollars and Sue has " << sue; */
    /* cout << " dollars deposited."  << endl; */
    /* cout << "Take $1 to each account." << endl << "Now "; */
    /* sam--; */
    /* sue--; */
    /* cout << "Sam has " << sam << " dollars and Sue has " << sue; */
    /* cout << " dollars deposited."  << endl << "Lucky Sue!" << endl; */

    /* /1* 3.3 *1/ */
    /* int chest = 42; */
    /* int waist = 0x42; */
    /* int inseam = 042; */
    /* cout << "Monsieur cuts a striking figure!\n"; */
    /* cout << "chest = " << chest << " (42 in decimal)\n"; */
    /* cout << "waist = " << waist << " (0x42 in hex)\n"; */
    /* cout << "inseam = " << inseam << " (42 in octal)\n"; */

    /* /1* 3.4 *1/ */
    /* int chest = 42; */
    /* int waist = 42; */
    /* int inseam = 42; */
    /* cout << "Monsieur cuts a striking figure!\n" << endl; */
    /* cout << "chest = " << chest << " (decimal for 42)\n" << endl; */
    /* /1* 使用16进制显示 *1/ */
    /* cout << hex; */
    /* cout << "waist = " << waist << " (hexadecimal for 42)\n" << endl; */
    /* /1* 使用8进制显示 *1/ */
    /* cout << oct; */
    /* cout << "inseam = " << inseam << " (octal for 42)\n" << endl; */

    /* /1* 3.5 *1/ */
    /* char ch; */
    /* cout << "Enter a character: " << endl; */
    /* cin >> ch; */
    /* cout << "Hola! "; */
    /* cout << "Thank you for the " << ch << " character." << endl; */

    /* /1* 3.6 *1/ */
    /* char ch = 'M'; */
    /* int i = ch; */
    /* cout << "The ASCII code for " << ch << " is " << i << endl; */
    /* cout << "Add one to the character code:" << endl; */
    /* ch++; */
    /* i = ch; */
    /* cout << "The ASCII code for " << ch << " is " << i << endl; */
    /* cout << "Displaying char ch using cout.put(ch): "; */
    /* cout.put(ch); */
    /* cout.put('!'); */
    /* cout << endl << "Done" << endl; */

    /* /1* 3.7 *1/ */
    /* cout << "\aOperation \"HyperHype\" is now activated!\n"; */
    /* cout << "Enter yor agent code:_______\b\b\b\b\b\b\b"; */
    /* long code; */
    /* cin >> code; */
    /* cout << "\aYou entered " << code << "...\n"; */
    /* cout << "\aCode verified! Proceed with Plan Z3!\n"; */

    return 0;
}
