## Valid Palindrome
 A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

## Approch

- I have first cleaned the string by removing all alpha numeric, for this i created a new string and traversed the input string by each chartacter is char is alpha numeric then concatinate to the new string

- then i used `Two Pointers` to solve

- by using two pointers: left and right i check if they are eqaul then chexk for remaining else return false
