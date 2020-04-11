import sys
import time
import RPi.GPIO as GPIO

#gpio ref
GPIO.setmode(GPIO.BCM)

StepPins = [17, 23, 24, 25]

for pin in StepPins:
	print "Setup pins"
	GPIO.setup(pin,GPIO.OUT)
	GPIO.output(pin, 0)
#specific sequence for 28BYJ-48
Seq = [
	[1,0,0,0],
	[1,1,0,0],
	[0,1,0,0],
	[0,1,1,0],
	[0,0,1,0],
	[0,0,1,1],
	[0,0,0,1],
	[1,0,0,1]]

try:
    for i in range(80):#does the sequence 80 times
        for step in reversed(range(8)):
            for pin in range (4):
                GPIO.output(StepPins[pin],Seq[step][pin])
                time.sleep(0.005)

except KeyboardInterrupt:
    GPIO.cleanup()
