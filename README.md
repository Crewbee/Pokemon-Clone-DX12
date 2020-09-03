# Pokemon-Clone-OpenGL
Pokemon Clone made using DirectX 12 and C++ - Restriction: Made it in 3 weeks
# Synopsis
In my second year of college I was learning how to code tilemapped 2D games in C++. The objectives for this game were as follows:

1. Create and link a shader program capable of sampling and displaying textures a data folder
2. Create a tilemap level for your game, with traversable and non-traversable tiles
3. Have a player character that can be moved by the user
4. Have AI controlled characters that can navigate the level using A-Star pathfinding method

The objectives I added for myself were:

5. Characters must be animated
6. Multiple Levels
7. Interactable tiles
8. I have to make a pokemon clone XD

As it was stated at the top, I only had 3 weeks to complete my work. Everything asside from the external libraries was written from scratch with little inspiration from the internet. In order to get what was completed done in the time I had I spent many sleepless nights writing and planning. I do want to continue building it out to it completion as it can't be considered a game yet. But, as a tribute to what can be done by one person, in a very small frame of time, and without an engine I wanted to post this for you all. 

# How to Play
If you want to play the game as it was at the end of the 3 week time limit, download the repo and run the .exe inside the folder named: Pokemon Game

If you want to see the progress of the current version it with have to be run in the debugger of Visual Studio using the .sln file.

I will update the repo with more up to date stand alone executables when I reach specific land marks.

# Highlights
Created a Resource manager that parses a json for tile info and creates textured tiles using coordinates from a sprite sheet

Created Sprite and Tile Managers for animated characters and level generation

Used bit shifting and short arrays to specify tile placement and position for levels

Used canvas layers for depth

# Future Development Plans
I do plan to continue adding to this framework to eventually finish out the Pokemon game.
