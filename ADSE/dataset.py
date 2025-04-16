import pandas as pd

# Sales Data
sales_data = pd.DataFrame({
    "Transaction_ID": range(1001, 1021),
    "Date": pd.date_range(start="2024-01-01", periods=20, freq='D'),
    "Region": ["North", "South", "East", "West"] * 5,
    "Product_Category": ["Electronics", "Clothing", "Groceries", "Furniture"] * 5,
    "Sales_Amount": [500, 150, 200, 800, 600, 300, 450, 700, 120, 550, 310, 690, 900, 250, 1000, 2000, 350, 780, 430, 650],
    "Profit_Margin": [0.2, 0.15, 0.1, 0.25, 0.22, 0.18, 0.2, 0.3, 0.1, 0.23, 0.12, 0.28, 0.35, 0.15, 0.4, 0.5, 0.18, 0.27, 0.22, 0.31]
})

# Employee Attendance Data
attendance_data = pd.DataFrame({
    "Employee_ID": range(2001, 2011),
    "Employee_Name": ["John Doe", "Jane Smith", "Ali Khan", "Maria Gonzalez", "Wei Zhang", "Daniel Brown", "Aisha Yusuf", "Carlos Mendez", "Elena Petrova", "James Wilson"],
    "Department": ["HR", "Sales", "IT", "Marketing", "Finance", "HR", "Sales", "IT", "Marketing", "Finance"],
    "Days_Present": [20, 18, 22, 19, 21, 23, 17, 20, 22, 24],
    "Performance_Rating": [4.5, 3.8, 4.2, 3.5, 4.7, 4.8, 3.2, 4.0, 4.3, 4.9]
})

# Financial Planning Data
financial_data = pd.DataFrame({
    "Year": range(2024, 2030),
    "Initial_Investment": [10000, 12000, 15000, 18000, 22000, 25000],
    "Expected_Return_Rate": [0.08, 0.07, 0.09, 0.1, 0.08, 0.09],
    "Loan_Amount": [5000, 7000, 8000, 10000, 12000, 15000],
    "Loan_Interest_Rate": [0.05, 0.06, 0.05, 0.07, 0.06, 0.05]
})

# Save to an Excel file
file_path = "/mnt/data/Excel_Classwork_Assignments.xlsx"
with pd.ExcelWriter(file_path) as writer:
    sales_data.to_excel(writer, sheet_name="Sales_Data", index=False)
    attendance_data.to_excel(writer, sheet_name="Employee_Attendance", index=False)
    financial_data.to_excel(writer, sheet_name="Financial_Planning", index=False)

file_path
