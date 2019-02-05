# MouseLogger
C++ program that follows your mouse movements

The code captures your mouse pointer movements and stores them into 'locs.txt' .
The captured locations are inside an array called 'points' .Locations stored in 'points' can be used for repeating the movements of the mouse cursor .
I have used 'windows.h' header in c++ for getting and setting the location of cursor .
 [Link to windows headers guide](https://docs.microsoft.com/en-us/windows/desktop/winprog/using-the-windows-headers)

### Re-drawing 
Here is a demo of the code storing locations of cursor for a period of time while darwing something in paint and then it uses the stored locations to redraw what was drawn before.

![](http://s8.picofile.com/file/8351330676/1.gif)


By changing the accuracy you can determine how often locations will be stored if you use the acc=1 (less is better accuracy) then 1000 points will be stored in the array.
if you increase the 'acc' less points will be stored and as the result there will be lower accuracy in following the cursor.for capturing the movement for a longer period of time you can increase the size of array points.

