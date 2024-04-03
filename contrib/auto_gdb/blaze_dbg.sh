#!/bin/bash
# use testnet settings,  if you need mainnet,  use ~/.blaze/blazed.pid file instead
geekcash_pid=$(<~/.blaze/testnet3/blazed.pid)
sudo gdb -batch -ex "source debug.gdb" blazed ${geekcash_pid}
