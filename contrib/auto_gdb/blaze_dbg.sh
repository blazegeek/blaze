#!/bin/bash
# use testnet settings,  if you need mainnet,  use ~/.blaze/blazed.pid file instead
blaze_pid=$(<~/.blaze/testnet3/blazed.pid)
sudo gdb -batch -ex "source debug.gdb" blazed ${blaze_pid}
