ifeq ($(FS),)
FS:=48000
endif
ifeq ($(N),)
N:=8
endif

all: 
	echo $(N)
	echo $(FS)
	sed -i 's/N=[0-9]*/N=$(N)/g' top.xst
	sed -i 's/FS=[0-9]*/FS=$(FS)/g' top.xst
	mkdir xst
	mkdir xst/projnav.tmp
	xst -intstyle ise -ifn "/home/jsousa/sandbox/ist-e2/labs/lab3/fpga/basys2/top.xst" -ofn "/home/jsousa/sandbox/ist-e2/labs/lab3/fpga/basys2/top.syr"
	ngdbuild -intstyle ise -dd _ngo -nt timestamp -uc /home/jsousa/sandbox/ist-e2/labs/lab3/fpga/top.ucf -p xc3s100e-cp132-4 top.ngc top.ngd  
	map -intstyle ise -p xc3s100e-cp132-4 -cm area -ir off -pr off -c 100 -o top_map.ncd top.ngd top.pcf 
	par -w -intstyle ise -ol high -t 1 top_map.ncd top.ncd top.pcf 
	trce -intstyle ise -v 3 -s 4 -n 3 -fastpaths -xml top.twx top.ncd -o top.twr top.pcf 
	bitgen -intstyle ise top.ncd

clean:
	mv Makefile  top.xst  top.prj ..
	rm -f -r * 
	mv ../Makefile  ../top.xst  ../top.prj .

.PHONY: all clean params
