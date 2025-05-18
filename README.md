<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <title>C Programming Test - Arrays</title>
  <style>
    body {
      font-family: 'Segoe UI', sans-serif;
      line-height: 1.6;
      background: #f4f4f4;
      padding: 20px;
      color: #333;
    }
    h1, h2, h3 {
      color: #2c3e50;
    }
    code {
      background: #eee;
      padding: 2px 4px;
      border-radius: 4px;
      font-family: Consolas, monospace;
    }
    pre {
      background: #2d2d2d;
      color: #f8f8f2;
      padding: 15px;
      border-radius: 5px;
      overflow-x: auto;
    }
    table {
      border-collapse: collapse;
      width: 100%;
      margin: 10px 0;
    }
    table, th, td {
      border: 1px solid #ccc;
    }
    th, td {
      padding: 10px;
      text-align: left;
    }
    a {
      color: #2980b9;
      text-decoration: none;
    }
    .quote {
      font-style: italic;
      color: #555;
      border-left: 4px solid #ccc;
      padding-left: 10px;
      margin: 20px 0;
    }
    .section {
      background: #fff;
      padding: 20px;
      margin-bottom: 30px;
      border-radius: 8px;
      box-shadow: 0 0 8px rgba(0,0,0,0.05);
    }
  </style>
</head>
<body>

  <h1>🧠 C Programming Test – Array & 2D Array Practice</h1>
  <p><strong>📘 Course:</strong> CSE 103 - Structured Programming<br>
     <strong>🏫 University:</strong> East West University<br>
     <strong>👨‍🏫 Instructor:</strong> Dr. Maheen Islam, Associate Professor, CSE Dept<br>
     <strong>🧑‍💻 Student:</strong> Tamim (ID: 2025-1-60-050)<br>
     <strong>📅 Semester:</strong> Spring 2025<br>
     <strong>⏱ Time:</strong> 30 Minutes<br>
     <strong>📌 Marks:</strong> 20</p>

  <div class="section">
    <h2>🚩 Problem 1: Bonus Marks Based on Attendance</h2>
    <h3>📝 Problem Statement</h3>
    <p>In the CSE 103 course, students receive bonus marks based on their attendance percentage.</p>

    <h3>🔹 Bonus Policy</h3>
    <table>
      <tr><th>Attendance (%)</th><th>Bonus Marks</th></tr>
      <tr><td>More than 95%</td><td>2</td></tr>
      <tr><td>More than 85%</td><td>1.5</td></tr>
      <tr><td>At least 75%</td><td>1</td></tr>
      <tr><td>Less than 75%</td><td>0</td></tr>
    </table>

    <h3>✅ Tasks</h3>
    <ul>
      <li>Take the attendance of 50 students and store it in an array <code>A</code>.</li>
      <li>Calculate bonus marks and store them in array <code>B</code>.</li>
      <li>Print the average bonus marks received by the students.</li>
    </ul>

    <h3>💡 Solution Strategy</h3>
    <p>Use two <code>float</code> arrays. Loop through each student’s attendance and use <code>if-else</code> to assign bonus marks. Then calculate the average.</p>

    <h3>📎 Code Preview</h3>
    <pre><code>
#include &lt;stdio.h&gt;

int main() {
    float attendance[50], bonus[50], totalBonus = 0;
    for (int i = 0; i &lt; 50; i++) {
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
    </code></pre>
  </div>

  <div class="section">
    <h2>🚩 Problem 2: Grocery Shop Inventory Tracker</h2>
    <h3>📝 Problem Statement</h3>
    <p>A grocery shop keeps track of items using a 2D array where each row contains:</p>
    <ul>
      <li><code>Column 0</code>: Quantity in stock</li>
      <li><code>Column 1</code>: Price per unit</li>
    </ul>

    <h3>✅ Tasks</h3>
    <ul>
      <li>Read the number of items (assume 15).</li>
      <li>Input quantity and price for each item.</li>
      <li>Calculate total quantity and total stock value.</li>
      <li>Identify item with the lowest stock value (quantity × price).</li>
    </ul>

    <h3>💡 Solution Strategy</h3>
    <p>Use a 2D array <code>items[15][2]</code>. Loop to compute totals and find the item with the smallest value using comparison logic.</p>

    <h3>📎 Code Preview</h3>
    <pre><code>
#include &lt;stdio.h&gt;

int main() {
    int items[15][2], totalQty = 0, totalVal = 0, minVal = 0, minIndex = 0;
    for (int i = 0; i &lt; 15; i++) {
        scanf("%d%d", &items[i][0], &items[i][1]);
        int value = items[i][0] * items[i][1];
        totalQty += items[i][0];
        totalVal += value;
        if (i == 0 || value &lt; minVal) {
            minVal = value;
            minIndex = i;
        }
    }
    printf("Total Quantity: %d\n", totalQty);
    printf("Total Stock Value: %d\n", totalVal);
    printf("Lowest Stock Value: Item %d\n", minIndex + 1);
    return 0;
}
    </code></pre>
  </div>

  <div class="section">
    <h2>🛠 Tools & Topics Used</h2>
    <ul>
      <li>Arrays (<code>1D</code> and <code>2D</code>)</li>
      <li>Loops (<code>for</code>)</li>
      <li>Conditional Logic (<code>if-else</code>)</li>
      <li>Mathematical Operations</li>
    </ul>
  </div>

  <div class="section">
    <h2>📚 Learning Outcome</h2>
    <ul>
      <li>✅ Strengthened understanding of arrays in C</li>
      <li>✅ Practiced logical thinking with real-life data</li>
      <li>✅ Improved basic C programming skills</li>
    </ul>
  </div>

  <div class="section">
    <h2>🔗 Connect With Me</h2>
    <p>📧 Email: <a href="mailto:2025-1-60-142@std.ewubd.edu">2025-1-60-142@std.ewubd.edu</a><br>
       💼 LinkedIn: <a href="https://www.linkedin.com/in/taskin-tamim/" target="_blank">linkedin.com/in/taskin-tamim</a></p>
  </div>

  <p class="quote">“Practice makes progress. From arrays to algorithms — one step at a time.”</p>

</body>
</html>
