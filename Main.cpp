#include <iostream>

using namespace std;

int daysInMonths [12]={31,0,31,30,31,30,31,31,30,31,30,31};

bool isLeap (int year){
    bool isLeap = false;
    
    if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0)
        return true;
    else
        return false;
}

int calculateDay(int day, int month){
    int total=day;
    for (int i=0; i<month-1; i++){
        total+= daysInMonths[i];
    }
    return total;
}

int main(){
    
    int day, month, year;
    cout << "Enter date 'MM DD YYYY' = ";
    cin >> month >> day >> year;
    
    
    if (isLeap(year))
        daysInMonths[1] = 28;
    else
        daysInMonths[1] = 29;
    
    cout << "Total days is " << calculateDay (day, month) << endl;
    
    return 0;
}