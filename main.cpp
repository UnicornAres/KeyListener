#include <thread>
#include <iostream>
#include <windows.h>

using namespace std;
using std::thread;

int main(){
    while(true){
        if ((GetKeyState(VK_SHIFT) & 0x8000) != 0){
            cout << "1";
        } else {
            cout << "0";
        }
        this_thread::sleep_for(chrono::milliseconds(100));
    }
}
