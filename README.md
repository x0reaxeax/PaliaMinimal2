# PaliaMinimal

Bypass item restrictions when placing furniture.

## Features:
* Place furniture items anywhere on your plot, even outside of building zones.
* Overlap furniture. Put a table inside of a table inside of a plant inside of a fountain.
* Save an item's position so you can bypass the "floating" some items will do when trying to overlap them. (See below.)
* Adjust position and rotation coordinates of items manually. Includes controls for Pitch and Roll rotational coordinates, which the game doesn’t normally allow to edit.

## Instructions:

### "Force-Place:"
* Place anything anywhere! Works in both Placement Mode, and Housing Menu.
* Open "Placement Mode" (**LCTRL** by default).
* Grab an item placed on your plot or from inventory.
* Place it anywhere (valid location) once. If you're placing it from your inventory, pick it up and place it again.
* Grab the item again and position it where you want it to actually be (even if it's red).
* Hit **F8**. If your plot is lagging, hold it for a few seconds lol.
* Exit out of Item Placement Mode (i.e. click LCTRL again). Do NOT try to place the item.

### ”Positional & Rotational Adjustments”:
While placing an item, use one or more of the following keys to adjust the item’s pos/rot:
* Arrows Up/Down - Position coordinate ‘Z’ +/-
* Numpad 2/8 - Position coordinate ‘Y’ +/-
* Numpad 6/4 - Position coordinate ‘X’ +/-
* Numpad 7/9 - Rotation coordinate ‘Yaw’ - +/-
* Numpad 1/3 - Rotation coordinate ‘Pitch’ - +/-
* Numpad 5/0 - Rotation coordinate ‘Roll’ - +/-
Current adjustment value is `1.0f`, so feel free to hold the keys down.
There’s currently no visual updating/preview when adjusting coordinates, the adjustment is shown one the item is placed (I’ll be working on live preview).

### "Save Position":
* In Item Placement Mode, pick up a placed item and position it where you want to place it. Don't place it.
* Hit **F9** to save the item position.
* Place the item somewhere else.
* Pick up whatever item you want to overlap the first item with and place it in that location.
* Pick up the first item and put it down again. Pick it back up.
* Press **F10** and exit the menu. It should go to the saved location.

## Screenshots:
![screen1](https://i.imgur.com/NBiOJPt.png)  
![screen2](https://i.imgur.com/xcInZZz.png)  
