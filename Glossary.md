# Glossary of Linux Commands

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

**mkdir** - Create a directory
```
~$ mkdir newdir
~$ ls
newdir
```

rm - Remove a file or folder. `-r` for recursive. `-f` for force (be careful, stupid)
```
~$ ls
goodbye.file another.file
~$ rm goodbye.file
~$ ls
another.file
```

**cp** - Copy a file to a new location. `-r` for recursive. `-a` for archive.
```
~$ ls
file folder
~$ cp file folder/newfile
~$ ls folder
newfile
~$ ls
file folder
```

**mv** - Move a file to a new location. similar options to `cp`
```
~$ ls
file folder
~$ mv file folder/newfile
~$ ls folder
newfile
~$ ls
folder
```

**ln** - Create a link to a file.
```
~$ ln path/to/file link_name
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

**bat** - Cat with wings. A fancy cat with syntax highlighting and other nice things
```
~$ bat index.html
```

**less** - File viewer with scrolling, searching, and more (and less)
```
~$ less long_file
```

**file** - Display information about a file
```
~$ file example.txt
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

**chown** - Change the owner of a file.
```
~$ chown file user
```

**chgrp** - Change the group of a file.
```
~$ chgrp file group
```

**mount** - Mount a drive to a folder
```
~$ mount /dev/sda1 /mount_point
```

**umount** - Unmount a drive to a folder
```
~$ umount /mount_point
```

**tar** - Deal with tar archives.
- c - create
- x - extract
- z - zipped
- f - file
- v - verbose
```
~$ tar -czvf archive.tar.gz /big_folder
~$ tar -xzvf archive.tar.gz
```

**vi/vim** - Vim. The best $EDITOR
```
~$ vim file
```
