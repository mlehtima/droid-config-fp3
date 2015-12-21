#!/bin/sh

if [ "$(getprop persist.vendor.bt.address)" != "" ]; then
    echo $(getprop persist.vendor.bt.address) > /var/lib/bluetooth/board-address
    if [ ! -f /var/lib/bluetooth/board-address ]; then
        echo "Failed to set bluetooth address."
        exit 1
    fi
else
    echo "Failed to get bluetooth address!"
    exit 1
fi

exit 0
