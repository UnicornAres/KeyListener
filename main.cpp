#include <thread>
#include <iostream>
#include <windows.h>

using namespace std;

bool keyPressed = false;

int main(){

    while(true){
        keyPressed = (GetKeyState(VK_SHIFT) & 0x8000) != 0;
        if (!keyPressed){
            cout << "0";
        } else {
            cout << "1";
        }
        this_thread::sleep_for(chrono::milliseconds(100));
    }
}
