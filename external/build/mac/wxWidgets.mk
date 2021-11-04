# wxWidgets-3.1.5

include $(dir $(lastword $(MAKEFILE_LIST)))/setting.mk

SRCDIR		:= $(TOPDIR)/external/wxWidgets
WORKDIR		:= $(WORKDIR)/wxWidgets
OPTDIR		:= $(OPTDIR)/wxWidgets

.PHONY: wxWidgets
wxWidgets:
	rm -rf $(WORKDIR)
	mkdir -p $(WORKDIR)
	cd $(WORKDIR); \
	$(SRCDIR)/configure \
		--enable-debug \
		--disable-shared \
		--enable-monolithic \
		--with-libpng=builtin \
		--with-libjpeg=builtin \
		--with-libtiff=builtin \
		--prefix=$(OPTDIR) \
		--with-macosx-version-min=$(DEPLOYMENT_TARGET); \
	make; \
	make install
