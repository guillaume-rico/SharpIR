# SharpIR
Arduino Infra Red Sharp Lib

Based on an original work of Dr. Marcal Casas-Cartagena .

 1. Perform 25 reading of analog pin (Nb samples can be changed in .h)
 2. Sort values
 3. Convert median value to cm


# Sharp IR Volt Centimeter conversion

## GP2Y0A02YK0F

| Volt | Distance |
| 2,8 | 15 |
| 2,5 | 20 |
| 2 | 30 |
| 1,55 | 40 |
| 1,24 | 50 |
| 1,05 | 60 |
| 0,905 | 70 |
| 0,82 | 80 |
| 0,7 | 90 |
| 0,66 | 100 |
| 0,6 | 110 |
| 0,55 | 120 |
| 0,5 | 130 |
| 0,455 | 140 |
| 0,435 | 150 |

Using MS Excel, we can found folowing formula (For distance > 15cm) :

Distance = 60.374 X POW(Volt , -1.16)

## GP2Y0A21YK

| Volt | Distance |
| 2,6 | 10 |
| 2,1 | 12 |
| 1,85 | 14 |
| 1,65 | 15 |
| 1,5 | 18 |
| 1,39 | 20 |
| 1,15 | 25 |
| 0,98 | 30 |
| 0,85 | 35 |
| 0,75 | 40 |
| 0,67 | 45 |
| 0,61 | 50 |
| 0,59 | 55 |
| 0,55 | 60 |
| 0,5 | 65 |
| 0,48 | 70 |
| 0,45 | 75 |
| 0,42 | 80 |

Using MS Excel, we can found folowing formula (For distance > 10cm) :

Distance = 29.988 X POW(Volt , -1.173)

