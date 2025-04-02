Mystery Maze Game - README.txt
------------------------------

This is the accompanying README file for the Mystery Maze game project, completed for COMP1000 (70% Extended Project).

Maze Generation
The maze used in this game is generated using the recursive backtracking algorithm. This involves selecting a node as the start point, and branching off from this position until a node has no further movements in the randomly chosen direction, then the algorithm starts retracing its steps, again randomly until the maze is formed. The same algorithm is used whether the user is playing the 21x21 standard difficulty maze or the 31x31 harder difficulty maze.

Playing The Game
This game is mostly controlled using the W A S D keys, with each one corresponding to its respective movement. 
	- W = UP
	- A = LEFT
	- S = DOWN
	- D = RIGHT
During gameplay, these keys need to be used to move the players character (O) around the maze, completing puzzles and finding the finish point of the maze. On each turn:
	- A direction will need to be played by the user,
	- The enter key will need to be pressed to validate the user's choice,
	- The game will update with the current movement, and allow the player to complete any required tasks, and alert them of 	any punishments necessary due to the previous movement. 

Puzzles
The game cannot be completed without the user interacting with puzzles within the maze. These take the form of simple maths questions which the player needs to answer correctly to continue. If the player answers incorrectly, they will incur penalties.

Enemies
Enemy movement is random and these can be found throughout the game, denoted as 'B' and 'X'. When hit by the player, the enemies cause the resources they have collected so far to be reset and the game then continues as normal, just requiring the player to recollect al the required resources to complete the game. 

Resources
During the playing of the maze game, the user is required to collect 5 resources, placed randomly around the grid. These resources are necessary to finish the maze, as the end point only is enabled if all 5 resources are collected first. 

Saving the game
The game can be saved either:
	- at the end of each maze completed, or
	- on a standard turn by the user by keying in the 'm' character
The game is saved in a file of the users choosing, and the stats are saved in a file called stats.txt. This records:
	- The current x and y position of the user
	- The current number of resources needed to complete the game
	- The time left to complete

Finishing the game
When the game is completed, the user will be shown a screen asking if they want to save their current progress, or not. Choosing yes allows the scores to be saved also. The file name can be specified after choosing to save the game. The file will be created in the current working directory. 

