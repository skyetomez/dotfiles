function brightness --wraps='sudo brightnessctl set ' --description 'alias brightness=sudo brightnessctl set '
  sudo brightnessctl set  $argv; 
end
