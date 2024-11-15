// How do you pass the structure variable to function ? Define function to add two times t1 and t2 and display result using appropriate program.
#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time addTimes(struct Time t1, struct Time t2) {
    struct Time result;
    
    // Add seconds, minutes, and hours
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + (result.seconds / 60); 
    result.seconds %= 60; 
    
    result.hours = t1.hours + t2.hours + (result.minutes / 60); 
    result.minutes %= 60;  
    
    return result;
}

void displayTime(struct Time t) {
    printf("%02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}

int main() {
    struct Time t1 = {2, 45, 50}; 
    struct Time t2 = {1, 20, 40};  
    
    struct Time result = addTimes(t1, t2); 
    
    printf("Time 1: ");
    displayTime(t1);
    
    printf("Time 2: ");
    displayTime(t2);
    
    printf("Result: ");
    displayTime(result); 
    
    return 0;
}
