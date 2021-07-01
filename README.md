# Arduino-Controlled-VGA
Variable gain amplifiers (VGAs) are signal-conditioning amplifiers with electronically settable voltage gain. A simple VGA consists of a few resistors with different values, an operational amplifier and components that switch between these resistors. In this project, I have used a CMOS Quad Bilateral Switch (CD4016BE) to perform this function. It has 4 switches with individual controls, which are controlled using the Arduino board.
### Block Diagram
![Block Diagram](https://github.com/aaryaapg/Arduino-Controlled-VGA/blob/main/VGA%20Block.png?raw=true)
### Circuit Diagram
![Circuit](https://github.com/aaryaapg/Arduino-Controlled-VGA/blob/main/VGA%20Circuit.PNG?raw=true)
## Working
1. The circuit works on the simple principle of changing the feedback resistor values to vary the gain accordingly.
2. The digital pins 2,3,4,5 from the Arduino are set to output mode, subsequently giving a digital output of 5V (HIGH) and 0V (LOW) whenever specified by the code.
3. These outputs are connected to feedback resistors in the circuit.
4. Whenever we input any number from 0 to 9 into the software, the 4 pins represent a binary number. For Example, if we input number 5 as a command on the Arduino Serial Monitor, the output of the Arduino will be (2,3,4,5) = (1010).
5. The pins which are HIGH (1) will provide an active high control signal to the control pins of the respective switches of CD4016BE Switch IC. Each of these switches is connected to the resistor feedback network, thus giving us a different feedback value for each input.
6. We can thus easily change the gain value to a desirable point with only 2 key presses.
### Observation
![Observation Table](https://github.com/aaryaapg/Arduino-Controlled-VGA/blob/main/VGA%20Observation.jpg?raw=true)

Note: The theoretical and practical gain value for all switch positions is comparable.
### PCB
![PCB](https://github.com/aaryaapg/Arduino-Controlled-VGA/blob/main/IMG-20191023-WA0010.jpg?raw=true)
