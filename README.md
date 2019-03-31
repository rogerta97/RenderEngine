# RenderEngine

## Introduction

This is a basic rendering engine created with Qt for the subject of advanced graphical programming in the Design and Development of Videogames Degree in the UPC.         

The authors of this code are: **Roger Tello** and **Rodrigo de Pedro**    

## Feature list and user guide    

### Hierarchy     
The hierarchy tab lets you to modify the current set of entities displayed on the render window.

 - Shape: sets the shape of the next created entity.
 - Add entity: adds an entity to the scene.
 - Delete entity: deletes currently selected entity.
 - Move up/down: moves currently selected entity above or below its current position in the hiearchy. This affects render order.
 - New: clean all entities in the scene
 
 To select an entity, click on it's name in the hierarchy list.
 
 ### Transform / Color
 
The transform and color tab, as it's name suggests, lets you modify the position, size, rotation and color of the currently selected entity.

### Render options
The render options lets you modify of entities are drawn. Be aware that render options are applied to all entities in the scene!

- Pen options: lets you modify how the outline of the entities is executed.
- Brush options: lets you modify how the filling of the entities is executed.

## Qt features

- Signal/Slots: used for communication between ui events and the program code.
- Widget draw override: used to draw other widgets (entities) inside another single widget(scene).
- Gradient widget filling: used for "Gradient_..." brush options.
- Ordered rendering: used by the hierarchy list to draw properly the entities in the scene.
