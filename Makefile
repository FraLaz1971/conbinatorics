# capp Makefile
CC = gcc
OEXT = .o
EEXT = 
RM = rm -f
TARGET1 = capp
TARGET2 = fapp
TARGET3 = sifapp
CPPFLAGS = -g -O
CFLAGS = -g -O
LDFLAGS = 
LIBS = 
SRC1 = $(TARGET1).c conbinatorics.c
OBJ1 = $(TARGET1)$(OEXT) $(TARGET2)$(OEXT) $(TARGET3)$(OEXT) conbinatorics$(OEXT)

all:    $(TARGET1)$(EEXT) $(TARGET2)$(EEXT) $(TARGET3)$(EEXT)

$(TARGET1)$(OEXT): $(TARGET1).c conbinatorics.h
	$(CC) $(CPPFLAGS)  -c $(TARGET1).c

$(TARGET2)$(OEXT): $(TARGET2).c conbinatorics.h
	$(CC) $(CPPFLAGS)  -c $(TARGET2).c
	
$(TARGET3)$(OEXT): $(TARGET3).c conbinatorics.h
	$(CC) $(CPPFLAGS)  -c $(TARGET3).c
	
conbinatorics$(OEXT): conbinatorics.c conbinatorics.h
	$(CC) $(CPPFLAGS) -c conbinatorics.c

$(TARGET1)$(EEXT): $(TARGET1)$(OEXT) conbinatorics$(OEXT)
	$(CC) $(CFLAGS) $(TARGET1)$(OEXT) conbinatorics$(OEXT) -o $(TARGET1)$(EEXT) $(LDFLAGS) $(LIBS)

$(TARGET2)$(EEXT): $(TARGET2)$(OEXT) conbinatorics$(OEXT)
	$(CC) $(CFLAGS) $(TARGET2)$(OEXT) conbinatorics$(OEXT) -o $(TARGET2)$(EEXT) $(LDFLAGS) $(LIBS)

$(TARGET3)$(EEXT): $(TARGET3)$(OEXT) conbinatorics$(OEXT)
	$(CC) $(CFLAGS) $(TARGET3)$(OEXT) conbinatorics$(OEXT) -o $(TARGET3)$(EEXT) $(LDFLAGS) $(LIBS)

.PHONY: clean all Debug Release install

Debug: all


Release: all


install: all


clean:
	$(RM) $(OBJ1) $(TARGET1) $(TARGET2) $(TARGET3) *.log

