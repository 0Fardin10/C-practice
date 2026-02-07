#include <stdio.h>

#define TOTAL_STUDENTS 10
#define PASS_MARK 40

int getTotal(int marks[]) {
    int sum = 0;
    for(int i = 0; i < TOTAL_STUDENTS; i++) {
        sum += marks[i];
    }
    return sum;
}

float getAverage(int total) {
    return total / 10.0f;
}

int getHighest(int marks[]) {
    int high = marks[0];
    for(int i = 1; i < TOTAL_STUDENTS; i++) {
        if(marks[i] > high) {
            high = marks[i];
        }
    }
    return high;
}

int getLowest(int marks[]) {
    int low = marks[0];
    for(int i = 1; i < TOTAL_STUDENTS; i++) {
        if(marks[i] < low) {
            low = marks[i];
        }
    }
    return low;
}

int countPassed(int marks[]) {
    int count = 0;
    for(int i = 0; i < TOTAL_STUDENTS; i++) {
        if(marks[i] >= PASS_MARK) {
            count++;
        }
    }
    return count;
}

int main() {
    int marks[TOTAL_STUDENTS];
    
    // Get marks input
    printf("Enter marks of 10 students:\n");
    for(int i = 0; i < TOTAL_STUDENTS; i++) {
        scanf("%d", &marks[i]);
    }
    
    // Calculate all values
    int total = getTotal(marks);
    float average = getAverage(total);
    int highest = getHighest(marks);
    int lowest = getLowest(marks);
    int passed = countPassed(marks);
    int failed = TOTAL_STUDENTS - passed;
    
    // output results
    printf("\nTotal: %d\n", total);
    printf("Average: %.1f\n", average);
    printf("Highest: %d\n", highest);
    printf("Lowest: %d\n", lowest);
    printf("Passed: %d\n", passed);
    printf("Failed: %d\n", failed);
    
    //  evaluation 
    if(average >= 70) {
        printf("Overall performance is GOOD\n");
    } else if(average >= 50) {
        printf("Overall performance is AVERAGE\n");
    } else {
        printf("Overall performance is POOR\n");
    }
    
    return 0;
}
/*I’m not sure how conditional it is to add my own comment inside the code. But while solving this problem, I got stuck in many places, so I used different prompts. As an AI agent, I used a few prompts.*/