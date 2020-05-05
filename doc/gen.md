		while (genesis.GetHash() > uint256("0x00000ffff0000000000000000000000000000000000000000000000000000000")) {
				genesis.nNonce++;
				if (genesis.nNonce % 128 == 0) printf("\rnonce %08x", genesis.nNonce);
		}
		printf("genesis is %s\n", genesis.ToString().c_str());		