#include <iostream>
#include "clsDate.h"
using namespace std;

// Simple test for the clsDate library.


int main()
{
    cout << boolalpha;  
    //---------------- 1. Creating dates
    cout << "--- Creating dates ---\n";

    clsDate Date1(15, 3, 2024);
    clsDate Date2("6/3/2006");
    clsDate Today;                      // system date

    Date1.Print();                      // 15/3/2024
    Date2.Print();                      // 6/3/2006
    Today.Print();                      // today's date

    //---------------- 2. Leap year and days
    cout << "\n--- Leap year and days ---\n";

    cout << "Is 2024 a leap year? " << Date1.isLeapYear() << endl;                      // true
    cout << "Days in Feb 2024: " << clsDate::NumberOfDaysInAMonth(2, 2024) << endl;     // 29
    cout << "Days in year 2023: " << clsDate::NumberOfDaysInAYear(2023) << endl;        // 365

    //---------------- 3. Day and month names
    cout << "\n--- Names and calendar ---\n";

    clsDate Date3(6, 3,2006);
    cout << "Day name: " << Date3.DayShortName() << endl;        
    cout << "Month name: " << Date3.MonthShortName() << endl;
    Date3.PrintMonthCalendar();

    //---------------- 4. Adding and subtracting
    cout << "\n--- Adding and subtracting ---\n";

    clsDate Date4(25, 12, 2025);
    Date4.IncreaseDateByXDays(10);
    cout << "25/12/2025 + 10 days = " << Date4.DateToString() << endl;    // 4/1/2026

    clsDate Date5(31, 1, 2024);
    Date5.IncreaseDateByOneMonth();
    cout << "31/1/2024 + 1 month = " << Date5.DateToString() << endl;      // 29/2/2024

    clsDate Date6(29, 2, 2024);
    Date6.IncreaseDateByOneYear();
    cout << "29/2/2024 + 1 year = " << Date6.DateToString() << endl;       // 28/2/2025

    Date4.DecreaseDateByXDays(10);
    cout << "Back 10 days = " << Date4.DateToString() << endl;              // 25/12/2025

    //---------------- 5. Difference and comparing
    cout << "\n--- Difference and comparing ---\n";

    clsDate Start(1, 1, 2024);
    clsDate End(1, 1, 2025);

    cout << "Days between: " << Start.GetDifferenceInDays(End) << endl;     // 366
    cout << "Start before End? " << Start.IsDateBeforeDate2(End) << endl;    // true
    cout << "Start equal End? " << Start.IsDateEqualDate2(End) << endl;      // false

    //---------------- 6. Weekend and valid date
    cout << "\n--- Weekend and valid date ---\n";

    clsDate Friday(2, 10, 2026);
    cout << "Is 2/10/2026 a weekend? " << Friday.IsWeekEnd() << endl;        // true (Fri)

    clsDate Wrong(31, 4, 2024);
    cout << "Is 31/4/2024 valid? " << Wrong.IsValid() << endl;               // false

    return 0;
}