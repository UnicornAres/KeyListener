#include <thread>
#include <iostream>
#include <windows.h>

using namespace std;

bool keyPressed = false;

void keyListener(){
    while (true){
        keyPressed = (GetKeyState(VK_SHIFT) & 0x8000) != 0;
    }
}

int main(){

    thread thread(keyListener);
    thread.detach();

    while(true){
        if (!keyPressed){
            cout << "0";
        } else {
            cout << "1";
        }
        this_thread::sleep_for(chrono::milliseconds(100));
    }

    return 0;
}
