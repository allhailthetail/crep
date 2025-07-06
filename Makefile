INSTALL_DIR = /usr/local/bin

all: program
	@echo "all called by default:"
	@echo "proceeding to program section..."

program: main.o
	@echo "linking/compiling crep application:"
	clang++ main.o -o crep

main.o:
	@echo "generating main.o object file:"
	clang++ -c main.cpp

install:
	@echo "installing crep"
	sudo mv crep $(INSTALL_DIR)/

uninstall:
	@echo "uninstalling crep:"
	sudo rm $(INSTALL_DIR)/crep

clean:
	@echo "Cleaning up object files and binary:"
	@echo "to fully uninstall run make uninstall..."
	rm -f *.o crep
