if status is-interactive
    # Commands to run in interactive sessions can go here
end


# Sets the path variables for singularity in fish
set -x GOPATH $HOME/go
set -x PATH /usr/local/go/bin:$PATH:$GOPATH/bin

# >>> conda initialize >>>
# !! Contents within this block are managed by 'conda init' !!
# eval /home/gear/miniconda3/bin/conda "shell.fish" "hook" $argv | source
# <<< conda initialize <<<

# cat ~/.cache/wal/sequences &
