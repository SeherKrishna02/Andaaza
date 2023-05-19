# **Our Journey**

## **Initial Ideas**  
We started by ideating about the concept of **measuring** in a post scientific way from a hyperpersonal perspective. We speculated and questioned each other:  
- When does measuring stop facilitating and start preventing a process?  
- Are the usual measuring units opposite to replicability?  
- Why do we measure things?  ..to save time instead of doing everything by trial & error, capitalism, control outcome prediction.  

Other fields we wanted to explore were **storytelling**, the strict binary distinction between the 'positive' and the 'negative' of molds and objects.   

Eventually, our final idea emerged and triggered questions about...   
What if we can **store data** inside objects we use in our daily life?  
What is our **coffee cup is also a pen drive**, which has a song from your grandma or encrypted your passwords?  

What if we can store data into objects we use in our daily life?  
What is our coffee cup is also a pen drive, which has a song from your grandma or encrypted your passwords?  


## **Concept**  
We are creating a tool that will encode audio messages into physical objects, which will then be retrieved and sonified. it will read or listen the messages we give and will engrave them on ceramics. 
Cups, pots and other things will be carriers of our stories and will travel through time. 
It is a concept that deals with continuity and archiving.  

For this first prototype, we are writing audio messages in real-time. a microphone will capture the audio and through arduino it will convert the message into a sound waves, which will be getting written on a paper cup.  

The central idea has a lot of potential both on a theoretical, speculative level but also on the technological level. Based on our existing collective knowledge we approached this challenge with a 'realistic ambition'.    

## **Plan**   
We started imagining how it would look, what materials, motors and tools would we need. the more we tried to describe it, the more complex it got. multiple axes, motors, spinning wheels and plates started getting shape.. and that was only the hardware.  

This project made use of some parts rescued from an out of service reprap 3D printer that was left in out classroom from the 'tech beyond the myth' course, so we started by disassembling it. We used 2 servo motors, one for the turntable and one for the 2-axis. We also repurposed the controller boards which consistsed of an Arduino Mega and a Ramps 1.4 shield for the Mega. In addition to the electronics we were able to use the alumunim rails and various nuts and bolts from the old 3D printer to construct the drawing/carving machine. 


![](andaaza.jpg)  

## **iterating**  
According to our predictions, we were relatively lucky. we managed to make our first laser cut pieces fit together (ok, with some sanding).  
We had to test the holes for the press fit a couple of times before sending our full printing file, which was different for each material. 

![](process2.jpg)  


![](andaaza2.jpg)  

## **Problems and Improvements**  

We knew this would be an ambitious artifact to make, and we most likely wouldn't be able to complete it in the four days of the first micro challenge. We planned to make the first iteration of the prototype in the first week, which consists of a motorized turntable and an arm that could move up and down and hold different toolheads such as a pen. This first iteration was designed to write on a paper cup and test out our idea. 

Though we didn't have time to connect the sound input to the project, we did manage to connect a microphone and plot the sound on the Arduion serial plotter. We will be exploring the sound interface in the coming weeks. This week, we managed to build a simple turntable and motorize it, as well as create a frame for the z-axis that will serve as an interchangeable toolhead for pens and carving tools. We still have some work to do on the z-axis plate to correct some sagging as it moves up and down as well as redesiging it to better hold pens and tools. Though our rubberband solution works quite well, especially if there are only 4 days to build. :) 

## **Week 02**  

![](docs/images/cup_holder.jpeg)
![](docs/images/tool_holder.jpeg)
![](docs/images/cup_box.jpeg)

![](docs/images/andaaza-11.jpg)



## **Design Dialogues**
![](docs/images/DD2_Posters-01.png)
![](docs/images/DD2_Posters-02.png)
![](docs/images/DD2_Posters-04.png)


Click on the image to view the presentation :)  
[![Fab Micro Challenge 1 Presentation](Andaaza.png)](https://www.canva.com/design/DAFaumtP7p8/6alduDLkCOwk2gHwn5hSnA/view?utm_content=DAFaumtP7p8&utm_campaign=designshare&utm_medium=link&utm_source=publishsharelink)

![](docs/images/DD2_table1.jpeg)
![](docs/images/DD2_table2.jpeg)

## Audio Generated Visuals  

[Mother's Kitchen](https://editor.p5js.org/agjarv/full/4PX7xMz5z)  
[Grandmother's Kitchen](https://editor.p5js.org/agjarv/full/qOPdnXOsH)  
[My Kitchen](https://editor.p5js.org/agjarv/full/o7EYgK_W5R)  

## Useful Links and References  

[Using the Arduino AccelStepper Library](https://hackaday.io/project/183713-using-the-arduino-accelstepper-library)

[AccelStepper](https://github.com/waspinator/AccelStepper) Library

[Vinyl Record Cutting Lathe](https://fabacademy.org/2020/labs/digiscope/students/ambroise-devries/docs/p02.html) Fabacademy Project by Ambroise de Vries

[DIY Record Cutting](http://fab.cba.mit.edu/classes/863.09/people/lifeform/13/index.html) Fabacademy project by David Robert


