# Requirements
1. Display
   ---
   |Symbol            |Description |
   | :--------------- | :--------- |
   |#                 |wall        |
   |0                 |feed        |
   |@                 |snake's head|
   |o                 |snake's tail|           
  
   Board can be created by quadratic array.
   - First and Last ros is filled with '#'.
   - First and Last col is filled with '#'.
   - Other elements is filled with ' '.   
  
   Snake's is located center at first.
   - Center position(ROW//2, COL//2) of array is filled with '@'.
  
   Snake's tail is located right side of the head.
   - Right side of center(ROW//2, COL//2 + 1) of array is filled with 'o'.
   
   Feed is randomly created in board.
   - Select random row, col by random library.
   - Feed is not created on wall, snake. Check board[row][col] == ' '.
  
   Display Board
   - make display_board function.

2. User input
   ---
    - arrow key: move 
    - p: pause
    - esc: exit   
    
    User preeses arrow key to control snake. When user press 'p', game is paused. When user press 'esc', game is done.

    
3. Game logic
   ---
    - snake move
    - collision
    - grow
    - speed up
    - score

Snake moving direction is depends on pressed arrow key. If there is no arrow key input, snake keeps going one direction. When snake have feed, snake is longer, speed up and score is counted. When snake encounters with self or wall, game is over.
