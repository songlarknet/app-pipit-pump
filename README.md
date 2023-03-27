# Water pump: running Pipit / F* on a microcontroller

This repository shows an example of running a control system on a microcontroller.
The actual example code is in the Pipit repository, this repository is really just about integration with the hardware.

## Building

Unfortunately, the requirements for building this are pretty heavy.
To build it, you need to install Zephyr for the microcontroller cross-compiler and drivers, F* and Karamel for generating C code, as well as Pipit for the controller itself.

### Generating controller code
The C code for the controller was generated from the [pipit repository](https://github.com/songlarknet/pipit) by running `make extract-c` in the extract subdirectory.
I ran something like:

```
pushd $PIPIT/extract; make extract-c; popd
cp $PIPIT/extract/gen/*.[ch] gen
```

### Karamel library
Karamel, which performs the extraction from F* to C, has its own runtime support library.
We need to reuse it.
I did this by [building karamel from source](https://github.com/FStarLang/karamel#trying-out-karamel) and then symlinking the library here, for example:

```
ln -s $FSTAR/karamel/include rts/include
ln -s $FSTAR/karamel/krmllib/dist/ rts/dist
```

### Zephyr
Install [Zephyr](https://docs.zephyrproject.org/latest/develop/getting_started/index.html)