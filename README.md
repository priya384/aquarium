                               INTRODUCTION TO PROJECT

The development of any project will improve the users’ knowledge. The main aim of develop this project was to improve my knowledge of Computer Graphics and OpenGL. This project provides good understanding of conspicuous OpenGL functions like Transformation Matrices, Translation, Rotation & Scaling, and Perspective viewing. 
Keeping factors of usability and simplicity in mind, the demonstrations of the basic OpenGL functions and features are demonstrated. 
This project will demonstrate the use of two and three dimensional planes in OpenGL. My project has detailed information on user interaction. 

Objective of the project: 
to understand the application of the OpenGL API to modern Graphics applications. 
to draw attention of player toward computer graphics. 
to create an interactive project which is simple in use. 

2.2 Constraints on the project: 
Project executes only if the system is installed with glut package. 
The graphic system should support OpenGL. 
Output will differ if there is fault in graphic system. 
May produce flickering image if color and depth buffer is not cleared properly, if a single buffer is used, or buffers are not swapped. 
We need to initialize glut library in order to interact with window system. 

2.3 Description: 
The design principle and the steps involved in the designing of my Mini-Project work aquarium using Computer Graphics are explained here. The implementation is also described in next few pages. 
At the outset included are all the required header files, in order to reference the various library functions of both C and OpenGL. We need to first select the graphic driver and the graphic mode that supports. We need to initialize the graphics and local variables as well, along with various lighting and material property matrices. 

After the initialization of the graphic mode and the graphic drivers, we need to check whether they are really initialized. So we have to keep track of the result of initialization. If it is not initialized or if it is resulted in error, then we need to terminate the program with an error code. 
Impelling to the main function, it will initialize various graphic parameters, and register the device and action call-backs. It also calls the glutMainLoop() method, which is responsible for continuing to run the program as long as it is required by the user. 
The basic rendering of the graphic scene proceeds as follows: 
Once the GLUT buffers are cleared, a background colour is specified. This is used for the whole program. Next, to get a starry background, the use of GL_POINTS attribute has been used, with the random number generator generating the points where the stars have to be drawn. Another random number generator is used to generate random colours to display the stars, thus adding additional effects to the program. 
The other major component of the game Space shuttle itself, which is drawn using OpenGL standard shapes. The code will take care of providing lighting to the bug, and also show off the functionality of demonstrating the material properties of objects and their behaviour to light. 
Coming to the implementation of the game logic, the call-backs to the mouse take care of jumping the space shuttle over the obstacles from the track on which it is travelling. The obstacles are moved towards the user so that the relative motion with the space shuttle gives a feeling of moving space shuttle. Keyboard call-backs are used to move the space shuttle left or right while avoiding the sabotage. When the distance between the space shuttle and the obstacle becomes nil then the gameover function is called. 

This project was designed to demonstrate the working of OpenGL API. Since the code is well-commented, any moderately skilled programmer can modify this project as required. As the game basically describes a 3-dimensional first-person driving game, it is possible to expand this into other games of a similar kind, with different objects and/or rules of gameplay. 
