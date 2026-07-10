.PHONY: build prerequisites target clean
JOBS ?= 8
build:
	JOBS='$(JOBS)' ./build '$(CC)' '$(CXX)' '$(TARGET_NAME)' $(CFLAGS)
prerequisites: build
target: prerequisites
clean:
	rm -rf .build bin
