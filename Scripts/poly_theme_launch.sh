#!/bin/bash

# Terminate already running bar instances
# If all your bars have ipc enabled, you can use 
 polybar-msg cmd quit
# Otherwise you can use the nuclear option:
#killall -q polybar


# Launch bar pywal Script 

~/.config/polybar/colorblocks/scripts/pywal.sh /home/gear/Pictures/wallpapers/MXSyPMM.jpg

~/.config/polybar/launch.sh --colorblocks 2>&1 | tee -a tmp/polybar_colorblocks.log & disown


