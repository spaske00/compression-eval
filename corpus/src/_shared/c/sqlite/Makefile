.PHONY: build clean prerequisites target

build:
	./build ${CC} ${CXX} ${TARGET_NAME} ${CFLAGS}

clean:
	rm -rf sqlite-3.51.1/build sqlite-3.51.1/build-sqlite-*


prerequisites: build

target: prerequisites
