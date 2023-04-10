CXX = g++
CXXFLAG = -std=c++20 -Wall
SRCS = exceptions/mediaFileNotFoundException.cpp \
	src/audioMediaFile.cpp src/mediaFile.cpp src/mediaPlayer.cpp src/videoMediaFile.cpp client/main.cpp

OBJS = $(SRCS:.cpp=.o)
INCLUDE = -I include -I exceptions

all: mediaplayer

mediaplayer: ${OBJS}
	${CXX} ${CXXFLAG} ${OBJS} -o mediaplayer

%.o: %.cpp
	${CXX} ${CXXFLAG} ${INCLUDE} -c $< -o $@

clean:
	rm -f ${OBJS} mediaplayer
