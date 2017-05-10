OBJS = eins.o main.o zwei.o
PROC = Beispiel
all: $(PROC)
$(PROC): $(OBJS)
	g++ -o $@ $^
clean:
	rm -f $(OBJS)
	rm -f $(PROC)