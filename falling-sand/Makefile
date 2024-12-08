CC=clang
TARGET=main
CFLAGS=-Wall -lm
DFLAGS=-g
SANITIZE=-fsanitize=address
SDL2=-lSDL2 -lSDL2_image -lSDL2_ttf
SOURCE = $(wildcard src/*.c)
OBJS=$(addprefix build/, $(patsubst %.c, %.o, $(notdir $(SOURCE))))

all: $(TARGET)
$(TARGET): $(OBJS)
	@mkdir -p exec
	@echo "============="
	@echo "Linking the target $@"
	@echo "============="
	@$(CC) $(CFLAGS) $(DFLAGS) $(SDL2) -o exec/$@ $^ 
	@echo -- Link finished --
# Rule for compiling .c files
build/%.o: src/%.c
	@mkdir -p $(dir $@)
	@echo "============="
	@echo "Compiling $<"
	$(CC) $(CFLAGS) $(DFLAGS) $(SDL2) -c $< -o $@
	@echo -- Compilation finished --
# Clean up build and exec directories
clean:
	@-rm -rf build/ exec/