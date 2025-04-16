### Data Analysis Assignment: Analyzing Federal Government Project Bids in Nigeria with Excel Pivot Tables

#### Objective
In this assignment, you will analyze a dataset of bids submitted for federal government projects in Nigeria using Excel pivot tables. You will practice creating pivot tables, applying filters, combining data from multiple pivot tables, and interpreting results to answer questions relevant to government project management. This exercise will help you develop skills in data summarization, filtering, and analysis while exploring real-world applications in Nigeria.

#### Dataset
You are provided with a dataset of bids submitted for federal government projects in Nigeria. The dataset is structured as follows and should be entered into an Excel worksheet starting at cell A1:

| Project Category        | Bid Amount   | Won or Lost | Budget Tier         | Potential Revenue |
|-------------------------|--------------|-------------|---------------------|-------------------|
| ROAD CONSTRUCTION       | ₦250,000,000 | Lost        | ₦50M to ₦100M       | ₦450,000,000      |
| ROAD CONSTRUCTION       | ₦275,000,000 | Won         | ₦100M to ₦150M      | ₦800,000,000      |
| ROAD CONSTRUCTION       | ₦150,000,000 | Lost        | ₦150M to ₦200M      | ₦900,000,000      |
| ICT INFRASTRUCTURE      | ₦200,000,000 | Lost        | ₦150M to ₦200M      | ₦350,000,000      |
| HEALTH + EDUCATION      | ₦180,000,000 | Lost        | Above ₦200M         | ₦500,000,000      |
| HEALTH + EDUCATION      | ₦220,000,000 | Won         | ₦100M to ₦150M      | ₦500,000,000      |
| HEALTH + EDUCATION      | ₦120,000,000 | Lost        | ₦150M to ₦200M      | ₦750,000,000      |
| HEALTH + EDUCATION      | ₦130,000,000 | Won         | ₦50M to ₦100M       | ₦850,000,000      |
| HEALTH + EDUCATION      | ₦500,000,000 | Lost        | Below ₦50M          | ₦400,000,000      |

- **Project Category**: The type of federal government project (e.g., "ROAD CONSTRUCTION", "ICT INFRASTRUCTURE", "HEALTH + EDUCATION").
- **Bid Amount**: The amount bid for the project in Naira (₦).
- **Won or Lost**: Indicates if the bid was "Won" or "Lost".
- **Budget Tier**: The budget range for the project, as categorized by the Federal Ministry of Budget and Planning.
- **Potential Revenue**: The potential revenue (in Naira) if the project is won, representing the economic impact or contract value.

#### Background
The Federal Government of Nigeria is investing in infrastructure, technology, and social services to achieve the goals of the Economic Sustainability Plan (ESP). Your task is to analyze bids submitted by contractors for federal projects across three categories: Road Construction (e.g., federal highways), ICT Infrastructure (e.g., broadband deployment), and Health + Education (e.g., building hospitals and schools). Your analysis will help the government understand the financial potential and success rates of these bids to inform future procurement strategies.

#### Assignment Tasks
Complete the following tasks in Excel. Show your work by submitting your Excel file with all pivot tables, calculations, and answers clearly labeled.

1. **Prepare the Data**:
   - Enter the dataset into an Excel worksheet starting at cell A1.
   - Convert the data into an Excel Table (Insert > Table) to make it easier to work with.

2. **Task 1: Summarize Potential Revenue by Project Category**:
   - Create a pivot table starting at cell **A12** to calculate the total **Potential Revenue** for each **Project Category**.
   - Format the Potential Revenue as Currency with the Naira symbol (₦). You can use the "Accounting" format and change the symbol to ₦ in the Format Cells options.
   - Label the pivot table clearly (e.g., add a title above it in cell A11: "Total Potential Revenue by Project Category").

3. **Task 2: Calculate Winning Bid Amounts Using a Filter**:
   - Create a second pivot table starting at cell **D12** to calculate the total **Bid Amount** for each **Project Category**, but only for projects marked as "Won".
   - Use the **Won or Lost** field in the Filter area to filter for "Won" bids.
   - Format the Bid Amount as Currency with the Naira symbol (₦).
   - Label the pivot table clearly (e.g., add a title above it in cell D11: "Winning Bid Amounts by Project Category").

4. **Task 3: Combine Results into a Single Table**:
   - Create a combined table starting at cell **A16** with the following columns: **Project Category**, **Potential Revenue**, and **Winning Bid Amount**.
   - Use the first pivot table for the Project Category and Potential Revenue columns.
   - For the Winning Bid Amount column, use a formula (e.g., VLOOKUP or INDEX/MATCH) to dynamically pull the values from the second pivot table. This ensures the table updates if the filter in the second pivot table changes.
   - Format all monetary values as Currency with the Naira symbol (₦).
   - Add a title above the table in cell A15: "Combined Summary Table for Federal Projects".

5. **Task 4: Analyze Success Rates**:
   - Create a third pivot table starting at cell **G12** to calculate the success rate of bids for each **Project Category**.
   - Use the pivot table to count the number of "Won" and "Lost" bids for each Project Category.
   - Calculate the success rate as the number of "Won" bids divided by the total number of bids for each category. You can do this manually in a separate table or column next to the pivot table.
   - Label the pivot table clearly (e.g., add a title above it in cell G11: "Bid Success Rate Analysis").

6. **Task 5: Answer Business Questions**:
   Answer the following questions based on your analysis. Provide your answers in a text box or a separate sheet in the Excel file, clearly labeled as "Task 5 Answers".
   a. Which Project Category has the highest total Potential Revenue for the federal government?
   b. Which Project Category has the highest total Winning Bid Amount?
   c. What is the success rate (number of "Won" bids divided by total bids) for each Project Category?
   d. Based on the Potential Revenue and Winning Bid Amounts, which Project Category appears to be the most strategic for the federal government to prioritize in future budgets? Justify your answer considering economic impact and bid success.
   e. How does the Budget Tier impact the Potential Revenue? Create a pivot table to summarize Potential Revenue by Budget Tier and provide a brief interpretation (place this pivot table at cell A21 and label it "Potential Revenue by Budget Tier").

#### Deliverables
- Submit your Excel file with:
  - The original dataset in A1:E9.
  - All pivot tables and the combined table as specified.
  - Answers to the business questions in a text box or separate sheet.
- Ensure all tables are clearly labeled, and monetary values are formatted as Currency with the Naira symbol (₦).

#### Grading Criteria
- **Correctness (40%)**: Pivot tables, calculations, and answers are accurate.
- **Excel Skills (30%)**: Proper use of pivot tables, filters, and formulas (e.g., VLOOKUP for combining tables).
- **Presentation (20%)**: Tables are clearly labeled, formatted, and easy to read.
- **Analysis (10%)**: Thoughtful interpretation of results, especially for question 5d.

#### Tips
- Use the Filter area in pivot tables to isolate "Won" bids without modifying the original data.
- If a Project Category has no "Won" bids, ensure your formula for the combined table handles this (e.g., returns ₦0).
- Double-check your formatting to ensure the Naira symbol (₦) is used consistently.
- For question 5d, consider both the economic impact (Potential Revenue) and the likelihood of winning bids (success rate) when making your recommendation.

---

### Supporting Information for the Instructor
Below is a quick reference for the expected results, which you can use to guide students or check their work. These are based on the modified Nigerian dataset.

#### Task 1: Total Potential Revenue by Project Category (A12)
| Row Labels        | Sum of Potential Revenue |
|-------------------|--------------------------|
| ROAD CONSTRUCTION | ₦2,150,000,000           |
| ICT INFRASTRUCTURE| ₦350,000,000             |
| HEALTH + EDUCATION| ₦3,000,000,000           |

#### Task 2: Winning Bid Amounts by Project Category (D12)
| Row Labels        | Sum of Bid Amount |
|-------------------|-------------------|
| ROAD CONSTRUCTION | ₦275,000,000      |
| ICT INFRASTRUCTURE| ₦0                |
| HEALTH + EDUCATION| ₦350,000,000      |

#### Task 3: Combined Summary Table (A16)
| Project Category   | Potential Revenue  | Winning Bid Amount |
|--------------------|--------------------|--------------------|
| ROAD CONSTRUCTION  | ₦2,150,000,000     | ₦275,000,000       |
| ICT INFRASTRUCTURE | ₦350,000,000       | ₦0                 |
| HEALTH + EDUCATION | ₦3,000,000,000     | ₦350,000,000       |

#### Task 4: Bid Success Rate Analysis (G12)
- **Pivot Table**:
| Row Labels        | Lost | Won | Grand Total |
|-------------------|------|-----|-------------|
| ROAD CONSTRUCTION | 2    | 1   | 3           |
| ICT INFRASTRUCTURE| 1    | 0   | 1           |
| HEALTH + EDUCATION| 3    | 2   | 5           |

- **Success Rates**:
  - ROAD CONSTRUCTION: 1/3 ≈ 33.33%
  - ICT INFRASTRUCTURE: 0/1 = 0.00%
  - HEALTH + EDUCATION: 2/5 = 40.00%

#### Task 5: Answers to Business Questions
a. **Highest Total Potential Revenue**:
   - HEALTH + EDUCATION with ₦3,000,000,000.

b. **Highest Total Winning Bid Amount**:
   - HEALTH + EDUCATION with ₦350,000,000.

c. **Success Rates**:
   - ROAD CONSTRUCTION: 33.33%
   - ICT INFRASTRUCTURE: 0.00%
   - HEALTH + EDUCATION: 40.00%

d. **Most Strategic Project Category**:
   - HEALTH + EDUCATION appears to be the most strategic. It has the highest Potential Revenue (₦3,000,000,000), the highest Winning Bid Amount (₦350,000,000), and the highest success rate (40%). This suggests that bids in this category are more likely to succeed and have a significant economic impact, aligning with federal priorities like improving healthcare and education access.

e. **Potential Revenue by Budget Tier (A21)**:
   - **Pivot Table**:
   | Row Labels        | Sum of Potential Revenue |
   |-------------------|--------------------------|
   | ₦50M to ₦100M     | ₦1,300,000,000           |
   | ₦100M to ₦150M    | ₦1,300,000,000           |
   | ₦150M to ₦200M    | ₦2,000,000,000           |
   | Above ₦200M       | ₦500,000,000             |
   | Below ₦50M        | ₦400,000,000             |

   - **Interpretation**: Projects in the ₦150M to ₦200M budget tier have the highest total Potential Revenue (₦2,000,000,000), indicating that mid-range projects may offer the most significant economic impact. However, the ₦50M to ₦100M and ₦100M to ₦150M tiers also have substantial revenue potential (₦1,300,000,000 each), suggesting that a mix of budget tiers can maximize overall impact.

---