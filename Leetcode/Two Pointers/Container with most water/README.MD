## Container with most water

- we are given an array of height of length n. we are given n vertical lines of height[i]
- calculate the max water container can store between 2 line

## Approach 

- using two pointer l and r
- find the min height of l and r then,
- calculate distance between them
- now min height*distance is the water store between these to line
- using max function keep the maximun obtained
- if height of l > r then r-- else l++