# 🔹 LeetCode 961 — N-Repeated Element in Size 2N Array

---

## 📌 Problem Summary

You are given an integer array `nums` with the following properties:

- `nums.length = 2 * n`
- `nums` contains exactly **n + 1 unique elements**
- **One element appears exactly `n` times**
- All other elements appear **once**

### 🎯 Goal

Return the element that is repeated `n` times.

---

## 🧪 Examples

```text
Input:  [1, 2, 3, 3]
Output: 3

Input:  [2, 1, 2, 5, 3, 2]
Output: 2

Input:  [5, 1, 5, 2, 5, 3, 5, 4]
Output: 5
```

---

## 🔍 Key Observations

- Total elements = `2n`
- Unique elements = `n + 1`
- One element appears **n times**
- Remaining **n elements are all distinct**

👉 This means **half the array consists of the same number**.

---

## 🧠 Core Insight (Most Important)

Because:

- There are **n copies** of the repeated element
- Only **n distinct other elements**

There are **not enough unique elements** to keep all repeated values far apart.

### 📌 Using the **Pigeonhole Principle**:

> At least two occurrences of the repeated element must appear **within 3 indices of each other**.

---

## ✅ Guaranteed Condition

For some index `i`, **one of the following must be true**:

```cpp
nums[i] == nums[i + 1]
nums[i] == nums[i + 2]
nums[i] == nums[i + 3]
```

So checking up to `i + 3` is **sufficient and guaranteed to work**.

---

## 🧠 Memory Trick

> **“In a 2N array, N copies of one element cannot stay far apart — they must collide within 3 steps.”**

---

## 🧑‍💻 Optimized C++ Solution (O(1) Space)

```cpp
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (i + 1 < n && nums[i] == nums[i + 1]) return nums[i];
            if (i + 2 < n && nums[i] == nums[i + 2]) return nums[i];
            if (i + 3 < n && nums[i] == nums[i + 3]) return nums[i];
        }
        return -1; // never reached
    }
};
```

---

## ⚙️ Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)` (no extra data structures)

---

## 🎯 Interview Explanation (1 Line)

> “Since one element appears N times in a 2N-sized array, two of its occurrences must appear within 3 indices.”

---

## 📝 When to Use This Approach

- When **extra space is not allowed**
- When interviewer asks for **optimized logic**
- When constraints guarantee **one element repeated many times**

---

If you want, I can also:

- Convert this into a **LeetCode discussion post**
- Add **handwritten-style intuition**
- Create a **one-page DSA revision PDF**
