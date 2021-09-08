PROGS = add4 min quadratic
ADD4_OBJS = add4.o add4_c.o add4_s.o
MIN_OBJS = min.o min_c.o min_s.o
QUAD_OBJS = quadratic.o quadratic_c.o quadratic_s.o


%.o: %.c
	gcc -g -c -o $@ $<

%.o: %.s
	as -g -o $@ $<

$(PROGS): $(OBJS)
	gcc -g -o $@ $^

all: add4 min quadratic

add4: $(ADD4_OBJS)
	gcc -g -o $@ $^

min: $(MIN_OBJS)
	gcc -g -o $@ $^

quadratic: $(QUAD_OBJS)
	gcc -g -o $@ $^
	
clean:
	rm -rf $(PROGS) $(OBJS)
