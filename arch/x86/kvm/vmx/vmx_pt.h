/*
 * This file is part of Redqueen.
 *
 * (C) Sergej Schumilo, 2019 <sergej@schumilo.de>
 * (C) Cornelius Aschermann, 2019 <cornelius.aschermann@rub.de>
 *
 * With adaptations by Steffen Schulz
 * (C) 2020, Intel Corporation
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#ifndef __VMX_PT_H__
#define __VMX_PT_H__

#include "vmx.h"

struct vcpu_vmx_pt;

int vmx_pt_create_fd(struct vcpu_vmx_pt *vmx_pt_config);

bool vmx_pt_vmentry(struct vcpu_vmx_pt *vmx_pt);
bool vmx_pt_vmexit(struct vcpu_vmx_pt *vmx_pt);

int vmx_pt_setup(struct vcpu_vmx *vmx, struct vcpu_vmx_pt **vmx_pt_config);
void vmx_pt_destroy(struct vcpu_vmx *vmx, struct vcpu_vmx_pt **vmx_pt_config);

void vmx_pt_init(void);
void vmx_pt_exit(void);

int vmx_pt_enabled(void);

#endif
