WARNINGS := \
  -Wall -Wextra -Wpedantic -Werror \
  -Wshadow -Wpointer-arith -Wcast-align \
  -Wold-style-cast -Wconversion -Wsign-conversion \
  -Wformat=2 -Wformat-security \
  -Wnull-dereference \
  -Woverloaded-virtual -Wnon-virtual-dtor \
  -Wmissing-declarations -Wredundant-decls \
  -Wswitch-enum -Wimplicit-fallthrough \
  -Wunreachable-code \
  -Wunsafe-buffer-usage -Wdeprecated-declarations \
  -fsafe-buffer-usage-suggestions

all: compile run

compile:
	g++ -std=c++20 $(WARNINGS) -O0 -g -o app *.cpp

run:
	./app
