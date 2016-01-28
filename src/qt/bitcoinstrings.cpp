

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *bitcoin_strings[] = {
QT_TRANSLATE_NOOP("bitcoin-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"An error occurred while setting up the RPC address %s port %u for listening: "
"%s"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Cannot obtain a lock on data directory %s. Bitcoin Classic is probably already "
"running."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Discover own IP addresses (default: 1 when listening and no -externalip or -"
"proxy)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Fees (in BTC/Kb) smaller than this are considered zero fee for relaying "
"(default: %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"How thorough the block verification of -checkblocks is (0-4, default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Maximum total fees to use in a single wallet transaction; setting this too "
"low may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Prune configured below the minimum of %d MB.  Please use a higher number."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Reduce storage requirements by pruning (deleting) old blocks. This mode "
"disables wallet support and is incompatible with -txindex. Warning: "
"Reverting this setting requires re-downloading the entire blockchain. "
"(default: 0 = disable pruning blocks, >%u = target size in MiB to use for "
"block files)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"The transaction amount is too small to send after the fee has been deducted"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"To use bitcoind, or the -server option to bitcoin-qt, you must set an "
"rpcpassword in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=bitcoinrpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"Bitcoin Alert\" admin@foo.com\n"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Unable to bind to %s on this computer. Bitcoin Classic is probably already "
"running."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"WARNING: abnormally high number of blocks generated, %d blocks received in "
"the last %d hours (%d expected)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"WARNING: check your network connection, %d blocks received in the last %d "
"hours (%d expected)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: -maxtxfee is set very high! Fees this large could be paid on a "
"single transaction."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong Bitcoin Classic will not work properly."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"You need to rebuild the database using -reindex to go back to unpruned "
"mode.  This will redownload the entire blockchain"),
QT_TRANSLATE_NOOP("bitcoin-core", "(default: %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", "(default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "(default: 1)"),
QT_TRANSLATE_NOOP("bitcoin-core", "<category> can be:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("bitcoin-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Acceptable ciphers (default: %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Activating best chain..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("bitcoin-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("bitcoin-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("bitcoin-core", "Block creation options:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Can't run with a wallet in prune mode."),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("bitcoin-core", "Choose data directory on startup (default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("bitcoin-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("bitcoin-core", "Connection options:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Copyright (C) 2009-%i The Bitcoin Classic Developers"),
QT_TRANSLATE_NOOP("bitcoin-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("bitcoin-core", "Could not parse -rpcbind value %s as network address"),
QT_TRANSLATE_NOOP("bitcoin-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("bitcoin-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("bitcoin-core", "Done loading"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading block database"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading wallet.dat: Wallet requires newer version of Bitcoin Classic"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error opening block database"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("bitcoin-core", "Error"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("bitcoin-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("bitcoin-core", "Fee (in BTC/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("bitcoin-core", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("bitcoin-core", "Importing..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("bitcoin-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("bitcoin-core", "Information"),
QT_TRANSLATE_NOOP("bitcoin-core", "Initialization sanity check failed. Bitcoin Classic is shutting down."),
QT_TRANSLATE_NOOP("bitcoin-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid -onion address: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount for -maxtxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading block index..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Make the wallet broadcast transactions"),
QT_TRANSLATE_NOOP("bitcoin-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Node relay options:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("bitcoin-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Options:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("bitcoin-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Prune cannot be configured with a negative value."),
QT_TRANSLATE_NOOP("bitcoin-core", "Prune mode is incompatible with -txindex."),
QT_TRANSLATE_NOOP("bitcoin-core", "Pruning blockstore..."),
QT_TRANSLATE_NOOP("bitcoin-core", "RPC SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("bitcoin-core", "RPC server options:"),
QT_TRANSLATE_NOOP("bitcoin-core", "RPC support for HTTP persistent connections (default: %d)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Rebuild block chain index from current blk000??.dat files on startup"),
QT_TRANSLATE_NOOP("bitcoin-core", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("bitcoin-core", "Rescanning..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("bitcoin-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("bitcoin-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Server certificate file (default: %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Server private key (default: %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set SSL root certificates for payment request (default: -system-)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set language, for example \"de_DE\" (default: system locale)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Show splash screen on startup (default: 1)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify data directory"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("bitcoin-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Start minimized"),
QT_TRANSLATE_NOOP("bitcoin-core", "The transaction amount is too small to pay the fee"),
QT_TRANSLATE_NOOP("bitcoin-core", "This help message"),
QT_TRANSLATE_NOOP("bitcoin-core", "This is experimental software."),
QT_TRANSLATE_NOOP("bitcoin-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction too large"),
QT_TRANSLATE_NOOP("bitcoin-core", "UI Options:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("bitcoin-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("bitcoin-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Use the test network"),
QT_TRANSLATE_NOOP("bitcoin-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("bitcoin-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("bitcoin-core", "Wallet needed to be rewritten: restart Bitcoin Classic to complete"),
QT_TRANSLATE_NOOP("bitcoin-core", "Wallet options:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Warning"),
QT_TRANSLATE_NOOP("bitcoin-core", "Warning: This version is obsolete; upgrade required!"),
QT_TRANSLATE_NOOP("bitcoin-core", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("bitcoin-core", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("bitcoin-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("bitcoin-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("bitcoin-core", "on startup"),
QT_TRANSLATE_NOOP("bitcoin-core", "wallet.dat corrupt, salvage failed"),
};
