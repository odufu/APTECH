
### Class Note: Mastering Pivot Tables in Excel for Data Analysis

**Date:** April 17, 2025  
**Course:** Introduction to Data Analysis  
**Instructor:** Joel Odufu
**Topic:** Advanced Pivot Table Techniques: Dragging Fields and Using Single vs. Multiple Pivot Tables

---

#### Introduction
Welcome to today’s class on advanced pivot table techniques in Excel! We’ve previously analyzed NaijaMart sales data to summarize sales, filter customer feedback, and identify trends. Today, we’ll focus on two key skills:  
1. **Where to drag fields** (Rows, Columns, Filters, Values) to structure your pivot table effectively.  
2. **When to use a single pivot table, multiple pivot tables, or combine them** for a comprehensive analysis.  

We’ll use the NaijaMart dataset as our primary example, but I’ll also reference other use cases—like school fee payments, market sales, and transportation data—to show how these techniques apply across different scenarios in Nigeria. By the end of this session, you’ll be able to design pivot tables for various business questions and decide on the best approach for your analysis.

---

#### Sample Dataset: NaijaMart Sales Data (Expanded)
We’ll use an expanded version of the NaijaMart sales dataset, which tracks sales across three cities: Lagos, Abuja, and Port Harcourt. Enter the data into an Excel worksheet starting at cell A1:

| Transaction ID | Branch Location | Product Category   | Sales Amount (NGN) | Payment Method | Customer Feedback (1-5) | Date of Sale  | Salesperson  |
|----------------|-----------------|--------------------|--------------------|----------------|-------------------------|---------------|--------------|
| T001           | Lagos           | Groceries          | 25,000             | Cash           | 4                       | 01/04/2025    | Amaka        |
| T002           | Abuja           | Electronics        | 150,000            | Card           | 3                       | 02/04/2025    | Chidi        |
| T003           | Port Harcourt   | Household          | 45,000             | Mobile App     | 5                       | 03/04/2025    | Fatima       |
| T004           | Lagos           | Groceries          | 30,000             | Card           | 4                       | 04/04/2025    | Amaka        |
| T005           | Abuja           | Clothing           | 20,000             | Cash           | 2                       | 05/04/2025    | Chidi        |
| T006           | Port Harcourt   | Electronics        | 200,000            | Card           | 4                       | 06/04/2025    | Fatima       |
| T007           | Lagos           | Household          | 35,000             | Mobile App     | 3                       | 07/04/2025    | Tunde        |
| T008           | Abuja           | Groceries          | 28,000             | Cash           | 5                       | 08/04/2025    | Chidi        |
| T009           | Port Harcourt   | Clothing           | 15,000             | Card           | 3                       | 09/04/2025    | Fatima       |
| T010           | Lagos           | Electronics        | 180,000            | Card           | 4                       | 10/04/2025    | Amaka        |
| T011           | Abuja           | Household          | 40,000             | Mobile App     | 4                       | 11/04/2025    | Tunde        |
| T012           | Port Harcourt   | Groceries          | 32,000             | Cash           | 5                       | 12/04/2025    | Fatima       |

- **Transaction ID**: Unique identifier for each sale.
- **Branch Location**: The city (Lagos, Abuja, Port Harcourt).
- **Product Category**: The type of product sold.
- **Sales Amount (NGN)**: The sale amount in Nigerian Naira.
- **Payment Method**: How the customer paid.
- **Customer Feedback (1-5)**: A rating from 1 (poor) to 5 (excellent).
- **Date of Sale**: The date of the transaction.
- **Salesperson**: The employee who handled the sale.

**Step 1: Prepare the Data**  
- Enter the dataset into Excel starting at A1.  
- Convert the data into an Excel Table: Select A1:H13, go to **Insert** > **Table**, ensure "My table has headers" is checked, and click **OK**.  
- Format "Sales Amount (NGN)" as Currency (NGN) and "Date of Sale" as a date.

---

#### Section 1: Understanding Where to Drag Fields in a Pivot Table

Pivot tables have four key areas where you can drag fields: **Rows**, **Columns**, **Filters**, and **Values**. Choosing where to drag fields depends on the structure of your data and the business question you’re addressing. Let’s explore each area with examples from NaijaMart and other use cases.

##### **Rows Area**
- **Purpose**: Lists categories vertically, ideal for primary grouping or hierarchical categorization.
- **Example Question (NaijaMart)**: “What are the total sales for each Branch Location?”
- **How to Do It**:
  1. Select the table (A1:H13).
  2. Go to **Insert** > **PivotTable**, choose "Existing Worksheet", set the location to A15, and click **OK**.
  3. Drag **Branch Location** to the **Rows** area.
  4. Drag **Sales Amount (NGN)** to the **Values** area (set to **Sum**).
- **Result** (at A15):

| Branch Location | Sum of Sales Amount (NGN) |
|-----------------|---------------------------|
| Abuja           | 238,000                   |
| Lagos           | 270,000                   |
| Port Harcourt   | 292,000                   |

- **Other Use Case (School Fee Payment Document)**: In a school fee payment document, we use the school fees as the metric and the class (e.g., JSS1, JSS2, SSS1) as the primary grouping. Drag **Class** to Rows and **School Fees** to Values (set to Sum) to see total fees paid per class.
  - **Scenario**: A school in Abuja wants to know how much fee revenue each class generates to plan budget allocations.
- **Other Use Case (Market Sales)**: In a market sales dataset from Alaba Market, drag **Vendor Name** to Rows and **Revenue** to Values (Sum) to see how much each vendor has sold.
  - **Scenario**: A market manager wants to identify top-performing vendors to reward them.

**Why Rows?** Rows are best when you want to list categories as the main focus of your analysis, such as branches, classes, or vendors.

##### **Columns Area**
- **Purpose**: Displays categories horizontally, perfect for comparing categories side by side or creating a matrix.
- **Example Question (NaijaMart)**: “How do sales vary by Product Category for each Branch Location?”
- **How to Do It**:

- Aptech Want to know the quotient of understand of the pivot table by the course of studies for each student
- Aptech wants to know the quotient of understanding of the pivot table for each student
- Aptech wants to know the quotient of understanding of the pivot table By the course of study


  1. Using the pivot table at A15:
     - Drag **Product Category** to the **Columns** area.
     - Keep **Branch Location** in Rows and **Sales Amount (NGN)** in Values.
- **Result** (updated at A15):

| Branch Location | Clothing   | Electronics | Groceries | Household | Grand Total |
|-----------------|------------|-------------|-----------|-----------|-------------|
| Abuja           | 20,000     | 150,000     | 28,000    | 40,000    | 238,000     |
| Lagos           |            | 180,000     | 55,000    | 35,000    | 270,000     |
| Port Harcourt   | 15,000     | 200,000     | 32,000    | 45,000    | 292,000     |

- **Other Use Case (School Fee Payment Document)**: Drag **Payment Method** (e.g., Cash, Bank Transfer) to Columns to compare how fees are paid across classes.
  - **Scenario**: The school wants to see if certain classes prefer specific payment methods, which can inform payment system improvements.
- **Other Use Case (Transportation Data)**: In a dataset of danfo bus operations in Lagos, drag **Route** (e.g., Oshodi to Ikeja) to Columns to compare ticket sales across routes for each driver (in Rows).
  - **Scenario**: A transport company wants to identify which routes are most profitable for each driver.

**Why Columns?** Columns are ideal for side-by-side comparisons, creating a matrix that shows how a metric varies across categories, like product categories, payment methods, or routes.

##### **Filters Area**
- **Purpose**: Allows you to focus on specific subsets of data interactively without altering the table’s structure.
- **Example Question (NaijaMart)**: “What’s the average Customer Feedback for each Payment Method, but only for feedback scores ≥ 4?”
- **How to Do It**:
  1. Create a new pivot table at H15: **Insert** > **PivotTable**, set location to H15.
  2. Drag **Payment Method** to the **Rows** area.
  3. Drag **Customer Feedback (1-5)** to the **Values** area (set to **Average**).
  4. Drag **Customer Feedback (1-5)** to the **Filters** area.
  5. Click the filter dropdown in H14, select **Number Filters** > **Greater Than or Equal To**, enter 4, and click **OK**.
- **Result** (at H15):

| Payment Method | Average of Customer Feedback (1-5) |
|----------------|------------------------------------|
| Card           | 4.0                                |
| Cash           | 4.7                                |
| Mobile App     | 4.5                                |

- **Other Use Case (School Fee Payment Document)**: Drag **Payment Status** (e.g., Paid, Pending) to Filters to analyze fees paid by class only for fully paid students.
  - **Scenario**: The school wants to focus on students who have completed payments to assess cleared revenue.
- **Other Use Case (Market Sales)**: Drag **Product Type** (e.g., Electronics, Food Items) to Filters to analyze sales for specific products across vendors.
  - **Scenario**: A market analyst wants to focus on electronics sales to plan a tech fair.

**Why Filters?** Filters are best when you need to zoom in on a subset of data, such as high feedback scores, paid fees, or specific product types, while keeping the table’s layout intact.

##### **Values Area**
- **Purpose**: Calculates the metric you’re analyzing, such as sums, averages, or counts.
- **Example Question (NaijaMart)**: “How many transactions did each Salesperson handle, and what’s their total Sales Amount?”
- **How to Do It**:
  1. Create a new pivot table at A19: **Insert** > **PivotTable**, set location to A19.
  2. Drag **Salesperson** to the **Rows** area.
  3. Drag **Transaction ID** to the **Values** area (set to **Count**).
  4. Drag **Sales Amount (NGN)** to the **Values** area (set to **Sum**).
- **Result** (at A19):

| Salesperson | Count of Transaction ID | Sum of Sales Amount (NGN) |
|-------------|-------------------------|---------------------------|
| Amaka       | 3                       | 235,000                   |
| Chidi       | 3                       | 198,000                   |
| Fatima      | 4                       | 292,000                   |
| Tunde       | 2                       | 75,000                    |

- **Other Use Case (School Fee Payment Document)**: Drag **School Fees** to Values (Sum) to calculate total fees, and **Student ID** to Values (Count) to count the number of students per class.
  - **Scenario**: The school wants to know both the revenue and the number of students paying fees in each class.
- **Other Use Case (Transportation Data)**: Drag **Ticket Sales** to Values (Sum) to calculate total revenue, and **Passenger Count** to Values (Count) to track the number of passengers per driver.
  - **Scenario**: A transport company wants to measure both revenue and passenger volume per driver.

**Why Values?** Values is where you define the metrics you’re analyzing, such as sales amounts, fee totals, or passenger counts, and choose the appropriate aggregation (Sum, Average, Count).

---

#### Section 2: Single vs. Multiple Pivot Tables

Sometimes a single pivot table can answer your question, but other times you need multiple pivot tables—or to combine them for a unified view. Let’s explore when to use each approach, with examples from NaijaMart and other use cases.

##### **When to Use a Single Pivot Table**
- **Best Case**: Your analysis has a unified focus, with the same filters and aggregations for all metrics, and the layout remains clear.
- **Example Question (NaijaMart)**: “What’s the total Sales Amount by Date of Sale, grouped by week?”
- **How to Do It**:
  1. Create a pivot table at A24: **Insert** > **PivotTable**, set location to A24.
  2. Drag **Date of Sale** to the **Rows** area.
  3. Drag **Sales Amount (NGN)** to the **Values** area (set to **Sum**).
  4. Group dates by week: Right-click a date > **Group** > **Days** > Set Number of Days to 7 > **OK**.
- **Result** (at A24):

| Date of Sale   | Sum of Sales Amount (NGN) |
|----------------|---------------------------|
| 01/04/2025     | 625,000                   |
| 08/04/2025     | 175,000                   |

- **Other Use Case (School Fee Payment Document)**: Drag **Class** to Rows and **School Fees** to Values (Sum) to calculate total fees per class, grouped by **Payment Date** (in Rows, grouped by month).
  - **Scenario**: The school wants to track monthly fee collections per class to monitor payment trends.
- **Other Use Case (Market Sales)**: Drag **Vendor Name** to Rows and **Revenue** to Values (Sum) to see total sales per vendor, with no conflicting filters.
  - **Scenario**: A market manager wants a simple summary of vendor performance over a month.

**Why Single?** A single pivot table works when you have one metric, one grouping, and no conflicting filters, keeping the analysis straightforward and uncluttered.

##### **When to Use Multiple Pivot Tables**
- **Best Case**: You need different filters, aggregations, or layouts for different metrics, or a single table would be too complex or unclear.
- **Example Question (NaijaMart)**: “What’s the total Sales Amount by Branch Location (unfiltered), and the average Customer Feedback by Branch Location (only for feedback scores ≥ 4)?”
- **How to Do It**:
  1. **First Pivot Table (Sales Amount, unfiltered)** at A29:
     - Drag **Branch Location** to **Rows**.
     - Drag **Sales Amount (NGN)** to **Values** (set to **Sum**).
  2. **Second Pivot Table (Customer Feedback, filtered)** at D29:
     - Drag **Branch Location** to **Rows**.
     - Drag **Customer Feedback (1-5)** to **Values** (set to **Average**).
     - Drag **Customer Feedback (1-5)** to **Filters**, filter for ≥ 4.
- **Results**:
  - **A29 (Sales Amount)**:

| Branch Location | Sum of Sales Amount (NGN) |
|-----------------|---------------------------|
| Abuja           | 238,000                   |
| Lagos           | 270,000                   |
| Port Harcourt   | 292,000                   |

  - **D29 (Customer Feedback, filtered ≥ 4)**:

| Branch Location | Average of Customer Feedback (1-5) |
|-----------------|------------------------------------|
| Abuja           | 4.5                                |
| Lagos           | 4.0                                |
| Port Harcourt   | 4.7                                |

- **Other Use Case (School Fee Payment Document)**: Create one pivot table for total **School Fees** by **Class** (unfiltered), and another for the count of **Students** by **Class** (filtered for **Payment Status** = Paid).
  - **Scenario**: The school wants to compare total fees (including pending payments) with the number of students who have fully paid, to assess payment compliance.
- **Other Use Case (Transportation Data)**: Create one pivot table for **Ticket Sales** by **Driver** (unfiltered), and another for **Passenger Count** by **Driver** (filtered for **Route** = Oshodi to Ikeja).
  - **Scenario**: A transport company wants to see overall revenue per driver but also focus on passenger volume for a specific high-traffic route.

**Why Multiple?** Multiple pivot tables are necessary when filters or aggregations differ between metrics, such as unfiltered sales vs. filtered feedback, or total fees vs. paid students.

##### **When to Combine Pivot Tables**
- **Best Case**: You need a unified view of metrics calculated separately due to different filters or layouts, often for reporting or comparison.
- **Example Question (NaijaMart)**: “Combine the Sales Amount and filtered Customer Feedback into one table for a branch performance summary.”
- **How to Do It**:
  1. At A34, create a table with headers: "Branch Location", "Total Sales Amount", "Average Customer Feedback (Score ≥ 4)".
  2. Copy Branch Location and Sales Amount from the first pivot table (A29:B31) to A35:B37.
  3. In C35, use a formula to pull Customer Feedback from the second pivot table (D29:E31):
     ```
     =IFERROR(VLOOKUP(A35, $D$29:$E$31, 2, FALSE), 0)
     ```
     Copy this formula down to C36:C37.
- **Result** (at A34):

| Branch Location | Total Sales Amount | Average Customer Feedback (Score ≥ 4) |
|-----------------|--------------------|---------------------------------------|
| Abuja           | 238,000            | 4.5                                   |
| Lagos           | 270,000            | 4.0                                   |
| Port Harcourt   | 292,000            | 4.7                                   |

- **Other Use Case (School Fee Payment Document)**: Combine total **School Fees** by **Class** (unfiltered) with the count of **Students** (filtered for Paid) into one table to show both revenue and payment compliance side by side.
  - **Scenario**: The school principal wants a single report to see how much revenue each class generates and how many students have paid in full.
- **Other Use Case (Transportation Data)**: Combine **Ticket Sales** by **Driver** (unfiltered) with **Passenger Count** (filtered for a specific route) to assess both overall revenue and route-specific performance.
  - **Scenario**: A transport manager wants a unified view to decide which drivers to assign to high-traffic routes.

**Why Combine?** Combining pivot tables creates a cohesive report for stakeholders, like NaijaMart managers or school principals, by merging separately calculated metrics into one view.

---

#### Classwork Exercises

1. **Exercise 1: Dragging Fields**  
   - **Question**: “How many transactions occurred per Salesperson, broken down by Payment Method?”  
   - **Task**: Create a pivot table at A39. Decide where to drag fields to answer this question.  
   - **Expected Result**:

| Salesperson | Card | Cash | Mobile App | Grand Total |
|-------------|------|------|------------|-------------|
| Amaka       | 2    | 1    |            | 3           |
| Chidi       | 1    | 2    |            | 3           |
| Fatima      | 2    | 1    | 1          | 4           |
| Tunde       |      |      | 2          | 2           |

   - **Solution**: Drag **Salesperson** to Rows (primary grouping), **Payment Method** to Columns (for comparison), **Transaction ID** to Values (set to Count, as the metric).

2. **Exercise 2: Single Pivot Table**  
   - **Question**: “What’s the total Sales Amount and average Customer Feedback by Product Category?”  
   - **Task**: Create a single pivot table at A45 to answer this question.  
   - **Expected Result**:

| Product Category | Sum of Sales Amount (NGN) | Average of Customer Feedback (1-5) |
|------------------|---------------------------|------------------------------------|
| Clothing         | 35,000                    | 2.5                                |
| Electronics      | 530,000                   | 3.7                                |
| Groceries        | 115,000                   | 4.5                                |
| Household        | 120,000                   | 4.0                                |

   - **Solution**: Drag **Product Category** to Rows (primary grouping), **Sales Amount (NGN)** to Values (Sum), **Customer Feedback (1-5)** to Values (Average). No filters needed, so a single table works.

3. **Exercise 3: Multiple Pivot Tables and Combining**  
   - **Question**: “What’s the total Sales Amount by Branch Location (unfiltered), and the count of transactions by Branch Location (only for Mobile App payments)?” Combine into one table.  
   - **Task**: Create two pivot tables at A51 and D51, then combine them at A56.  
   - **Expected Results**:
     - **A51 (Sales Amount)**:

| Branch Location | Sum of Sales Amount (NGN) |
|-----------------|---------------------------|
| Abuja           | 238,000                   |
| Lagos           | 270,000                   |
| Port Harcourt   | 292,000                   |

     - **D51 (Transactions, Mobile App only)**:

| Branch Location | Count of Transaction ID |
|-----------------|-------------------------|
| Abuja           | 1                       |
| Lagos           | 1                       |
| Port Harcourt   | 1                       |

     - **A56 (Combined)**:

| Branch Location | Total Sales Amount | Mobile App Transactions |
|-----------------|--------------------|-------------------------|
| Abuja           | 238,000            | 1                       |
| Lagos           | 270,000            | 1                       |
| Port Harcourt   | 292,000            | 1                       |

   - **Solution**: 
     - A51: Drag **Branch Location** to Rows, **Sales Amount (NGN)** to Values (Sum).
     - D51: Drag **Branch Location** to Rows, **Transaction ID** to Values (Count), **Payment Method** to Filters (select Mobile App).
     - A56: Use VLOOKUP to combine: In C57, `=IFERROR(VLOOKUP(A57, $D$51:$E$53, 2, FALSE), 0)`.

4. **Exercise 4: Apply to a New Use Case (School Fee Payment Document)**  
   - **Question**: “In a school fee payment dataset, what’s the total School Fees by Class (unfiltered), and the average Parent Satisfaction Score by Class (only for scores ≥ 4)?” Combine into one table.  
   - **Sample Data** (at A62):

| Student ID | Class | School Fees (NGN) | Payment Status | Parent Satisfaction (1-5) |
|------------|-------|-------------------|----------------|---------------------------|
| S001       | JSS1  | 50,000            | Paid           | 4                         |
| S002       | JSS2  | 55,000            | Pending        | 3                         |
| S003       | SSS1  | 60,000            | Paid           | 5                         |
| S004       | JSS1  | 50,000            | Paid           | 4                         |
| S005       | JSS2  | 55,000            | Paid           | 4                         |

   - **Task**: Create two pivot tables at A67 and D67, then combine them at A72.  
   - **Expected Results**:
     - **A67 (School Fees)**:

| Class | Sum of School Fees (NGN) |
|-------|--------------------------|
| JSS1  | 100,000                  |
| JSS2  | 110,000                  |
| SSS1  | 60,000                   |

     - **D67 (Satisfaction, Score ≥ 4)**:

| Class | Average of Parent Satisfaction (1-5) |
|-------|--------------------------------------|
| JSS1  | 4.0                                  |
| JSS2  | 4.0                                  |
| SSS1  | 5.0                                  |

     - **A72 (Combined)**:

| Class | Total School Fees | Average Parent Satisfaction (Score ≥ 4) |
|-------|-------------------|-----------------------------------------|
| JSS1  | 100,000           | 4.0                                     |
| JSS2  | 110,000           | 4.0                                     |
| SSS1  | 60,000            | 5.0                                     |

   - **Solution**: Follow the same steps as NaijaMart: create separate pivot tables for unfiltered fees and filtered satisfaction, then combine using VLOOKUP.

---

#### Conclusion
This class note has shown you how to:
- Decide where to drag fields (Rows, Columns, Filters, Values) based on your analysis needs, using examples from NaijaMart, school fees, market sales, and transportation.
- Determine when to use a single pivot table, multiple pivot tables, or combine them, with practical scenarios across different domains.
- Apply these concepts to real-world data in a Nigerian context, making your analyses relevant and actionable.
