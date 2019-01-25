FPGA Stereo Vision
==================

The FPGA stereo vision project's goal is to design and implement a stereo vision
system on a field-programmable gate array (FPGA) to allow robots to detect and
process their surroundings.

Installation
------------
    $ sudo apt install libnetpbm10-dev 
    $ git clone git://github.com/kylc/fpga_stereo_vision

Examples
--------
all:
    
    $ make all
    $ make
    $ ./stereobm_core_tb
    $ ./stereobm_prefilter_tb

Core test:

    $ make stereobm_core_tb
    $ ./stereobm_core_tb

Prefilter test:

    $ make stereobm_prefilter_tb
    $ ./stereobm_prefilter_tb
