#pragma config(Sensor, dgtl1,  bump,           sensorTouch)
#pragma config(Motor,  port1,           motor1,        tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port10,          motor2,        tmotorVex393_HBridge, openLoop)

task main()
{
	while(1==1) // this while 1==1 statement create an infinite loop.

		if(SensorValue(bump) == 1) //when bumper value is 1.
		{
			motor[motor1] = 63; //initial speed, 63 revs/min
			motor[motor2] = 63; //initial speed, 63 revs/min

		}
		else
		{
motor[motor2] = 0; //stop motor2
motor[motor1] = 0; //stop motor1
}

}
