CC = gcc
files = src/* main.c
bin = app

all: build run

# compile the first
build: $(files)
    @$(CC) $(files) -o $(bin) -Wall

run: $(bin)
	@./$(bin)
    
clean: $(bin)
	@rm $(bin)
	
git-am: $(files)
	@git add $(files)
	@git commit -m "$(files)"
    
git-push: $(files)
	@git push -u origin master
