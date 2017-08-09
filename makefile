all: check
		
check: pca.o  checkEig.cpp eig.dll myReadStream.o
	g++ -o check checkEig.cpp pca.o myReadStream.o -L. -leig	

pca.o: pca.cpp
	g++ -c pca.cpp
	

	