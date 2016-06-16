// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2015 Intel Corporation. All Rights Reserved.

#pragma once
#ifndef LIBREALSENSE_R200_H
#define LIBREALSENSE_R200_H

#include "device.h"
#include "ds-camera.h"

#define R200_PRODUCT_ID  0x0a80
#define LR200_PRODUCT_ID 0x0abf
#define ZR300_PRODUCT_ID 0x0acb
#define FISHEYE_PRODUCT_ID 0x0ad0

namespace rsimpl
{
    class r200_camera final : public ds_camera
    {
    protected:
        //std::shared_ptr<rs_device> make_device(std::shared_ptr<uvc::device> device, static_device_info& info, ds::ds_calibration& c) override;

    public:
        r200_camera(std::shared_ptr<uvc::device> device, const static_device_info & info);
        ~r200_camera();

        bool supports_option(rs_option option) const override;
    };

    std::shared_ptr<rs_device> make_r200_device(std::shared_ptr<uvc::device> device);
    std::shared_ptr<rs_device> make_lr200_device(std::shared_ptr<uvc::device> device);
}

#endif
