# 📊 LeetCode Problem:  Reverse Words in a String

## 🧩 Problem Statement

Given an input string `s`, **reverse** the order of the **words**.
A word is defined as a sequence of **non-space characters**. The words in `s` will be separated by at least **one space**.<br><br>
<i> Return a string of the words in **reverse** order concatenated by a **single space**.</i>
<br> <br>
> **Note :**
> - `s` may contain leading or **trailing spaces** or multiple spaces between two words. The returned **string** should only have a **single space** separating the **words**. Do not include any extra spaces.



## 🧠 Approach: Traversing + Space Handling

- Split words manually while traversing — no built-in split.

- Reverse the entire array to flip word positions.

- Rebuild the string by iterating through each word and adding spaces correctly.


## ✅ Example Walkthrough

### Example 1

##### Input: s = "the sky is blue"
##### Output: "blue is sky the"


### Example 2

##### Input: s = "  hello world  "
##### Output: "world hello"

##### Explanation: 
<pre> 
  Your reversed string should not contain leading or trailing spaces.

</pre>

### Example 3

##### Input:  s = "a good   example"
##### Output: "example good a"

##### Explanation: 
<pre> 
  You need to reduce multiple spaces between two words to a single space in the reversed string.
  
</pre>

## 🛠️ Constraints

- `1 <= s.length <= 10^4`
- `s` contains English letters (**upper-case** and **lower-case**), **digits**, and `spaces ' '`.
- There is at least one word in `s`.
