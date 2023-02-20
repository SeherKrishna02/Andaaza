# andaaza  

## **initial ideas**  
we started by ideating about the concept of **measuring** in a post scientific way from a hyperpersonal perspective. We speculated and questioned each other:  
- when does measuring stop facilitating and start preventing a process?  
- are the usual measuring units opposite to replicability?  
- why do we measure things?  ..to save time instead of doing everything by trial & error, capitalism, control outcome prediction.  

other fields we wanted to explore were **storytelling**, the strict binary distinction between the 'positive' and the 'negative' of molds and objects.   

eventually, our final idea emerged and triggered questions about...   
what if we can **store data** inside objects we use in our daily life?  
what is our **coffee cup is also a pen drive**, which has a song from your grandma or encrypted your passwords?  

what if we can store data into objects we use in our daily life?  
what is our coffee cup is also a pen drive, which has a song from your grandma or encrypted your passwords?  


## **concept**  
we are creating a tool that will encode audio messages into physical objects, which will then be retrieved and sonified. it will read or listen the messages we give and will engrave them on ceramics. 
cups, pots and other things will be carriers of our stories and will travel through time. 
it is a concept that deals with continuity and archiving.  

for this first prototype, we are writing audio messages in real-time. a microphone will capture the audio and through arduino it will convert the message into a sound waves, which will be getting written on a paper cup.  

the central idea has a lot of potential both on a theoretical, speculative level but also on the technological level. based on our existing collective knowledge we approached this challenge with a 'realistic ambition'.    

## **plan**   
we started imagining how it would look, what materials, motors and tools would we need. the more we tried to describe it, the more complex it got. multiple axes, motors, spinning wheels and plates started getting shape.. and that was only the hardware.  

we decided to use some pieces of an old 3d printer that was in our class from the 'tech beyond the myth' course, so we started by disassembling it.
we took apart the aluminum rails to build our new frame and the motors: one for the vertical movement (Z axis) and one to rotate the turntable. the latter had to be designed from scratch with the motor and the dimensions of the rails as the only guidelines.  

![](andaaza.jpg)

## **iterating**  
according to our predictions, we were relatively lucky. we managed to make our first laser cut pieces fit together (ok, with some sanding).  
we had to test the holes for the press fit a couple of times before sending our full printing file, which was different for each material. 

![](process2.jpg)
even though we didnt get as far as converting audio input into soundgraph in the paper cup, we did manage to connect the microphone and plot the sound on the arduino interface.  

![](andaaza2.jpg)

Click on the image to view the presentation :)  
[![Fab Micro Challenge 1 Presentation](Andaaza.png)](https://www.canva.com/design/DAFaumtP7p8/6alduDLkCOwk2gHwn5hSnA/view?utm_content=DAFaumtP7p8&utm_campaign=designshare&utm_medium=link&utm_source=publishsharelink)

here are our files to laser cut the turning table  
![dxf drawing](microchallenge.dxf)   
![3dm drawing](microchallenge_clean)  

## Useful Links and References

[Using the Arduino AccelStepper Library](https://hackaday.io/project/183713-using-the-arduino-accelstepper-library)

[AccelStepper](https://github.com/waspinator/AccelStepper) Library

[Vinyl Record Cutting Lathe](https://fabacademy.org/2020/labs/digiscope/students/ambroise-devries/docs/p02.html) Fabacademy Project by Ambroise de Vries

[DIY Record Cutting](http://fab.cba.mit.edu/classes/863.09/people/lifeform/13/index.html) Fabacademy project by David Robert


