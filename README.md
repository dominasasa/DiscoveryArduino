# Discover Arduino

A small Arduino project which shows current room temperature on an LCD screen.

## Used components

### 1. Sensor TMP36

The project uses a standard analog TMP36 sensor to read the ambient temperature. The datasheet can be found here <https://bit.ly/2SacHcB>.

#### How to calculate the temperature

The sensor outputs a 10-bit analog value ranging from 0 to 1023, which directly corresponds to a voltage. We can find the ratio of this correlation $r$ by dividing the analog output by a number of possible values, which in our case, is 1024. Then, as we are usin


## Notes
- code
- circuit scheme
- pics 
