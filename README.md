# dwmblocks
Modular status bar for dwm written in c.

# installation

```

$ git clone https://github.com/IHatePineapples/dwmblocks
$ cd dwmblocks && sudo make install
$ dwmblocks &
```

# modifying blocks

Modify the `blocks.h` file. Copy your configuration to `blocks.def.h`.

Recompile and replace the previous install:
```
$ sudo make clean install
```
To see the changes without rebooting the machine:
```
$ pkill dwmblocks && dwmblocks
```
