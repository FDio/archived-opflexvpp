/* -*- C++ -*-; c-basic-offset: 4; indent-tabs-mode: nil */
/*
 * Copyright (c) 2018 Cisco Systems, Inc. and others.  All rights reserved.
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v1.0 which accompanies this distribution,
 * and is available at http://www.eclipse.org/legal/epl-v10.html
 */

#ifndef __VPP_CONTRACT_MANAGER_H__
#define __VPP_CONTRACT_MANAGER_H__

#include <opflexagent/Agent.h>

#include "VppRuntime.hpp"

#include <vom/acl_l3_rule.hpp>

namespace VPP
{
class ContractManager
{
  public:
    ContractManager(Runtime &r);

    void handle_update(const opflex::modb::URI &uri);

  private:
    /**
     * Referene to runtime data.
     */
    Runtime &m_runtime;
};

extern void setParamUpdate(modelgbp::gbpe::L24Classifier &cls,
                           VOM::ACL::l3_rule &rule);

}; // namespace VPP

/*
 * Local Variables:
 * eval: (c-set-style "llvm.org")
 * End:
 */

#endif
