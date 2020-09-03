Hey Jimmy.

Ran out of time on the home stretch....guess I really did bite off a bit more than I could chew in 4 weeks HAHAHA.

Anywhere here is the low down:

TileMaps: BIG CHECK
AIPathing: Check
JSON Save and Load: I do load all of my tiles and Sprites through a JSON so half Check?
SpriteSheets: DoubleCheck
StateMachine: Half Check? I do have states though there are no function pointer I used overloaded Updates on an enum switch state
Enemy HealthBars : I do have the code in mind for them however I dont have the scene for a pokemon battle implemented so no check
Score Display: Check
Particles: No check...damn and I had so many IDEAS!

Note: I did manage to use a vector for the variants in each tile info, I had to make sure the JSON was in numerical order and then 
when masking for the variant (which is base 16) I divided it by 16 and subtracted 1 for the index of the correct variant.
Note Note: I used a Canvas class for the maps to save on draw calls rather then calling draw on literally thousands of tiles

Hint try and walk up and out of pallet town...I did add another map for your adventuring...though sadly I did not have time to add the wild encounters. 

Controls are Arrow keys and "WASD"

Oh yes I do have track the player state as well thought not implemented, it would simply sent the pathing destination to the players index plus the absolute value of the players
direction vector.y for NPCs or just the players index for wild pokemon tiles. This way if the NPC or Wild tile hits an obsticle and calls the pathfinder it will always path to
the same destination until it reaches the player.

And, NO MEM LEAKS or HEAP CORRUPTIONS FINALLY!!

Anyway thanks a bunch for this semester Jimmy, it was super difficult learning all this from scratch but I learned a ton!!

Hope you enjoy,

Now I'm going to go to sleep for an hour so or die in the washroom hahaha.

Cheers
Brian M.