#!/bin/bash
echo "cp /dev/random /dev/stdout > /dev/null 2>&1 & sleep 98 && echo 42 > /dev/tcp/localhost/1337" > 101-make_me_win.sh
