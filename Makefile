all : .force
	test -d bld || mkdir bld
	(cd bld; ../unix/cmake/configure)
	(cd bld; make)

install : all
	(cd bld; make install)

clean : .force
	/bin/rm -rf bld

.force :
