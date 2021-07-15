# sciBotExamples
Example Arduino sketches for the sciBot.

# Installation

1. Install the official [Arduino IDE](https://www.arduino.cc/en/software).
2. Download and install [mBlock for Windows](https://mblock.makeblock.com/en-us/download/) to ensure you have the proper drivers installed to communicate with the mBot.
3. Download  the [Makeblock Arduino library](https://github.com/Makeblock-official/Makeblock-Libraries/archive/refs/heads/master.zip). To explore the code, you can browse the [Makeblock libraries on Github](https://github.com/Makeblock-official/Makeblock-Libraries).
4. Open the Arduino IDE.
5. Go to the "Sketch" menu, then "Include Library", and then "Add Zip Library". Select the .zip file you just downloaded.
Note that if you double-click on a folder, you must click on the folder icon. If you click on the text, it will select this folder and attempt to open it as a library.
6. Download and install the [sciBotExamples library](https://github.com/OpenSourceScienceCa/sciBotExamples/archive/refs/heads/main.zip). To explore the code, you can browse the [Open Source Science sciBotExamples library](https://github.com/OpenSourceScienceCa/mBotExamples/) on Github.
6. Go to the "Sketch" menu, then "Include Library", and then "Add Zip Library". Select the .zip file you just downloaded.
Note that if you double-click on a folder, you must click on the folder icon. If you click on the text, it will select this folder and attempt to open it as a library.
7. Go to the "File" menu, then "Examples", then "mBotExamples" (scroll down to the very bottom). Load an example sketch, such as mBot_RGB_LED, and upload it to your mBot.

# Examples

#### [sciBot_AnalogRead](https://github.com/OpenSourceScienceCa/sciBotExamples/tree/main/examples/sciBot_AnalogRead)
Reads from an analog input, and output the value over the serial port.

#### [sciBot_AnalogRead2](https://github.com/OpenSourceScienceCa/sciBotExamples/tree/main/examples/sciBot_AnalogRead2)
Similar to sciBot_AnalogRead, except that it reads from 2 analog inputs. 

#### [sciBot_DigitalWrite](https://github.com/OpenSourceScienceCa/sciBotExamples/tree/main/examples/sciBot_DigitalWrite)
Blink a single digital output on and off, forever.

#### [sciBot_DigitalWrite2](https://github.com/OpenSourceScienceCa/sciBotExamples/tree/main/examples/sciBot_DigitalWrite2)
Similar to sciBot_DigitalWrite, except that it has 2 digital outputs whose valoues are always opposite each other.



