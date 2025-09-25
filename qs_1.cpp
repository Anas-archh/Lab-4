
#include <iostream>
using namespace std;


void convert24(int seconds) {
    int min = 0, hrs = 0;
    if (seconds >= 0 && seconds <= 59) {
        cout << "00:00:";
        if (seconds < 10) cout << "0";
        cout << seconds << endl;
    } else if (seconds > 59) {
        min = seconds / 60;
        seconds = seconds % 60;
        if (min > 59) {
            hrs = min / 60;
            min = min % 60;
        }
        if (hrs < 10) cout << "0";
        cout << hrs << ":";
        if (min < 10) cout << "0";
        cout << min << ":";
        if (seconds < 10) cout << "0";
        cout << seconds << endl;
    }
}

void convert24(int minutes, int seconds) {
    int hrs = 0;
    if (seconds > 59) {
        minutes += seconds / 60;
        seconds = seconds % 60;
    }
    if (minutes >= 0 && minutes <= 59) {
        cout << "00:";
        if (minutes < 10) cout << "0";
        cout << minutes << ":";
        if (seconds < 10) cout << "0";
        cout << seconds << endl;
    } else if (minutes > 59) {
        hrs = minutes / 60;
        minutes = minutes % 60;
        if (hrs < 10) cout << "0";
        cout << hrs << ":";
        if (minutes < 10) cout << "0";
        cout << minutes << ":";
        if (seconds < 10) cout << "0";
        cout << seconds << endl;
    }
}


int main() {
    int hours, minutes, seconds;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the minutes: ";
    cin >> minutes;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    convert24(hours * 3600 + minutes * 60 + seconds);
    convert24(minutes + hours * 60, seconds);
    return 0;
}
