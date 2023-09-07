 LM35-temperature sensor, thermometer

#include <mega32.h>
#include <stdio.h> // library baray sprintf
#include <delay.h>
 

 char th[20];
int themp;
int themp2;



 
while (1)
      {
       
        themp=read_adc(0); // read_adc , برای خواندن مقدار سنسور استفاده میشود   
      themp2 = themp/2.054 ; // تبدیل عددی به عددی که میخواهیم
      sprintf(th, "Themp = %d " , themp2); // آرگومان اول باید اسم کاراکتر باشد، دومی چیزی که میخوای ال سی دی نشون بده و درصد دی در آرگومان سوم مقداری که میخواهیم جایگزین درصد دی میشود
      lcd_puts(th); // مقدار را میخواند
      delay_ms(500); // فاصله
      lcd_clear(); // پاک شدن
      }