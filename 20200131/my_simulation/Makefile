CXX=g++
CXXFLAGS=-O0

SRCS=hello.cpp show_version.cpp
OBJS=$(SRCS:%cpp=%o)

.PHONY: show_version.cpp

## version info
GIT_COMMIT_AUTHOR := $(shell git log -1 --format='Author: %an <%ae>')
GIT_COMMIT_ID := $(shell git log -1 --format='commit %H')
GIT_COMMIT_DATE := $(shell git log -1 --format='%ad')


VERSION_INFO= -D_COMMIT_AUTHOR="$(GIT_COMMIT_AUTHOR)"  -D_COMMIT_ID="$(GIT_COMMIT_ID)"  -D_COMMIT_DATE="$(GIT_COMMIT_DATE)"

CXX+=$(VERSION_INFO)

hello: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

clean:
	rm -f hello *.o
