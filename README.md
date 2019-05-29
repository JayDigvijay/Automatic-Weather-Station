# Automatic-Weather-Station
PS-1 Project, Indian Meteorological Department, Pune
<h2> Wind Vane </h2>
Non RS232 sensor. Can be directly interfaced to analog pin of arduino.

				N(180)


		W(90)				E(270)
	

				(0)S(360)


Check resistance of sensor first using multimeter before connecting to ensure resistance scheme is as above. Otherwise make appropriate changes in the code.

Analog values received by connecting the sensor in a voltage divider circuit with a reference resistance.
Only two pins present can be connected in any order.

<h2> Temperature and Humidity Probe </h2>
SENSOR NAME: RHT 175	

Connections according to colour.
BLUE ---> TEMPERATURE ----> A1
PINK ----> HUMIDITY ---->A2
WHITE ----> POWER
THICK BLACK , BROWN, VIOLET ----> GROUND
