# 🧠 C Programming Test – Array & 2D Array Practice

## 📘 Course Info
- **Course:** CSE 103 - Structured Programming
- **Instructor:** Dr. Maheen Islam, Associate Professor, CSE Dept
- **University:** East West University
- **Semester:** Spring 2025
- **Student:** Tamim (ID: 2025-1-60-050)

---

## 🚩 Problem 1: Bonus Marks Based on Attendance

### 📝 Problem Statement
Students receive bonus marks based on attendance:

| Attendance (%)      | Bonus Marks |
|---------------------|-------------|
| More than 95%       | 2           |
| More than 85%       | 1.5         |
| At least 75%        | 1           |
| Less than 75%       | 0           |

### ✅ Task
- Input attendance percentages of 50 students.
- Calculate and store bonus marks in another array.
- Print the **average** bonus marks received.

### 💡 Strategy
- Use two arrays `A[50]` and `B[50]`.
- Use `if-else` to assign bonus marks.
- Loop to calculate average.

### 💻 Code Preview
```c
#include <stdio.h>

int main() {
    float attendance[50], bonus[50], totalBonus = 0;
    for (int i = 0; i < 50; i++) {
        scanf("%f", &attendance[i]);
        if (attendance[i] > 95) bonus[i] = 2;
        else if (attendance[i] > 85) bonus[i] = 1.5;
        else if (attendance[i] >= 75) bonus[i] = 1;
        else bonus[i] = 0;
        totalBonus += bonus[i];
    }
    printf("Average Bonus: %.2f\n", totalBonus / 50);
    return 0;
}
🚩 Problem 2: Grocery Shop Inventory
📝 Problem Statement
Track grocery inventory using a 2D array:

items[i][0] → Quantity

items[i][1] → Price per unit

✅ Task
Read info of 15 items.

Calculate total quantity.

Calculate total stock value (qty × price).

Find item with lowest total value.

💡 Strategy
Use items[15][2].

Loop through rows to compute total & minimum stock value.

💻 Code Preview
#include <stdio.h>

int main() {
    int items[15][2], totalQty = 0, totalVal = 0, minVal = 0, minIndex = 0;
    for (int i = 0; i < 15; i++) {
        scanf("%d%d", &items[i][0], &items[i][1]);
        int value = items[i][0] * items[i][1];
        totalQty += items[i][0];
        totalVal += value;
        if (i == 0 || value < minVal) {
            minVal = value;
            minIndex = i;
        }
    }
    printf("Total Quantity: %d\n", totalQty);
    printf("Total Stock Value: %d\n", totalVal);
    printf("Lowest Stock Value: Item %d\n", minIndex + 1);
    return 0;
}
🛠 Tools & Topics Used
Arrays (1D and 2D)

for loops

if-else conditionals

Math logic & calculations

📚 Learning Outcomes
✅ Practice with arrays

✅ Logic building using real-world data

✅ Hands-on with scanf, printf, loops & conditions

📧 Connect with Me
Email: 2025-1-60-142@std.ewubd.edu

LinkedIn: linkedin.com/in/taskin-tamim
“Practice makes progress. From arrays to algorithms — one step at a time.”
