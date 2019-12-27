#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;

const int C=5;

int main(void){
	POINT p;
	while(1){
		if(kbhit()){
			char t=getch();
			GetCursorPos(&p);
			int dx=0,dy=0;
			switch(t){
				case 'a':dx=-1;dy=0;break;
				case 'd':dx=1;dy=0;break;
				case 'w':dx=0;dy=-1;break;
				case 's':dx=0;dy=1;break;
				case ';':return 0;
			}
			SetCursorPos(p.x+dx*C,p.y+dy*C);
		}
	}
}
