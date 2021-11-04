DEPLOYMENT_TARGET	:= 11.0

CXX		:= clang++
CXXFLAGS	:= -std=c++11 -stdlib=libc++

CURDIR		:= $(abspath $(dir $(lastword $(MAKEFILE_LIST))))
TOPDIR		:= $(abspath $(CURDIR)/../../..)
WORKDIR		:= $(CURDIR)/work
OPTDIR		:= $(TOPDIR)/external/opt/mac
