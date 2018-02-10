/*!
   ufire.co for links to documentation, examples, and libraries
   github.com/u-fire for feature requests, bug reports, and  questions
   questions@ufire.co to get in touch with someone
 */

 #include "uFire_ISE.h"

ISE_Probe mv;

void setup() {
  Serial.begin(9600);
}

void loop() {
  mv.measuremV();
  Serial.print("mV: "); Serial.println(mv.mV);
}
