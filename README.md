# Huawei Bootloader Unlocker
This tool let you unlock the bootloader of your Huawei / Honor Device even if the code can't be found.

After closing the official EMUI website, which allowed to retrieve the code to unlock the bootloader of Huawei/Honor phones, here's the fastest free way to retrieve it by yourself.


### How To use it
1. Compile the .C file
    1. `gcc source.c -o exec`
    2. `chmod +x exec`
2. Install Android Developer Tools
3. Enable USB Debug on your device
4. Enable OEM Unlock
3. Connect your device to your computer
4. Use ```adb reboot bootloader``` to reboot your device in bootloader mode
5. Run the program
    1. `./exec`
6. Wait

## FAQ & Troubleshooting
**The app on Windows doesn't detect my device. What could be the issue?**
Windows most likely doesn't recognise your device in ADB mode. 
Install the universal ADB drivers from [here](http://dl.adbdriver.com/upload/adbdriver.zip) then
reboot your PC and try again.

# License
```
MIT License

Copyright (c) 2019 Martazza

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```
