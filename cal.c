#include <stdio.h>

int yearIsLeap(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        return 1;
    }
    return 0;
}

int monthDays(int month, int year) {
    int days = -1;

    switch(month) {
        case 1 : 
        case 3 :
        case 5 :
        case 7 :
        case 8 : 
        case 10:
        case 12: days = 31;
                 break;
        case 4 :
        case 6 : 
        case 9 : 
        case 11: days = 30;
                 break;
        case 2: if (yearIsLeap(year)) {
                    days = 29;
                } 
                else {
                    days = 28;
                }
                break;
    }
    return days;
}

int daysSinceJanuaryFirst(int month, int year) {
    int ans = 0;
    for (int i = 1; i < month; i++) {
        ans += monthDays(i, year);
    }
    return ans;
}

void monthName(int month, int year) {
    if (month == 1) {
        printf("        january ");
    }
    else if (month == 2) {
        printf("       february ");
    }
    else if (month == 3) {
        printf("         march ");
    }
    else if (month == 4) {
        printf("         april ");
    }
    else if (month == 5) {
        printf("         may ");
    }
    else if (month == 6) {
        printf("         june ");
    }
    else if (month == 7) {
        printf("         july ");
    }
    else if (month == 8) {
        printf("        august ");
    }
    else if (month == 9) {
        printf("       september ");
    }
    else if (month == 10) {
        printf("        october ");
    }
    else if (month == 11) {
        printf("       november ");
    }
    else {
        printf("       december ");
    }
    printf("%d\n", year);
}

int januaryFirst(int year) {
    return (1 + 
            5 * ((year - 1) % 4) + 
            4 * ((year - 1) % 100) + 
            6 * ((year  - 1) % 400)) % 7;
}

int main() {
    int month = -1; 
    int year = -1;
    
    printf("month: ");
    int err = scanf("%d", &month);
    
    printf("year: ");
    err = scanf("%d", &year);

    int firstDay = (januaryFirst(year) + daysSinceJanuaryFirst(month, year)) % 7;
    
    int daysOfMonth = monthDays(month, year);
    
    monthName(month, year);
    
    printf(" sun mon tue wed thu fri sat\n");

    // this loop fixes spacing for the first week
    for (int i = 0; i < firstDay; i++) {
        printf("    ");
    }
    
    // this loop prints the month
    for (int day = 1; day <= daysOfMonth ; day++) {
        printf("%4d", day);
        
        if ((day + firstDay) % 7 == 0 && day != daysOfMonth) {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}