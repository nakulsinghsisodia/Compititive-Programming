# Longest Comman Sequence

- in this problem we have to find longest comman seq
- let say we are given: [3,1,5,7,2,9]
- here the lcs is would be [1,2,3] 
- we are to return the length of lcs, here it is 3
- we must solve it in O(n)

## Approach

- to solve this first, I have taken a unordered set
- insert all the element there to avoid duplicates
- now using iterator check if previous value of the element pointed by itr is in the set or not
    - if it's there then set streak=1 and increment the streak for elem+1 if it's there
    - if not then increment the itr
- use a maxStreak to find th maximun streak in cases for: [1,2,3,6,100,101]

