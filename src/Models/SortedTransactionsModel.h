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

#include <QSortFilterProxyModel>

namespace WalletGui {

class SortedTransactionsModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(SortedTransactionsModel)

public:
  SortedTransactionsModel(QAbstractItemModel* _sourceModel, QObject* _parent);
  ~SortedTransactionsModel();

protected:
  bool lessThan(const QModelIndex& _left, const QModelIndex& _right) const override;
};

}
