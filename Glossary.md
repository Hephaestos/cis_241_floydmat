**ls** - List Segments. Shows what's in a directory. Use `-l` for details, `-a` for hidden files.
```
	~$ ls
	folder file
	~$ ls folder
	subfolder1 subfolder2
```

**cd**  - Change Directory. Change the working directory to the given path. `..` to go up a dir. `-` to go to previous dir.
```
	~$ cd folder/subfolder
	~/folder/subfolder/$ cd ..
	folder~$
```

**pwd** - Present Working Directory
```
	~$ pwd
	/home/username
```

**touch** - Create a file
```
	~$ ls
	~$ touch new_file
	~$ ls
	new_file
```

rm - Remove a file or folder. `-r` for recursive. `-f` for force (be careful, stupid)
```
	~$ ls
	goodbye.file another.file
	~$ rm goodbye.file
	~$ ls
	another.file
```

**cat** - Concatenate files and print them to the screen
```
	~$ cat file1
	file 1 contents
	~$ cat file2
	file 2 contents
	~$ cat file1 file2
	file 1 contentsfile2 contents
```

**less** - File viewer with scrolling, searching, and more (and less)
```
	~$ less long_file
```

chmod - Edit permissions of a file.
- r - read
- w - write
- x - execute

- u - users
- g - group
- o - others
- a - all

```
	~$ chmod u+x file //give execute permissions to user
	~$ chmod go-w file //remove write permissions from group and others
	~$ chmod g=rx file //set group permissions to read and execute only
```

**vi/vim** - Vim. The best $EDITOR
```
	~$ vim file
```
