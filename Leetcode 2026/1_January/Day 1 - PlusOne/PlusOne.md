# ➕ PLUS ONE (Array Digits)

## 🔹 Problem

A number is given as an array of digits.
Add **1** to the number and return the updated digits.

### Example

```
Input:  [1,2,3]
Output: [1,2,4]

Input:  [9,9,9]
Output: [1,0,0,0]
```

---

## 🧠 Key Idea (Think Like Normal Addition)

- Add **1** from the **last digit**
- If digit becomes **10**, make it **0** and carry **1**
- Continue moving left
- If carry is still left at the end, add **1** at the front

---

## 🔑 Steps to Remember

1. Start with `carry = 1`
2. Traverse digits from **right to left**
3. Add carry to current digit
4. If digit becomes 10 → set it to 0 and keep carry
5. If digit < 10 → stop (no carry)
6. If carry still exists → insert 1 at beginning

---

## ✅ Simple & Rememberable Solution

```cpp
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int carry = 1;   // add one

        for (int i = digits.size() - 1; i >= 0; i--) {
            digits[i] += carry;

            if (digits[i] == 10) {
                digits[i] = 0;
                carry = 1;
            } else {
                carry = 0;
                break;
            }
        }

        if (carry == 1) {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};
```

---

## 🧪 Dry Run (Quick)

### Input

```
[9,9]
```

### Steps

```
9 + 1 = 10 → 0, carry 1
9 + 1 = 10 → 0, carry 1
carry left → insert 1
```

### Output

```
[1,0,0]
```

---

## ⏱️ Complexity

- **Time:** O(n)
- **Space:** O(1) (in-place)

---

## 🧠 One-Line Memory Trick

> Add from last digit, handle carry, and if carry remains, add 1 at the front.

---

## 🎯 Exam-Ready Summary

- Works like manual addition
- Handles edge case of all 9s
- No number conversion needed

---
