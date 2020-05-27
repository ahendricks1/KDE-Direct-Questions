# Austin Hendricks
## KDE Direct Questions

### Ordered Binary Tree
My initial thought was to separate my tree struct from the .c file to maintain readability, however, I only needed one simple struct so I kept it within the .c file. Next, I implemented a quick and simple insert function that reflected the prototype given. I was struggling to come up with a way to keep track of the same tree without returning it due to the insert being a void type, so I reached out to a professor who recommended I change the insert method to use a double pointer for the struct tree_t instead. Finally, I decided to traverse the tree in order and simply print the values. I understand that I was given a specific prototype to follow, however, I was unsure of how to continue without making the recommended change.

### Maximal Contiguous Sum
Before I explain the process of solving this issue, I'd like to state that I have never touched JavaScript, so my initial time was spent getting some basic syntax under my belt. So, starting this problem off, I realized that attempting to think it out was quite difficult, so I had to draw the example array and walk through it. After drawing it out, I was able to write the majority of the solution, getting stuck dealing with the temporary sum (cur_sum). I assumed that a nested for loop would be necessary to keep track of stepping through the array, although I know this immediately constricts the complexity. I don't believe this is by any means the fastest implementation, but the steps I used are what made the most sense when drawing it out, even if it is a bit brutish. 

### Array Bitpacking