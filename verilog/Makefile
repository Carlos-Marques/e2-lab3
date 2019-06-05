VC := iverilog
CFLAGS := -W all -I$(INCLUDE_DIR) -I$(FIFO_DIR) -g2005-sv -DLINUX 

SRC := $(wildcard *.v)

ifeq ($(N),)
N := 8
endif 	
ifeq ($(fs),)
fs := 48000
endif 

all: $(SRC) tb/top_tb.v hex
	$(VC) $(CFLAGS) -DN=$(N) -DFS=$(fs) $(SRC) tb/top_tb.v 
	./a.out

detector: detector.v tb/detector_tb.v 
	$(VC) $(CFLAGS) $^
	./a.out

fir_path: fir_tap.v fir_path.v tb/fir_path_tb.v hex
	$(VC) $(CFLAGS) -DN=$(N) -DFS=$(fs) fir_tap.v fir_path.v tb/fir_path_tb.v
	./a.out
	mv y.dec ../octave


hex:
	N=$(N) FS=$(fs) octave ../octave/fir.m

clean: 
	@rm -f a.out *~ tb/*~ *.vcd *.hex ../octave/y.dec

.PHONY: clean all detector fir_path hex
