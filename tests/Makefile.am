SUBDIRS = . io

check_PROGRAMS = \
	lock_attr_exclusive \
	lock_attr_global \
	lock_attr_shared \
	lock_invalid_mode \
	lock_recursive_exclusive \
	lock_recursive_shared \
	rule_3_2_3 \
	rule_3_3_2 \
	rule_3_6_38 \
	rule_3_7_3 \
	rule_4_2_1 \
	rule_4_2_2 \
	rule_4_3_11

TESTS = $(check_PROGRAMS)

INCLUDES = -I$(top_srcdir)/include
LDADD = ../src/libvisa.la
LDFLAGS = -no-install
