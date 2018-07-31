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

#include <QStyledItemDelegate>

namespace WalletGui {

class TransactionsTimeDelegate : public QStyledItemDelegate {
  Q_OBJECT
  Q_DISABLE_COPY(TransactionsTimeDelegate)

public:
  explicit TransactionsTimeDelegate(QObject* _parent);
  ~TransactionsTimeDelegate();

  virtual void paint(QPainter* _painter, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;
};

}
