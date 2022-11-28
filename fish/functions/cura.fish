function cura --wraps=./Documents/3d_printing/Ultimaker-Cura-5.2.1-linux-modern.AppImage --wraps='nohup ./Documents/3d_printing/Ultimaker-Cura-5.2.1-linux-modern.AppImage & disown' --description 'alias cura=nohup ./Documents/3d_printing/Ultimaker-Cura-5.2.1-linux-modern.AppImage & disown'
  nohup ./Documents/3d_printing/Ultimaker-Cura-5.2.1-linux-modern.AppImage & disown $argv; 
end
