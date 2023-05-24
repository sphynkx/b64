</$objtype/mkfile

BIN=/$objtype/bin
TARG=b64
CFLAGS=$CFLAGS -D__${objtype}__ -p -I.

OFILES=\
	./b64.$O\


default:V: all

</sys/src/cmd/mkone
