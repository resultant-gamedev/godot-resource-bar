# godot-resource-bar
Custom Godot Engine module to add a resource (Health/Mana/Energy/etc) bar to your game.

# How to install
This module is currently only tested on Linux, but I'd assume it works on Mac/Windows if you follow the same steps. You need to have the godot source on your machine in order to install the Resource Bar. Navigate to the modules folder (godot/modules/) and add this repo as a submodule using this line:

git submodule add https://github.com/a-watson/godot-resource-bar.git resourcebar

The "resourcebar" at the end is essential, since it names the folder that the code is placed in, which is used by Godot and must match what it's called in the code.

Once it's loaded into the modules folder, you need to build godot (there's tutorials for that in the wiki) to get it to show up in the editor.

# Use
After you've built godot the Node should show up in the list when you add a new node to the scene. Searching "ResourceBar" should bring it right up. The values for min, max, and current health can be set directly in the inspector, and also accessed from script.
