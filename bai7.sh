#!/bin/bash

# Get the current hour
hour=$(date +%H)

# Determine the greeting based on the hour
if [ $hour -ge 0 ] && [ $hour -lt 12 ]; then
    echo "Chào buổi sáng"
elif [ $hour -ge 12 ] && [ $hour -lt 18 ]; then
    echo "Chào buổi trưa"
else
    echo "Chào buổi tối"
fi