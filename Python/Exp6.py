#Q. Perform 5 manipulations operations open,close,read,write,append and copy from one file to another.
import sys

randomlist= ['a',0,2]
for entry in randomlist:
    try:
        print("The entry is ",entry)
        r=1/int(entry)
        break
    except:
        print("oops!",sys.exc_info()[0],"occured")
        print("Next entry")
        print()
print("The reciprocal of entry  is",r)
