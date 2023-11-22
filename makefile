CXX = g++
CXXFLAGS = -Wall -I./includes

# Dossiers
SRCDIR = src
INCDIR = includes
BUILDDIR = build
TARGET = bn.o

# Fichiers sources
SRCS = $(wildcard $(SRCDIR)/*.cpp)
# Fichiers objets
OBJS = $(patsubst $(SRCDIR)/%.cpp,$(BUILDDIR)/%.o,$(SRCS))

all: $(BUILDDIR) $(TARGET)

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) main.cpp -o $(TARGET) $(OBJS)

clean:
	rm -rf $(BUILDDIR) $(TARGET)

.PHONY: all clean
