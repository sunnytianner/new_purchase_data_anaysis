//
//  main.cpp
//  new_purchase_data_anaysis
//
//  Created by Eagle on 13-7-24.
//  Copyright (c) 2013年 Eagle. All rights reserved.
//

#include <iostream>
#include "NewPurchaseDataAnalysis.h"

int main(int argc, const char * argv[])
{
    NewPurchaseDataAnalysis analysis("new","/Users/tian19880220/workspace/data/new_purchase_data_anaysis/test","/Users/tian19880220/workspace/data/new_purchase_data_anaysis/trans");
    analysis.loadTransferModel();
    for (int i=0; i<=10; i++) {
        analysis.setControlThreshold(i);
        cout << i << ":" << endl;
        analysis.predictFromHistoryAnalysis();
        analysis.resetValues();
    }
    
    return 0;
}

