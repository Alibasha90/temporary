import subprocess as sp
import os
import shlex

while(1):
    my_file=input("please enter your file name:")
    cmd=["python3"]

    cmd.extend(shlex.split(my_file))




    obj=sp.run(cmd,capture_output=True)
    
    if(obj.returncode==2):
        print("Not found file")
    else:    
        print(obj.stdout.decode())








#print(os.popen("ls").read())

#obj=sp.run("ls",capture_output=True)


#obj=sp.run(["ls","ljsldfj"],stdout=sp.PIPE,stderr=sp.STDOUT)
#print(obj.stdout)

#print(obj.stdout.decode() )

