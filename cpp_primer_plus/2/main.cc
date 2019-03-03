#include <iostream>

using namespace std;

/* 2.3 */
void one(void);
void two(void);

/* 2.5 */
double fahrenheit(double);

using namespace std;

/* 2.6 */
double lightYearDistance(double);

/* 2.7 */
void time(int, int);

int main(void)
{

    /* /1* 2.2 *1/ */
    /* long distance; */
    /* cin >> distance; */
    /* cout << distance << " distance is " << 220 * distance << " mile" << endl; */

    /* /1* 2.3 *1/ */
    /* one(); */
    /* one(); */
    /* two(); */
    /* two(); */
    
    /* /1* 2.4 *1/ */
    /* cout << "Enter your age: "; */
    /* int age; */
    /* cin >> age; */
    /* cout << "there are " << age * 12 << " month" << endl; */

    /* /1* 2.5 *1/ */
    /* cout << "Please enter a Celsius value: "; */
    /* double degrees; */
    /* cin >> degrees; */
    /* cout << degrees << " degrees Celsius is " */
    /*     << fahrenheit(degrees) */
    /*     << " degrees Fahrenheit." << endl; */

    /* /1* 2.6 *1/ */
    /* cout << "Enter the number of light years: "; */
    /* double lightYear; */
    /* cin >> lightYear; */
    /* cout << lightYear << " light years = " */
    /*     << lightYearDistance(lightYear) */
    /*     << " astronomical units." << endl; */

    /* 2.7 */
    int hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    time(hours, minutes);

    return 0;
}

/* 2.3 */
void one(void) {
    cout << "Three blind mice" << endl;
}

void two(void) {
    cout << "See how they run" << endl;
}

/* 2.5 */
double fahrenheit(double degrees) {
    return degrees * 1.8  + 32.0;
}


/* 2.6 */
double lightYearDistance(double lightYear) {
    return lightYear * 63240;
}

/* 2.7 */
void time(int hours, int minutes) {
    cout << "Time: " << hours << ":" << minutes << endl;
}
