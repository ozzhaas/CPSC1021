#Config
CC = g++
CFLAGS = -Weffc++ -Wall -std=c++11
LFLAGS = -lm
TARGET = driver

#Generate source and object lists
C_SRCS := \
	$(wildcard *.cpp) \
	$(wildcard src/*.cpp) \
	$(wildcard src/**/*.cpp) \

HDRS := \
	$(wildcard *.h) \
	$(wildcard src/*.h) \
		$(wildcard src/**/*.h) \


OBJS := $(patsubst %.cpp, %.o, $(wildcard *.cpp))
OBJS += $(filter %.o, $(patsubst src/%.cpp, %.o, $(C_SRCS)))


all: build
			@echo "All done"


#Link all built objects
build: $(OBJS)

		$(CC) $(OBJS) -o $(TARGET) $(LFLAGS)


#Catch root directory src files

%.o: %.cpp $(HDRS)
		@mkdir -p $(dir $@)
		$(CC) $(CFAGS) -c $< -o $@


#Catch all nested directory files

%.o: src/%.cpp $(HDRS)
		@mkdir -p $(dir $@)
		$(CC) $(CFLAGS) -c $< -o $@



clean:
		rm -f $(TARGET)
		rm -rf


run:build
		./$(TARGET) data.txt out.txt


which:
		@echo "FOUND SOURCES: ${C_SRCS}"
		@echo "FOUND HEADERS: ${HDRS}"
		@echo "TARGET OBJS: ${OBJS}"
