### Excel Exercise for Data Analysis Class

#### Objective
In this exercise, you’ll analyze a dataset of project bids to derive insights using Excel pivot tables. You’ll learn how to summarize data by project categories, calculate potential revenue, and determine winning bid amounts using filters, all without modifying the original dataset.

#### Dataset
The dataset contains information about project bids across different categories. The table is structured as follows:

| Project Category | Bid Amount | Won or Lost | Budget Tier       | Potential Revenue |
|------------------|------------|-------------|-------------------|-------------------|
| MKTG ONLY        | $103,000   | Lost        | $5,000 to $10,000 | $180,800.00       |
| MKTG ONLY        | $106,000   | Won         | $10,000 to $15,000| $321,600.00       |
| MKTG ONLY        | $51,000    | Lost        | $15,000 to $20,000| $334,764.00       |
| WEB ONLY         | $100,000   | Lost        | $15,000 to $20,000| $141,968.08       |
| MKTG + WEB       | $80,000    | Lost        | Above $20,000     | $219,461.00       |
| MKTG + WEB       | $90,000    | Won         | $10,000 to $15,000| $219,461.00       |
| MKTG + WEB       | $50,000    | Lost        | $15,000 to $20,000| $321,600.00       |
| MKTG + WEB       | $51,000    | Won         | $5,000 to $10,000 | $334,375.00       |
| MKTG + WEB       | $208,000   | Lost        | Below $5,000      | $176,748.00       |

- **Project Category**: The type of project (e.g., "MKTG ONLY", "WEB ONLY", "MKTG + WEB").
- **Bid Amount**: The amount bid for the project.
- **Won or Lost**: Indicates if the bid was "Won" or "Lost".
- **Budget Tier**: The budget range for the project.
- **Potential Revenue**: The potential revenue if the project is won.

#### Instructions
1. **Set Up the Data**:
   - Copy the dataset into an Excel worksheet starting at cell A1.
   - Ensure the data is formatted as a table (Insert > Table) for easier analysis.

2. **Task 1: Create a Pivot Table for Total Potential Revenue by Project Category**:
   - Create a pivot table starting at cell A12 to summarize the total **Potential Revenue** for each **Project Category**.
   - Place the pivot table in the same worksheet.
   - Format the Potential Revenue as Currency.

3. **Task 2: Create a Second Pivot Table for Winning Bid Amounts Using a Filter**:
   - Create a second pivot table starting at cell D12 to calculate the total **Bid Amount** for each **Project Category**, but only for projects marked as "Won".
   - Use the **Won or Lost** field in the Filter area to filter for "Won" bids.
   - Format the Bid Amount as Currency.

4. **Task 3: Combine the Results into a Single Table**:
   - Combine the results of the two pivot tables into a single table starting at cell A16 with the following columns: **Project Category**, **Potential Revenue**, and **Winning Bid Amount**.
   - Use formulas to dynamically pull the Winning Bid Amount from the second pivot table, ensuring the table updates if the filter changes.

5. **Task 4: Analyze the Data**:
   - Answer the following questions based on your combined table:
     a. Which Project Category has the highest total Potential Revenue?
     b. Which Project Category has the highest total Winning Bid Amount?
     c. What is the success rate (number of "Won" bids divided by total bids) for each Project Category?

#### Deliverables
- Submit your Excel file with the pivot tables and combined table.
- Provide answers to the analysis questions in a text box or separate sheet.

---

### Answers to the Exercise

#### Task 1: Pivot Table for Total Potential Revenue
- **Steps**:
  1. Select the data range (A1:E9).
  2. Go to **Insert** > **PivotTable**, choose "Existing Worksheet", and set the location to A12.
  3. In the PivotTable Fields pane:
     - Drag **Project Category** to the **Rows** area.
     - Drag **Potential Revenue** to the **Values** area (set to **Sum**).
  4. Format the "Sum of Potential Revenue" column as Currency.
- **Result** (at A12):

| Row Labels   | Sum of Potential Revenue |
|--------------|--------------------------|
| MKTG ONLY    | $837,164.00              |
| MKTG + WEB   | $1,271,645.00            |
| WEB ONLY     | $141,968.08              |

#### Task 2: Pivot Table for Winning Bid Amounts
- **Steps**:
  1. Select the data range (A1:E9) again.
  2. Go to **Insert** > **PivotTable**, choose "Existing Worksheet", and set the location to D12.
  3. In the PivotTable Fields pane:
     - Drag **Project Category** to the **Rows** area.
     - Drag **Bid Amount** to the **Values** area (set to **Sum**).
     - Drag **Won or Lost** to the **Filters** area.
  4. Filter for "Won" in the dropdown (likely in D11 or E11).
  5. Format the "Sum of Bid Amount" column as Currency.
- **Result** (at D12):

| Row Labels   | Sum of Bid Amount |
|--------------|-------------------|
| MKTG ONLY    | $106,000.00       |
| MKTG + WEB   | $141,000.00       |
| WEB ONLY     | $0.00             |

#### Task 3: Combined Table
- **Steps**:
  1. At cell A16, create the headers: "Project Category", "Potential Revenue", "Winning Bid Amount".
  2. Copy the Project Category and Potential Revenue from the first pivot table (A13:B15) to A17:B19.
  3. In C17 (Winning Bid Amount for "MKTG ONLY"), use a formula to pull the corresponding value from the second pivot table:
     ```
     =IFERROR(VLOOKUP(A17, $D$13:$E$15, 2, FALSE), 0)
     ```
     - `A17` is "MKTG ONLY".
     - `$D$13:$E$15` is the range of the second pivot table.
     - Copy this formula down to C18 and C19 for "MKTG + WEB" and "WEB ONLY".
  4. Format the numbers in columns B and C as Currency.
- **Result** (at A16):

| Project Category | Potential Revenue | Winning Bid Amount |
|------------------|-------------------|--------------------|
| MKTG ONLY        | $837,164.00       | $106,000.00        |
| MKTG + WEB       | $1,271,645.00     | $141,000.00        |
| WEB ONLY         | $141,968.08       | $0.00              |

#### Task 4: Analysis Questions
a. **Which Project Category has the highest total Potential Revenue?**
   - From the combined table, "MKTG + WEB" has the highest Potential Revenue at $1,271,645.00.

b. **Which Project Category has the highest total Winning Bid Amount?**
   - From the combined table, "MKTG + WEB" has the highest Winning Bid Amount at $141,000.00.

c. **What is the success rate (number of "Won" bids divided by total bids) for each Project Category?**
   - To calculate this, create another pivot table to count "Won" bids and total bids:
     1. Create a new pivot table from the data (A1:E9), place it at G12.
     2. Drag **Project Category** to the **Rows** area.
     3. Drag **Won or Lost** to the **Columns** area.
     4. Drag **Bid Amount** to the **Values** area, but set it to **Count** (Value Field Settings > Count).
   - **Result** (at G12):

| Row Labels   | Lost | Won | Grand Total |
|--------------|------|-----|-------------|
| MKTG ONLY    | 2    | 1   | 3           |
| MKTG + WEB   | 3    | 2   | 5           |
| WEB ONLY     | 1    | 0   | 1           |

   - **Success Rate**:
     - MKTG ONLY: 1 Won / 3 Total = 1/3 ≈ 33.33%
     - MKTG + WEB: 2 Won / 5 Total = 2/5 = 40.00%
     - WEB ONLY: 0 Won / 1 Total = 0/1 = 0.00%

---

### Summary for Students
This exercise demonstrates how to:
- Use pivot tables to summarize data by categories.
- Apply filters to analyze specific subsets of data (e.g., "Won" bids).
- Combine multiple pivot tables for a comprehensive analysis.
- Calculate success rates using counts in pivot tables.
