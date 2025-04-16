
### Class Exercise: Data Analysis with Excel for NaijaMart Sales

#### Objective
In this class exercise, you will analyze sales data from NaijaMart, a Nigerian supermarket chain, using Excel pivot tables and other data analysis tools. You will practice summarizing data, applying filters, combining results, and answering business questions to support decision-making. This exercise will help you build skills in Excel for real-world data analysis in a Nigerian business context.

#### Dataset
The dataset represents sales transactions from NaijaMart across three cities: Lagos, Abuja, and Port Harcourt. Enter the data into an Excel worksheet starting at cell A1:

| Branch Location | Product Category   | Sales Amount (NGN) | Payment Method | Customer Feedback (1-5) | Date of Sale  |
|-----------------|--------------------|--------------------|----------------|-------------------------|---------------|
| Lagos           | Groceries          | 25,000             | Cash           | 4                       | 01/04/2025    |
| Abuja           | Electronics        | 150,000            | Card           | 3                       | 02/04/2025    |
| Port Harcourt   | Household          | 45,000             | Mobile App     | 5                       | 03/04/2025    |
| Lagos           | Groceries          | 30,000             | Card           | 4                       | 04/04/2025    |
| Abuja           | Clothing           | 20,000             | Cash           | 2                       | 05/04/2025    |
| Port Harcourt   | Electronics        | 200,000            | Card           | 4                       | 06/04/2025    |
| Lagos           | Household          | 35,000             | Mobile App     | 3                       | 07/04/2025    |
| Abuja           | Groceries          | 28,000             | Cash           | 5                       | 08/04/2025    |
| Port Harcourt   | Clothing           | 15,000             | Card           | 3                       | 09/04/2025    |
| Lagos           | Electronics        | 180,000            | Card           | 4                       | 10/04/2025    |
| Abuja           | Household          | 40,000             | Mobile App     | 4                       | 11/04/2025    |
| Port Harcourt   | Groceries          | 32,000             | Cash           | 5                       | 12/04/2025    |

- **Branch Location**: The city where the sale occurred.
- **Product Category**: The type of product sold.
- **Sales Amount (NGN)**: The sale amount in Nigerian Naira.
- **Payment Method**: How the customer paid.
- **Customer Feedback (1-5)**: A rating from 1 (poor) to 5 (excellent).
- **Date of Sale**: The date of the transaction.

#### Instructions
Complete the following tasks in Excel. Show your work by submitting your Excel file with all pivot tables, calculations, and answers clearly labeled.

1. **Prepare the Data**:
   - Enter the dataset into Excel starting at cell A1.
   - Convert the data into an Excel Table for easier analysis.

2. **Task 1: Summarize Sales Amount by Branch Location and Product Category**:
   - Create a pivot table starting at cell A14 to summarize the total Sales Amount by Branch Location and Product Category.
   - Use Branch Location as the Rows area and Product Category as the Columns area.
   - Format the Sales Amount as Currency (NGN).

3. **Task 2: Analyze Customer Feedback by Payment Method with a Filter**:
   - Create a pivot table starting at cell H14 to calculate the average Customer Feedback score for each Payment Method.
   - Filter the pivot table to only include sales with a Customer Feedback score of 4 or higher.

4. **Task 3: Combine Sales and Feedback Data into a Single Table**:
   - Create a combined table starting at cell A18 with the columns: Branch Location, Total Sales Amount, and Average Customer Feedback.
   - Use formulas to dynamically pull data from the pivot tables.

5. **Task 4: Analyze Sales Trends Over Time**:
   - Create a pivot table starting at cell A23 to analyze the total Sales Amount by Date of Sale, grouped by week.

6. **Task 5: Answer Business Questions**:
   - Answer the following questions in a text box or separate sheet labeled "Task 5 Answers":
     a. Which Branch Location has the highest total Sales Amount?
     b. Which Payment Method is associated with the highest average Customer Feedback score (for scores ≥ 4)?
     c. What is the trend in sales over the weeks?

#### Deliverables
- Submit your Excel file with the dataset, pivot tables, combined table, and answers to the business questions.
- Ensure all monetary values are formatted as Currency (NGN).

---

### Step-by-Step Answers for Each Task

#### Task 1: Summarize Sales Amount by Branch Location and Product Category

**Steps**:
1. **Prepare the Data**:
   - Enter the dataset into Excel starting at A1 as shown.
   - Select A1:F13, go to **Insert** > **Table**, and ensure "My table has headers" is checked. Click **OK**.
   - Format the "Sales Amount (NGN)" column as Currency (NGN) and the "Date of Sale" column as a date.

2. **Create the Pivot Table**:
   - Select any cell in the table (e.g., A1).
   - Go to **Insert** > **PivotTable**, choose "Existing Worksheet", and set the location to A14. Click **OK**.
   - In the PivotTable Fields pane:
     - Drag **Branch Location** to the **Rows** area.
     - Drag **Product Category** to the **Columns** area.
     - Drag **Sales Amount (NGN)** to the **Values** area (ensure it’s set to **Sum**).
   - Format the values as Currency (NGN): Select the Sales Amount values, go to **Home** > **Number Format** > **Currency**, and choose NGN.

**Result** (at A14):

| Branch Location | Clothing   | Electronics | Groceries | Household | Grand Total |
|-----------------|------------|-------------|-----------|-----------|-------------|
| Abuja           | 20,000     | 150,000     | 28,000    | 40,000    | 238,000     |
| Lagos           |            | 180,000     | 55,000    | 35,000    | 270,000     |
| Port Harcourt   | 15,000     | 200,000     | 32,000    | 45,000    | 292,000     |
| Grand Total     | 35,000     | 530,000     | 115,000   | 120,000   | 800,000     |

#### Task 2: Analyze Customer Feedback by Payment Method with a Filter

**Steps**:
1. **Create the Pivot Table**:
   - Select the data range (A1:F13).
   - Go to **Insert** > **PivotTable**, choose "Existing Worksheet", and set the location to H14. Click **OK**.
   - In the PivotTable Fields pane:
     - Drag **Payment Method** to the **Rows** area.
     - Drag **Customer Feedback (1-5)** to the **Values** area (set to **Average** by clicking the dropdown > **Value Field Settings** > **Average**).
     - Drag **Customer Feedback (1-5)** to the **Filters** area.
   - Click the filter dropdown in H13, select **Number Filters** > **Greater Than or Equal To**, enter 4, and click **OK**.

2. **Format the Results**:
   - Format the "Average of Customer Feedback" column to one decimal place: Select the values, go to **Home** > **Number Format** > **Number**, and set decimal places to 1.

**Result** (at H14):

| Payment Method | Average of Customer Feedback (1-5) |
|----------------|------------------------------------|
| Card           | 4.0                                |
| Cash           | 4.7                                |
| Mobile App     | 4.5                                |

**Explanation**:
- Only rows with Customer Feedback ≥ 4 are included: 4s and 5s.
- Card: (4+4+4)/3 = 4.0 (Lagos Groceries, Port Harcourt Electronics, Lagos Electronics).
- Cash: (4+5+5)/3 = 4.7 (Lagos Groceries, Abuja Groceries, Port Harcourt Groceries).
- Mobile App: (5+4)/2 = 4.5 (Port Harcourt Household, Abuja Household).

#### Task 3: Combine Sales and Feedback Data into a Single Table

**Steps**:
1. **Create a Pivot Table for Sales Amount and Feedback**:
   - Select the data range (A1:F13).
   - Go to **Insert** > **PivotTable**, choose "Existing Worksheet", and set the location to A18. Click **OK**.
   - In the PivotTable Fields pane:
     - Drag **Branch Location** to the **Rows** area.
     - Drag **Sales Amount (NGN)** to the **Values** area (set to **Sum**).
     - Drag **Customer Feedback (1-5)** to the **Values** area (set to **Average**).
   - Format "Sum of Sales Amount" as Currency (NGN) and "Average of Customer Feedback" to one decimal place.

2. **Adjust the Table**:
   - Rename the headers in A18:C18 to "Branch Location", "Total Sales Amount", and "Average Customer Feedback".

**Result** (at A18):

| Branch Location | Total Sales Amount | Average Customer Feedback |
|-----------------|--------------------|---------------------------|
| Abuja           | 238,000            | 3.5                       |
| Lagos           | 270,000            | 3.8                       |
| Port Harcourt   | 292,000            | 4.3                       |

**Explanation**:
- **Total Sales Amount**:
  - Abuja: 150,000 + 20,000 + 28,000 + 40,000 = 238,000
  - Lagos: 25,000 + 30,000 + 35,000 + 180,000 = 270,000
  - Port Harcourt: 45,000 + 200,000 + 15,000 + 32,000 = 292,000
- **Average Customer Feedback**:
  - Abuja: (3+2+5+4)/4 = 3.5
  - Lagos: (4+4+3+4)/4 = 3.8
  - Port Harcourt: (5+4+3+5)/4 = 4.3

#### Task 4: Analyze Sales Trends Over Time

**Steps**:
1. **Create the Pivot Table**:
   - Select the data range (A1:F13).
   - Go to **Insert** > **PivotTable**, choose "Existing Worksheet", and set the location to A23. Click **OK**.
   - In the PivotTable Fields pane:
     - Drag **Date of Sale** to the **Rows** area.
     - Drag **Sales Amount (NGN)** to the **Values** area (set to **Sum**).
   - Group the dates by week:
     - Right-click any date in the pivot table (e.g., 01/04/2025).
     - Select **Group**, choose **Days**, set Number of Days to 7, and click **OK**.

2. **Format the Results**:
   - Format the "Sum of Sales Amount" as Currency (NGN).

**Result** (at A23):

| Date of Sale   | Sum of Sales Amount (NGN) |
|----------------|---------------------------|
| 01/04/2025     | 625,000                   |
| 08/04/2025     | 175,000                   |

**Explanation**:
- **Week 1 (01/04/2025 to 07/04/2025)**: 25,000 + 150,000 + 45,000 + 30,000 + 20,000 + 200,000 + 35,000 = 625,000
- **Week 2 (08/04/2025 to 12/04/2025)**: 28,000 + 15,000 + 180,000 + 40,000 + 32,000 = 175,000

#### Task 5: Answer Business Questions

**Answers** (in a text box or separate sheet labeled "Task 5 Answers"):

a. **Which Branch Location has the highest total Sales Amount?**
   - From the table at A18, Port Harcourt has the highest total Sales Amount at 292,000 NGN.

b. **Which Payment Method is associated with the highest average Customer Feedback score (for scores ≥ 4)?**
   - From the table at H14, Cash has the highest average Customer Feedback score at 4.7 (for scores ≥ 4).

c. **What is the trend in sales over the weeks?**
   - From the table at A23, sales decreased significantly from 625,000 NGN in the first week (01/04/2025 to 07/04/2025) to 175,000 NGN in the second week (08/04/2025 to 12/04/2025). This indicates a downward trend, possibly due to fewer high-value purchases (e.g., Electronics) in the second week.

---

### Summary for the Class
This exercise helps students:
- Practice creating and formatting pivot tables to summarize data.
- Use filters to analyze subsets of data (e.g., Customer Feedback ≥ 4).
- Combine data from multiple pivot tables using a single table.
- Analyze trends over time by grouping dates.
- Interpret data to answer business questions in a Nigerian context.
