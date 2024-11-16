#!/bin/bash

#**INITIALIZE CONTAINER**
docker run -d -i	# to run the container in the background
	-p 53682:53682
	-v /home:/home 
	-v /goinfre:/goinfre 
	-v /sgoinfre:/sgoinfre 
	-v /home/dinepomu/sgoinfre/francinette-image/lo
	gs:/francinette/logs-t 
	--name run-paco francinette-image /bin/bash 2>&1 | grep 'already' &> /dev/null

docker start run-paco	# To start the container

#**RUN COMMAND**
# To enter the container bash to make edits
docker exec -it run-paco bash	

# To execute the python script that is inside the container
docker exec -it --workdir $PWD run-paco python3 /francinette/main.py "$@"