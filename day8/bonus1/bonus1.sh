#!/bin/bash

wget $1 -O out
sed -i 's/Volvo/The Best Company Ever/g' out
