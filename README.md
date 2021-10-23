# vlc-module
Arduino code files for a Visible Light Communication Module. Original made for APSC100 Module 3.

vlc_transmitter.ino contains encoding algorithm to a take user-inputted message and convert it to binary. This binary is used to turn the an LED on and off (1 and 0) to transmit the data from the transmitter.

vlc-receiver.ino contains decoding algorithmn to read analog input from a phototransistor. The analog reading is proporitional to the amount of light that the phototransistor detects, so above a certain thresold, a binary 1 is detected, otherwise, a binary 0 is detected. This binary signal is then converted into ASCII charaters to output the original message to the receiver.
