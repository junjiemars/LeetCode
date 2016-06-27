#!/bin/bash

#Given a text file file.txt that contains list of phone numbers (one per line), write a one liner bash script to print all valid phone numbers.

#You may assume that a valid phone number must appear in one of the following two formats: (xxx) xxx-xxxx or xxx-xxx-xxxx. (x means a digit)

#You may also assume each line in the text file must not contain leading or trailing white spaces.

#For example, assume that file.txt has the following content:

#987-123-4567
#123 456 7890
#(123) 456-7890

#Your script should output the following valid phone numbers:
#987-123-4567
#(123) 456-7890

#grep -E '^([0-9]{3,3}-|[0-9]{3,3}\) )[0-9]{3,3}-[0-9]{3,4}$' file1.txt

# slow but memory effective
sed -nE -e '/^[0-9]{3,3}-[0-9]{3,3}-[0-9]{4,4}$/p' \
        -e '/^\([0-9]{3,3}\) [0-9]{3,3}-[0-9]{4,4}$/p' file1.txt