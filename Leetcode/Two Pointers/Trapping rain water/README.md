## Trapping Rain Water

- we are given an array of non negative integer representing elevation map where each bars' width is 1
- return the total water trapped

## Approach

- use two pointer l and r at opposite ends
- find the max height at each pointer
- calculate the water where height is less: maxheight - currentheight
- now again find the maxheight at that section: max(maxheight,height[++l] or height[--r])