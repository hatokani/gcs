COMPILER = clang++
CFLAGS = -std=c++14 -O2 -Wall -pipe 
TARGET = ../gcs
SRCDIR = .
OBJDIR = ../obj
SOURCES = $(wildcard $(SRCDIR)/*.cc)
LIBS = $(wildcard $(SRCDIR)/*.h)
OBJECTS = $(addprefix $(OBJDIR)/, $(notdir $(SOURCES:.cc=.o)))

$(TARGET): $(OBJECTS) $(LIBS)
	$(COMPILER) -o $@ $(OBJECTS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cc
	clang-format -i $(SOURCES)
	$(COMPILER) $(CFRAGS) -o $@ -c $<
clean:
	-rm -f $(OBJECTS) $(TARGET)
