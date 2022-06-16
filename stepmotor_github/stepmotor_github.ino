#include <M5Stack.h>
const int MotorA = 2;
const int MotorB = 5;
const int MotorC = 12;
const int MotorD = 13;
const int pinMotor[4] = {MotorA,MotorB,MotorC,MotorD};
const int logic[4][4] = {
{1,1,0,0},
{0,1,1,0},
{0,0,1,1},
{1,0,0,1}
};
int count;
void setup() {
M5.begin();
pinMode(pinMotor[0], OUTPUT);
pinMode(pinMotor[1], OUTPUT);
pinMode(pinMotor[2], OUTPUT);
pinMode(pinMotor[3], OUTPUT);
}
void loop() {
for (int i = 0; i < 2048 ; i++) {
driveMotor();
delay(2);
}
}
void driveMotor() {
count++;
int step = count % 4;
digitalWrite(pinMotor[0] , logic[step][0]);
digitalWrite(pinMotor[1] , logic[step][1]);
digitalWrite(pinMotor[2] , logic[step][2]);
digitalWrite(pinMotor[3] , logic[step][3]);
}
