#Reflection

##Effect of P, I, D component

Proportional component describes how hard the car should steer accordingly to the CTE. The bigger CTE is, the harder the car will steer.

Integral component is here to account for process errors (such as the car always oversteering by value x on one direction). Given enough time, the integral component will act as an auto reset and adjust steering to a set point.

Derivative component smooth out the rate of change of the steering wheels. This will help to reduce the car oscillation and smooth out turns that would otherwise be too sharp.

##How hyper-parameters were chosen

I decided to set the hyper-parameters manually. I'm sure there is still room for improvement and an optimization algorithm such as twiddle could be applied.

I started with zero for P, I and D values. I started by finding a working value for P, I incremented it until the car could drive by following the road and started to oscillate around the driving path. As soon as I saw the car oscillating, I focused my tweaking on D, to reduce the oscillation. Once, I was happy with the driving behavior of my car I focused my tweaking solely on I. I can be tested on the simulator by manually simulating an oversteer of the car (add +0.2 to the steering angle output of the PID controller). I incremented I until the oversteering had no effect on the driving of my car.
