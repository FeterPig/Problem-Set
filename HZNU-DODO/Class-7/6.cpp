#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

class Time
{
private:
    int hour_, minute_, second_;
    static bool isValid(int hour, int minute, int second)
    {
        return (hour >= 0 && hour < 24) && (minute >= 0 && minute < 60) && (second >= 0 && second < 60);
    }

public:
    Time(int hour = 0, int minute = 0, int second = 0)
    {
        if (isValid(hour, minute, second))
        {
            hour_ = hour;
            minute_ = minute;
            second_ = second;
        }
        else
        {
            throw invalid_argument("Invalid argument!");
        }
    }

    void setHour(int hour)
    {
        if (hour >= 0 && hour < 24)
        {
            hour_ = hour;
        }
        else
        {
            throw invalid_argument("Invalid argument!");
        }
    }
    void setMinute(int minute)
    {
        if (minute >= 0 && minute < 60)
        {
            minute_ = minute;
        }
        else
        {
            throw invalid_argument("Invalid argument!");
        }
    }
    void setSecond(int second)
    {
        if (second >= 0 && second < 60)
        {
            second_ = second;
        }
        else
        {
            throw invalid_argument("Invalid argument!");
        }
    }

    int getHour() { return hour_; }
    int getMinute() { return minute_; }
    int getSecond() { return second_; }

    void setTime(int hour, int minute, int second)
    {
        if (isValid(hour, minute, second))
        {
            hour_ = hour;
            minute_ = minute;
            second_ = second;
        }
        else
        {
            throw invalid_argument("Invalid argument!");
        }
    }

    void printTime24()
    {
        cout << setw(2) << setfill('0') << hour_ << ":"
             << setw(2) << setfill('0') << minute_ << ":"
             << setw(2) << setfill('0') << second_ << endl;
    }
    void printTime12()
    {
        if (hour_ >= 12)
        {
            int hour12 = hour_ - 12;
            if (hour12 == 0)
                hour12 = 12;
            cout << "PM" << hour12 << ":"
                 << setw(2) << setfill('0') << minute_ << ":"
                 << setw(2) << setfill('0') << second_ << endl;
        }
        else
        {
            int hour12 = hour_;
            if (hour12 == 0)
                hour12 = 12;
            cout << "AM" << hour12 << ":"
                 << setw(2) << setfill('0') << minute_ << ":"
                 << setw(2) << setfill('0') << second_ << endl;
        }
    }

    void tick()
    {
        second_++;
        if (second_ == 60)
        {
            second_ = 0;
            minute_++;
            if (minute_ == 60)
            {
                minute_ = 0;
                hour_++;
                if (hour_ == 24)
                {
                    hour_ = 0;
                }
            }
        }
    }
};

int main()
{
    Time t1;
    t1.printTime24();
    t1.printTime12();
    Time t2(2);
    t2.printTime24();
    t2.printTime12();
    Time t3(21, 34);
    t3.printTime24();
    t3.printTime12();
    Time t4(12, 25, 42);
    t4.printTime24();
    t4.printTime12();
    try
    {
        Time t5(23, 59, 99);
    }
    catch (invalid_argument &ex)
    {
        cout << ex.what() << endl;
    }
    Time t6(23, 59, 59);
    t6.tick();
    t6.printTime24();
    t6.printTime12();
    return 0;
}