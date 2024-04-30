package=libevent
$(package)_version=2.1.8.2
$(package)_download_path=https://github.com/blazegeek/libevent/releases/download/v2.1.8.2
$(package)_file_name=libevent-2.1.8.2.tar.gz
$(package)_sha256_hash=efc1d54a3bbd1b6c08fbe0915e82ff12ac946e83ffaf8c995b62b260d15884dd

define $(package)_preprocess_cmds
  ./autogen.sh
endef

define $(package)_set_vars
  $(package)_config_opts=--disable-shared --disable-openssl --disable-libevent-regress
  $(package)_config_opts_release=--disable-debug-mode
  $(package)_config_opts_linux=--with-pic
endef

define $(package)_config_cmds
  $($(package)_autoconf)
endef

define $(package)_build_cmds
  $(MAKE)
endef

define $(package)_stage_cmds
  $(MAKE) DESTDIR=$($(package)_staging_dir) install
endef

define $(package)_postprocess_cmds
endef
