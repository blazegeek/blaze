#!/bin/bash
# use testnet settings,  if you need mainnet,  use ~/.blaze/geekcashd.pid file instead
geekcash_pid=$(<~/.blaze/testnet3/geekcashd.pid)
sudo gdb -batch -ex "source debug.gdb" geekcashd ${geekcash_pid}
