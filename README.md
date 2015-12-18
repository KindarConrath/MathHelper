# MathHelper
Calculator for matrices, vectors, quaternions and some things that I haven't decided yet.

In University (Video Game Development) I worked with my class to build a basic calculator for game mathemathics.

This included among other things:
* 2D Vector Math
* 3D Vector Math
* 2x2 Matrix Math
* 3x3 Matrix Math
* Quaternion Math
* Conversions
* Vector/Angle Rotation
** Axis Angle Matrix
** Homogenous Rotation Matrix

There are examples of the GUI from the original project in the Examples folder.  I hope to make something similar, though I think we can improve on the GUI significantly.

My end goal is to have a 3D window for point plotting and graphing of formulas based on these numbers.

First: Fill out all Math libraries

* Matrix
* Vector2D
* Vector3D
* Quaternion (Vector4D)

Second: Add Anything that people feel is missing

Third: Work on an perliminary GUI, I would like to see it more powerful AND more user friendly than the old one. Dynamic would be nice, something that isn't simply static, but that is intuitive and dynamic for the user.

Fourth: Bug Testing - make sure that everything works the way it is supposed to, this can be tricky because some of the math (I'm looking at you Quaternions) has a lot of steps.

Fifth: Graphical - At this point I would like to start looking at how we can produce grahpical representations of everything, display it in a view for the user to get some idea what it means.  This might mean significant enhancements to the program, including several graphing functions, and a 3D control scheme.  This will probably be one of the hardest parts to keep within my platform wishes, unless we specifically go openGL for the graphics.

## PLATFORM WISHES

I would like to keep the project as platform generic as possible, to allow this project to be compiled for other platforms like Linux as well. It could also be useful on macs for artists.

## Avalibility

This project is currently covered by an MIT licence. Every file has a header that tells who has worked on it, and those must be kept intact. Other than that, feel free to use part or all of the project for learning, or for your own projects. This is intended to be a colabrative project. I would like to build a comprehensive maths library for game maths.