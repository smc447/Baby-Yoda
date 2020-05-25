print('started program')

import RPi.GPIO as GPIO
import time

#setup
GPIO.setmode(GPIO.BCM)

GPIO.setup(14, GPIO.OUT)
p = GPIO.PWM(14,50)
p.start(2.5)#starting position
time.sleep(1)

try:
        while True:
            #moves about 180 degrees back and forth
            p.ChangeDutyCycle(4.5)
            time.sleep(1)

            p.ChangeDutyCycle(1.5)
            time.sleep(1)
except KeyboardInterrupt:
    p.stop()
    GPIO.cleanup()
