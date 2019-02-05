#define _WIN32_WINNT 0x0500 //RIGHT
#include <Windows.h>
#include<winuser.h>
#include<iostream>

using namespace std;

void clickDown(){

    INPUT Inputs[1] = {0};

    Inputs[0].type = INPUT_MOUSE;
    Inputs[0].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;

    SendInput(2, Inputs, sizeof(INPUT));

}

void clickUp(){

    INPUT Inputs[1] = {0};

    Inputs[0].type = INPUT_MOUSE;
    Inputs[0].mi.dwFlags = MOUSEEVENTF_LEFTUP;

    SendInput(1, Inputs, sizeof(INPUT));


}

int main()
{
    int n;//number of points to capture
    int waitBeforeNextPoint;//in milliseconds
    int acc;

    int wt=0;// wait time before capturing the movements
    cout<<"How accurate should it be? (1,2 or 3 ,one is the most accurate) "<<endl;
    cin>>acc;
    cout<<"How much should we wait before capturing the mouse movements? "<<endl;
    cin>>wt;


    if (acc==1)    waitBeforeNextPoint=10;
    else if(acc==2) waitBeforeNextPoint=30;
    else waitBeforeNextPoint=50;

    n=int(10000/(waitBeforeNextPoint));//run time will be the same but less points will be recorded


	POINT cursor;
	POINT points[n];

    //wait before capturing process
	Sleep(wt*1000);
    cout<<"Begin !"<<endl;
	for (int i=0;i < n;i++) {

		GetCursorPos(&cursor);//save cursor location
		points[i] = cursor;
		Sleep(waitBeforeNextPoint);

        if(i>n-200)cout<<"Almost there !"<<endl;
	}

    cout<<"\nCaptured the movements !"<<endl<<"How much should we wait before setting locations to cursor? "<<endl;
    cin>>wt;

    Sleep(wt*1000);

	for (int i=0;i < n;i++) {

		SetCursorPos(points[i].x,points[i].y);
		clickDown();
		Sleep(waitBeforeNextPoint);
	}

	clickUp();

    return 0;
}

