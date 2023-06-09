#pragma config(Sensor, in1,    Potentiometer,  sensorPotentiometer)
#pragma config(Motor,  port1,           motor1,        tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port10,          motor2,        tmotorVex393_HBridge, openLoop)

task main()
{
	while(1==1) // this while 1==1 statement create an infinite loop.
	{
		if(SensorValue(Potentiometer) >= 510) //when potentiometer value is greater than 510
		{
			motor[motor1] = 63; //initial speed, 63 revs/min
			motor[motor2] = 63; //initial speed, 63 revs/min
			wait1Msec(5000); // go for 5 seconds
			motor[motor1] = 0; //stop motor1
			motor[motor2] = 0; //stop motor2
		}
		else
		{
motor[motor1] = 0; //stop motor1
motor[motor2] = 0; //stop motor2
}
}
}
