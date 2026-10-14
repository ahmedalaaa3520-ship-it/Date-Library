# 📅 clsDate — C++ Date Library

## 📌 About | عن المشروع

This is a C++ date library I built while learning OOP. It can create dates, validate them, add or subtract days, months, and years, compare dates, print calendars, and more.

<div dir="rtl">

دي مكتبة تواريخ بـ C++ عملتها وأنا بتعلّم OOP. بتقدر تنشئ تواريخ، وتتأكد إن التاريخ صحيح، وتجمع وتطرح أيام وشهور وسنين، وتقارن بين تاريخين، وتطبع تقويم، وغيرها.

</div>

---

## 🎯 What I Learned | اللي اتعلمته

* How to build a class with multiple functions.
* How leap years and the number of days in each month work.
* The difference between static functions and object functions.
* How to test my library and fix bugs.
* How to use one library inside another (`clsString.h` inside `clsDate.h`).

<div dir="rtl">

* إزاي أبني `class` فيها functions كتير.
* إزاي بتشتغل السنة الكبيسة وعدد أيام كل شهر.
* الفرق بين الـ `static functions` والـ `object functions`.
* إزاي أختبر مكتبتي وأصلّح الـ bugs اللي بلاقيها.
* إزاي أستخدم مكتبة جوه مكتبة تانية، زي `clsString.h` جوه `clsDate.h`.

</div>

---

## 🚀 How to Use It | إزاي تستخدمها

Copy both `clsDate.h` and `clsString.h` into your project because `clsDate` uses `clsString`.

<div dir="rtl">

انسخ الملفين `clsDate.h` و`clsString.h` مع بعض في مشروعك، لأن `clsDate` بتستخدم `clsString`.

</div>

### Include the Library

```cpp
#include "clsDate.h"
```

> **Note:** This library currently works with Visual Studio because it uses `__declspec(property)`.

<div dir="rtl">

**ملحوظة:** المكتبة حاليًا بتشتغل مع Visual Studio لأنها بتستخدم `__declspec(property)`.

</div>

---

## 🛠️ Creating a Date | إنشاء تاريخ

```cpp
clsDate Date1(15, 3, 2024);  // Day, Month, Year
clsDate Date2("6/3/2006");   // Date as a string
clsDate Date3(100, 2024);    // Day number 100 in the year 2024
clsDate Today;               // Today's date
```

---

## ✨ What It Can Do | مميزات المكتبة

### ✅ Validation | التحقق من صحة التاريخ

* Check whether a date is valid.
* Check whether a year is a leap year.

### 📆 Date Information | معلومات التاريخ

* Get the number of days, hours, minutes, and seconds in a month or year.
* Get the day name and month name.

### 🗓️ Calendar | التقويم

* Print a monthly or yearly calendar.

### ➕➖ Date Arithmetic | العمليات على التاريخ

* Add or subtract days, weeks, months, years, decades, centuries, and millennia.

### ⚖️ Comparison | المقارنة

* Compare dates.
* Calculate the number of days between two dates.

### 🏖️ Weekends and Business Days | الويك إند وأيام العمل

* Check weekends (Friday and Saturday).
* Count business days.
* Calculate the return date after a vacation.

### 🎂 Age | العمر

* Calculate age in days.

---

## 💻 Example | مثال عملي

```cpp
#include <iostream>
#include "clsDate.h"

using namespace std;

int main()
{
    clsDate Date(25, 12, 2025);

    Date.IncreaseDateByXDays(10);
    Date.Print();  // 4/1/2026

    cout << Date.DayShortName() << endl;  // Sun

    clsDate Start(1, 1, 2024);
    clsDate End(1, 1, 2025);

    cout << Start.GetDifferenceInDays(End);  // 366

    return 0;
}
```

### Static and Object Functions | دوال Static ودوال الـ Object

Every function has two versions. The object version works with the date stored inside the object, while the static version accepts a date and returns the result.

<div dir="rtl">

كل function ليها نسختين: النسخة العادية بتشتغل على التاريخ الموجود جوه الـ `object`، والنسخة الـ `static` بتستقبل تاريخ وبتحسب النتيجة.

</div>

---

## ⚠️ Things to Know | حاجات لازم تعرفها

* The weekend is **Friday and Saturday**.
* Adding one month to `31/1/2024` gives `29/2/2024`, because February has fewer days.
* Date strings must follow the `day/month/year` format.

<div dir="rtl">

* الويك إند هو **الجمعة والسبت**.
* لو أضفت شهر على `31/1/2024`، النتيجة `29/2/2024` لأن فبراير أيامه أقل.
* نص التاريخ لازم يكون بالشكل `يوم/شهر/سنة`.

</div>

---

## 🔧 What I Want to Improve | اللي عايز أحسّنه

* Make the library compatible with other compilers.
* Validate date strings before processing them.
* Add more functions and test more cases.

<div dir="rtl">

* أخلي المكتبة تشتغل على compilers تانية غير Visual Studio.
* أتحقق من صحة نص التاريخ قبل استخدامه.
* أضيف functions أكتر وأختبر حالات مختلفة.

</div>

---

## 👨‍💻 Author

**Ahmed Alaa**

*C++ Student | Learning Object-Oriented Programming*
