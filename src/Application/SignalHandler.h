/*
 * Copyright (c) 2017-2018, The Auruxcoin Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Auruxcoin.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QObject>

namespace WalletGui {

class SignalHandler : public QObject {
  Q_OBJECT
  Q_DISABLE_COPY(SignalHandler)

public:
  static SignalHandler& instance();

  void init();

private:
  SignalHandler();
  ~SignalHandler();

  static void sigHandler(int _signal);

Q_SIGNALS:
  void quitSignal();
};

}
