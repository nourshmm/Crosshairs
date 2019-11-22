# Makefile
# Auteur : Hacene YOUNSI
# E-mail : hacene.younsi@hotmail.com
# Date   : 27/07/2019

SHELL = /bin/sh

# Définition des commandes utilisées

CC = gcc
CXX = g++
RM = rm -f

# Définition des options du compilateur

PG_FLAGS = #-lwiringPi -lpthread
CFLAGS = -Wall -Werr
CPPFLAGS = 

# Définition des fichiers et dossiers

PROGS = run
HEADERS = *.hpp
CPPSOURCES = *.cpp #main.cpp control.cpp hardware.cpp system.cpp #*.cpp

OBJ  = $(CSOURCES:.cpp=.o)


all: $(PROGS)
	@echo "Exécution:"
	@./run

$(PROGS): $(OBJ)
	$(CXX) $(OBJ) $(CPPFLAGS) $(CPPSOURCES) $(HEADERS) -o $(PROGS) $(PG_FLAGS)

%.o: %.cpp
	@echo "Compilation: "
	$(CXX) $(CPPFLAGS) $(CPPSOURCES) -o $@  $(PG_FLAGS)

clean:
	@echo "Projet Nettoyer"
	@$(RM) -r $(PROGS) $(OBJ) *~ gmon.out core.*
