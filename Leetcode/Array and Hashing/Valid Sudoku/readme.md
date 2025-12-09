# Valid Sudoku – Explanation

This problem simply checks whether the given Sudoku board is currently valid or not.  
We do not have to complete or solve the Sudoku.

## What the Code Does

### 1. Rows, Columns, and Boxes Trackers
The code creates three things:
- 9 sets for rows  
- 9 sets for columns  
- 9 sets for the 3×3 boxes  

These sets help track which numbers have appeared so far.

---

### 2. Loop Through Each Cell
Your code goes through every cell of the 9×9 grid.

- If the cell is '.', it skips it because empty cells don’t matter.
- If the cell has a digit (1–9), then the code checks that digit.

---

### 3. Check for Duplicates
For the current digit:
- First, it checks whether the number already exists in the **same row**.
- Then in the **same column**.
- Then in the **3×3 box** it belongs to.

If the number is already present in any of these three places,  
the Sudoku is invalid → return false immediately.

---

### 4. Insert the Digit
If the number was not found in row, column, or box:
- The number is added into the corresponding row-set
- Added into the column-set
- And added into the box-set  
so that future cells can detect duplicates.

---

### 5. If Whole Grid Is Checked
If the entire board is scanned without finding any duplicate,  
then the Sudoku board is valid → return true.

---

## Why This Method Works
- A Sudoku becomes invalid only if the same digit repeats in a row, column, or box.
- Sets allow fast checking: O(1) for lookup.
- Since the board size is fixed (9×9), runtime is constant.
