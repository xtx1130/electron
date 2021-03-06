// Copyright (c) 2019 GitHub, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#ifndef ATOM_BROWSER_NET_ASAR_ASAR_URL_LOADER_H_
#define ATOM_BROWSER_NET_ASAR_ASAR_URL_LOADER_H_

#include "services/network/public/mojom/url_loader.mojom.h"

namespace asar {

void CreateAsarURLLoader(
    const network::ResourceRequest& request,
    network::mojom::URLLoaderRequest loader,
    network::mojom::URLLoaderClientPtr client,
    scoped_refptr<net::HttpResponseHeaders> extra_response_headers);

}  // namespace asar

#endif  // ATOM_BROWSER_NET_ASAR_ASAR_URL_LOADER_H_
