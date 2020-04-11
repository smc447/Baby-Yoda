print('started program')

import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)

GPIO.setup(15, GPIO.OUT)#setup pin and startng position
p = GPIO.PWM(15,50)
p.start(10)
time.sleep(1)

try:
        while True:
            #moving the arm about 60 degrees
            list = [8,9,10,11,12]#staggering the position to slow down the speed  and force
            for i in list:
                p.ChangeDutyCycle(i)
                time.sleep(0.1)
            rlist = reversed(list)#reversing direction
            for i in rlist:
                p.ChangeDutyCycle(i)
                time.sleep(0.1)
except KeyboardInterrupt:
    p.stop()
    GPIO.cleanup()
