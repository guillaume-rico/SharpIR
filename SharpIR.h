/*
	SharpIR

	Arduino library for retrieving distance (in cm) from the analog GP2Y0A21Y and GP2Y0A02YK

	From an original version of Dr. Marcal Casas-Cartagena (marcal.casas@gmail.com)     
	
    Version : 1.0 : Guillaume Rico

    Version : 1.2 : Archery2000

	https://github.com/guillaume-rico/SharpIR

*/

#ifndef SharpIR_h
#define SharpIR_h

#define NB_SAMPLE 25
#define USE_MEDOFMEDIANS false

#ifdef ARDUINO
  #include "Arduino.h"
#elif defined(SPARK)
  #include "Particle.h"
#endif

class SharpIR
{
  public:

    SharpIR (int irPin, long sensorModel);
    int distance();

  private:

    void sort(int a[], int size);
    
    int _irPin;
    long _model;
    void partialSort(int a[], int min, int max);
    int medianOfMedians(int a[], int size);
};

#endif
