  
   EPITECH PROJECT, 2021
   readme.md
   File description:
   README FILE
  
# B-CPE-110-LIL-1-1-antman-thomas.gireaudot

## antman

- Compilation : make fclean && make all
- Usage       : ./antman/antman [file] [type]
                ./giantman/giantman [file] [type]

### TODO

- [ ] Antman :
    - [x] Error Management :
        - [x] Check if all arguments are passed
        - [x] Check if the file open correctly
    - [ ] Compression :
        - [x] Read the file, and put its content in a string
        - [ ] Print the content of the file, with compressed data :
            - [ ] '.html' :
                - [ ] Removing '</>' characters
                - [ ] Printing an index at the end for the decompression
            - [ ] '.ppm' :
                - [ ] Remplacing numbers between 31 and 100 by a corresponding char in the ASCII table
            - [x] '.lyr' :
                - [x] Indexing all words at the beggining (only once per word)
                - [x] Printing a suite of numbers, corresponding to the original file, according to the index
- [ ] Giantman :
    - [x] Error Management :
        - [x] Check if all arguments are passed
        - [x] Check if the file open correctly
    - [ ] Decompression :
        - [x] Read the file, and put its content in a string
        - [ ] Print the content of the file, with un-compressed data :
            - [ ] '.html' :
                - [ ] Replacing all '</>' according to the index at the end of the files
                - [ ] Not printing the index
            - [ ] '.ppm' :
                - [ ] Remplacing chars that are not numbers by the two numbers they contain
            - [ ] '.lyr' :
                - [ ] Printing words corresponding to the index, according to the suite of number