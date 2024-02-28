## InstantSend Technical Information

InstantSend has been integrated into the Core Daemon in two ways:
* "push" notifications (ZMQ and `-instantsendnotify` cmd-line/config option);
* RPC commands.

#### Command line option

When a wallet InstantSend transaction is successfully locked a shell command provided in this option is executed (`%s` in `<cmd>` is replaced by TxID):

```
-instantsendnotify=<cmd>
```

#### RPC

Details pertaining to an observed "Transaction Lock" can also be retrieved through RPC. There is a boolean field named `instantlock` which indicates whether a given transaction is locked via InstantSend. This field is present in the output of some wallet RPC commands e.g. `listsinceblock`, `gettransaction` etc. as well as in the output of some mempool RPC commands e.g. `getmempoolentry` and a couple of others like `getrawmempool` (for `verbose=true` only).
