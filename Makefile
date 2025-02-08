
SRCS = src/handle_sequence.cpp src/main.cpp

OBJS = $(SRCS:src/%.cpp=build/%.o)

BUILD_DIR = build

TARGET = $(BUILD_DIR)/program.out

all: $(TARGET)

$(TARGET): $(OBJS)
	g++ -o $@ $^

$(BUILD_DIR)/%.o: src/%.cpp
	@mkdir -p $(BUILD_DIR)
	g++ -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean