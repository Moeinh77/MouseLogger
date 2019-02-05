# MouseLogger
C++ program that follows your mouse movements

The code captures your mouse pointer movements and stores them into 'locs.txt' .
The captured locations are inside an array called 'points' .Locations stored in 'points' can be used for repeating the movements of the mouse cursor .
I have used 'windows.h' header in c++ for getting and setting the location of cursor .
 [Link to windows headers guide](https://docs.microsoft.com/en-us/windows/desktop/winprog/using-the-windows-headers)

Here is a demonstration of of how you can use this code to store the cursor postion while darwing in paint and then using it again to redraw what you had drawn before.

By changing the accuracy you can determine how often locations will be stored if you use the acc=1 (less is better accuracy) then 1000 points will be stored in the array.
if you increase the 'acc' less points will be stored and as the result there will be lower accuracy in following the cursor.for capturing the movement for a longer period of time you can increase the size of array points.

![](http://www.mediafire.com/view/zzbz6adqju2k92u/bandicam20190205121347307.gif)
