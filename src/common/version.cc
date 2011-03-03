// -*- mode:C++; tab-width:8; c-basic-offset:2; indent-tabs-mode:t -*-
// vim: ts=8 sw=2 smarttab
/*
 * Ceph - scalable distributed file system
 *
 * Copyright (C) 2011 New Dream Network
 *
 * This is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License version 2.1, as published by the Free Software
 * Foundation.  See file COPYING.
 *
 */

#include "acconfig.h"
#include "ceph_ver.h"
#include "common/version.h"

#include <sstream>
#include <string>

#define _STR(x) #x
#define STRINGIFY(x) _STR(x)

const char * const ceph_version_to_str(void)
{
  return VERSION;
}

const char * const git_version_to_str(void)
{
  return STRINGIFY(CEPH_GIT_VER);
}

std::string const pretty_version_to_str(void)
{
  std::ostringstream oss;
  oss << "ceph version " << VERSION << " (commit:"
      << STRINGIFY(CEPH_GIT_VER) << ")";
  return oss.str();
}
