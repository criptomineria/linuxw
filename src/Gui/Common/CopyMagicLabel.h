/*
 * Copyright (c) 2017-2018, The auruxcoin Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of auruxcoin.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include "MagicLabel.h"

namespace WalletGui {

class CopyMagicLabel : public MagicLabel {
  Q_OBJECT
  Q_DISABLE_COPY(CopyMagicLabel)

public:
  explicit CopyMagicLabel(QWidget* _parent);
  ~CopyMagicLabel();
};

}
