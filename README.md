# Pokemon-scripts

This was a way to see if I could automate some process while playing pokemon using the c language: I am using Linux and terminal as well as Xdotool
Im sure there are better ways to solve the problems , but as I am a beginner this is the best I came up with 

Fundamentally if i can get to the daycare and spam A, I can win almost every battle with some human aid, i.e choosing the right moves and swapping out pokemon anyways the principle works.

Oh yeah you may need to link the xdotool libary in terminal.

gcc spamA.c -lxdo -o spamA
gcc upDown.c -lxdo -o upDown
gcc grind.c -lxdo -o grind

I should mention that this will depend on what you input keys are for whatever emulator you are using and also these are rough inefficent solutions, but they do basically what I need them to do.
