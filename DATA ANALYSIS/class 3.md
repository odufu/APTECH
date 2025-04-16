
### Class Note: Data Analysis with Excel for NaijaMart Sales

**Date:** April 16, 2025  
**Course:** Introduction to Data Analysis  
**Instructor:** Joel Odufu  
**Topic:** Analyzing Sales Data with Excel Pivot Tables in a Nigerian Business Context

---

#### Introduction
In today’s class, we will analyze sales data from NaijaMart, a Nigerian supermarket chain, using Excel pivot tables and other data analysis tools. This exercise will help you develop practical skills in summarizing, filtering, and interpreting data, which are essential for making informed business decisions. By the end of this session, you will be able to create pivot tables, combine data from multiple sources, analyze trends, and apply data analytics concepts to real-world scenarios.

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

#### Learning Objectives
1. Summarize sales data using pivot tables.
2. Apply filters to analyze specific subsets of data.
3. Combine data from multiple pivot tables for comprehensive analysis.
4. Analyze trends over time.
5. Interpret data to answer business questions in a Nigerian context.

#### Class Exercise: Step-by-Step Instructions and Solutions

##### Task 1: Summarize Sales Amount by Branch Location and Product Category
**Objective**: Create a pivot table to summarize the total Sales Amount by Branch Location and Product Category.

**Steps**:
1. **Prepare the Data**:
   - Enter the dataset into Excel starting at A1.
   - Select A1:F13, go to **Insert** > **Table**, ensure "My table has headers" is checked, and click **OK**.
   - Format "Sales Amount (NGN)" as Currency (NGN) and "Date of Sale" as a date.

2. **Create the Pivot Table**:
   - Select any cell in the table (e.g., A1).
   - Go to **Insert** > **PivotTable**, choose "Existing Worksheet", set the location to A14, and click **OK**.
   - In the PivotTable Fields pane:
     - Drag **Branch Location** to the **Rows** area.
     - Drag **Product Category** to the **Columns** area.
     - Drag **Sales Amount (NGN)** to the **Values** area (set to **Sum**).
   - Format the values as Currency (NGN): Select the Sales Amount values, go to **Home** > **Number Format** > **Currency**, and choose NGN.

**Solution** (at A14):

| Branch Location | Clothing   | Electronics | Groceries | Household | Grand Total |
|-----------------|------------|-------------|-----------|-----------|-------------|
| Abuja           | 20,000     | 150,000     | 28,000    | 40,000    | 238,000     |
| Lagos           |            | 180,000     | 55,000    | 35,000    | 270,000     |
| Port Harcourt   | 15,000     | 200,000     | 32,000    | 45,000    | 292,000     |
| Grand Total     | 35,000     | 530,000     | 115,000   | 120,000   | 800,000     |

**Explanation**:
- **Abuja**: Clothing (20,000), Electronics (150,000), Groceries (28,000), Household (40,000) = 238,000
- **Lagos**: Electronics (180,000), Groceries (25,000 + 30,000 = 55,000), Household (35,000) = 270,000
- **Port Harcourt**: Clothing (15,000), Electronics (200,000), Groceries (32,000), Household (45,000) = 292,000

---

##### Task 2: Analyze Customer Feedback by Payment Method with a Filter
**Objective**: Calculate the average Customer Feedback score for each Payment Method, filtering for scores ≥ 4.

**Steps**:
1. **Create the Pivot Table**:
   - Select the data range (A1:F13).
   - Go to **Insert** > **PivotTable**, choose "Existing Worksheet", set the location to H14, and click **OK**.
   - In the PivotTable Fields pane:
     - Drag **Payment Method** to the **Rows** area.
     - Drag **Customer Feedback (1-5)** to the **Values** area (set to **Average**: click the dropdown > **Value Field Settings** > **Average**).
     - Drag **Customer Feedback (1-5)** to the **Filters** area.
   - Click the filter dropdown in H13, select **Number Filters** > **Greater Than or Equal To**, enter 4, and click **OK**.

2. **Format the Results**:
   - Format the "Average of Customer Feedback" column to one decimal place: Select the values, go to **Home** > **Number Format** > **Number**, and set decimal places to 1.

**Solution** (at H14):

| Payment Method | Average of Customer Feedback (1-5) |
|----------------|------------------------------------|
| Card           | 4.0                                |
| Cash           | 4.7                                |
| Mobile App     | 4.5                                |

**Explanation**:
- **Rows Included (Feedback ≥ 4)**:
  - Card: 4 (Lagos Groceries), 4 (Port Harcourt Electronics), 4 (Lagos Electronics) → (4+4+4)/3 = 4.0
  - Cash: 4 (Lagos Groceries), 5 (Abuja Groceries), 5 (Port Harcourt Groceries) → (4+5+5)/3 = 4.7
  - Mobile App: 5 (Port Harcourt Household), 4 (Abuja Household) → (5+4)/2 = 4.5

---

##### Task 3: Combine Sales and Feedback Data into a Single Table
**Objective**: Create a table combining Total Sales Amount and Average Customer Feedback by Branch Location.

**Steps**:
1. **Create the Pivot Table**:
   - Select the data range (A1:F13).
   - Go to **Insert** > **PivotTable**, choose "Existing Worksheet", set the location to A18, and click **OK**.
   - In the PivotTable Fields pane:
     - Drag **Branch Location** to the **Rows** area.
     - Drag **Sales Amount (NGN)** to the **Values** area (set to **Sum**).
     - Drag **Customer Feedback (1-5)** to the **Values** area (set to **Average**).
   - Format "Sum of Sales Amount" as Currency (NGN) and "Average of Customer Feedback" to one decimal place.

2. **Adjust the Table**:
   - Rename the headers in A18:C18 to "Branch Location", "Total Sales Amount", and "Average Customer Feedback".

**Solution** (at A18):

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

---

##### Task 4: Analyze Sales Trends Over Time
**Objective**: Analyze the total Sales Amount by Date of Sale, grouped by week.

**Steps**:
1. **Create the Pivot Table**:
   - Select the data range (A1:F13).
   - Go to **Insert** > **PivotTable**, choose "Existing Worksheet", set the location to A23, and click **OK**.
   - In the PivotTable Fields pane:
     - Drag **Date of Sale** to the **Rows** area.
     - Drag **Sales Amount (NGN)** to the **Values** area (set to **Sum**).
   - Group the dates by week:
     - Right-click any date in the pivot table (e.g., 01/04/2025).
     - Select **Group**, choose **Days**, set Number of Days to 7, and click **OK**.

2. **Format the Results**:
   - Format the "Sum of Sales Amount" as Currency (NGN).

**Solution** (at A23):

| Date of Sale   | Sum of Sales Amount (NGN) |
|----------------|---------------------------|
| 01/04/2025     | 625,000                   |
| 08/04/2025     | 175,000                   |

**Explanation**:
- **Week 1 (01/04/2025 to 07/04/2025)**: 25,000 + 150,000 + 45,000 + 30,000 + 20,000 + 200,000 + 35,000 = 625,000
- **Week 2 (08/04/2025 to 12/04/2025)**: 28,000 + 15,000 + 180,000 + 40,000 + 32,000 = 175,000

---

##### Task 5: Answer Business Questions
**Objective**: Use the pivot tables to answer business questions.

**Steps**:
- Use the tables created in Tasks 1-4 to answer the following questions.
- Record your answers in a text box or a separate sheet labeled "Task 5 Answers".

**Solution** (in a text box or separate sheet labeled "Task 5 Answers"):

a. **Which Branch Location has the highest total Sales Amount?**
   - From the table at A18, Port Harcourt has the highest total Sales Amount at 292,000 NGN.

b. **Which Payment Method is associated with the highest average Customer Feedback score (for scores ≥ 4)?**
   - From the table at H14, Cash has the highest average Customer Feedback score at 4.7 (for scores ≥ 4).

c. **What is the trend in sales over the weeks?**
   - From the table at A23, sales decreased from 625,000 NGN in the first week (01/04/2025 to 07/04/2025) to 175,000 NGN in the second week (08/04/2025 to 12/04/2025). This indicates a downward trend, possibly due to fewer high-value purchases (e.g., Electronics) in the second week.

---

#### Data Analytics Theories Supporting This Classwork

The tasks in this classwork are grounded in several fundamental data analytics theories and concepts, which provide a theoretical foundation for the practical exercises. Below, I outline these theories and explain how they justify the activities.

1. **Descriptive Analytics**:
   - **Theory**: Descriptive analytics involves summarizing historical data to understand what has happened. It’s the foundation of business intelligence and often uses techniques like aggregation, summarization, and visualization.
   - **Application**: In Task 1, summarizing Sales Amount by Branch Location and Product Category using a pivot table is a classic example of descriptive analytics. It helps NaijaMart understand which branches and product categories are driving sales, providing a snapshot of past performance.

2. **Data Segmentation and Filtering (Customer Segmentation Theory)**:
   - **Theory**: Customer segmentation involves dividing a customer base into groups based on shared characteristics to better understand behavior. Filtering is a key technique in segmentation, allowing analysts to focus on specific subsets of data.
   - **Application**: Task 2 filters Customer Feedback scores ≥ 4 to analyze satisfaction levels for high-performing transactions. This aligns with customer segmentation by identifying transactions with high satisfaction, which can inform targeted marketing or service improvements.

3. **Data Integration and Aggregation**:
   - **Theory**: Data integration involves combining data from multiple sources or analyses to provide a unified view. Aggregation (e.g., summing or averaging) reduces data complexity while preserving key insights.
   - **Application**: Task 3 combines Total Sales Amount and Average Customer Feedback into a single table. This integration allows NaijaMart to see both financial performance and customer satisfaction side by side, enabling a more holistic analysis of branch performance.

4. **Time Series Analysis**:
   - **Theory**: Time series analysis examines data points collected over time to identify trends, seasonality, or patterns. Grouping data by time intervals (e.g., weeks) is a common technique in time series analysis.
   - **Application**: Task 4 groups sales data by week to identify trends. The observed downward trend from 625,000 NGN to 175,000 NGN highlights the importance of monitoring sales over time, which can inform inventory planning or promotional strategies.

5. **Customer Satisfaction Metrics (Net Promoter Score Framework)**:
   - **Theory**: Customer satisfaction metrics, such as those derived from the Net Promoter Score (NPS) framework, measure customer experience and loyalty. High scores (e.g., 4 or 5 on a 5-point scale) often indicate promoters who are likely to recommend the business.
   - **Application**: Task 2 focuses on Customer Feedback scores ≥ 4, aligning with the NPS concept of identifying promoters. Understanding which Payment Methods are associated with high satisfaction (e.g., Cash at 4.7) can guide NaijaMart in optimizing payment experiences.

6. **Business Intelligence (BI) and Decision Support**:
   - **Theory**: Business Intelligence involves using data analysis tools to support decision-making. BI often includes answering key business questions to guide strategy, such as identifying top-performing segments or trends.
   - **Application**: Task 5’s business questions (e.g., highest Sales Amount, trends) are rooted in BI principles. The answers provide actionable insights for NaijaMart, such as focusing on Port Harcourt for sales growth or investigating the sales drop in the second week.

---

#### Conclusion
This class note demonstrates how to use Excel for data analysis in a Nigerian business context, using NaijaMart’s sales data as a case study. The tasks align with key data analytics theories, such as descriptive analytics, time series analysis, and customer satisfaction metrics, ensuring that the practical skills you’ve learned are grounded in theoretical concepts. These skills are directly applicable to real-world scenarios, such as analyzing sales performance, improving customer satisfaction, and making data-driven decisions in a Nigerian retail environment.

**Next Steps**:
- Practice creating pivot tables with different datasets.
- Explore additional Excel features like calculated fields or charts to visualize trends.
- Apply these concepts to other Nigerian business scenarios, such as analyzing market sales or transportation data.
