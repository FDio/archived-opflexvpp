/* -*- C++ -*-; c-basic-offset: 4; indent-tabs-mode: nil */
/*
 * Copyright (c) 2017-2018 Cisco Systems, Inc. and others.  All rights reserved.
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v1.0 which accompanies this distribution,
 * and is available at http://www.eclipse.org/legal/epl-v10.html
 */

#ifndef __VPP_UTIL_H__
#define __VPP_UTIL_H__

#include <opflex/modb/MAC.h>

#include <boost/optional.hpp>

#include <vom/interface.hpp>

using namespace VOM;

namespace VPP
{
const interface::type_t &getIntfTypeFromName(const std::string &name);

boost::optional<mac_address_t>
mac_from_modb(boost::optional<const opflex::modb::MAC &>);
};

/*
 * Local Variables:
 * eval: (c-set-style "llvm.org")
 * End:
 */

#endif
