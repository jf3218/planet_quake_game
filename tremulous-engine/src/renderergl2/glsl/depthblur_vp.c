const char *fallbackShader_depthblur_vp = "\x61\x74\x74\x72\x69\x62\x75\x74\x65\x20\x76\x65\x63\x34\x20\x61\x74\x74\x72\x5f\x50\x6f\x73\x69\x74\x69\x6f\x6e\x3b\x0a\x61\x74\x74\x72\x69\x62\x75\x74\x65\x20\x76\x65\x63\x34\x20\x61\x74\x74\x72\x5f\x54\x65\x78\x43\x6f\x6f\x72\x64\x30\x3b\x0a\x0a\x75\x6e\x69\x66\x6f\x72\x6d\x20\x76\x65\x63\x34\x20\x20\x20\x75\x5f\x56\x69\x65\x77\x49\x6e\x66\x6f\x3b\x20\x2f\x2f\x20\x7a\x66\x61\x72\x20\x2f\x20\x7a\x6e\x65\x61\x72\x2c\x20\x7a\x66\x61\x72\x2c\x20\x31\x2f\x77\x69\x64\x74\x68\x2c\x20\x31\x2f\x68\x65\x69\x67\x68\x74\x0a\x0a\x76\x61\x72\x79\x69\x6e\x67\x20\x76\x65\x63\x32\x20\x20\x20\x76\x61\x72\x5f\x53\x63\x72\x65\x65\x6e\x54\x65\x78\x3b\x0a\x0a\x76\x6f\x69\x64\x20\x6d\x61\x69\x6e\x28\x29\x0a\x7b\x0a\x09\x67\x6c\x5f\x50\x6f\x73\x69\x74\x69\x6f\x6e\x20\x3d\x20\x61\x74\x74\x72\x5f\x50\x6f\x73\x69\x74\x69\x6f\x6e\x3b\x0a\x09\x76\x65\x63\x32\x20\x77\x68\x20\x3d\x20\x76\x65\x63\x32\x28\x31\x2e\x30\x29\x20\x2f\x20\x75\x5f\x56\x69\x65\x77\x49\x6e\x66\x6f\x2e\x7a\x77\x20\x2d\x20\x76\x65\x63\x32\x28\x31\x2e\x30\x29\x3b\x0a\x09\x76\x61\x72\x5f\x53\x63\x72\x65\x65\x6e\x54\x65\x78\x20\x3d\x20\x28\x66\x6c\x6f\x6f\x72\x28\x61\x74\x74\x72\x5f\x54\x65\x78\x43\x6f\x6f\x72\x64\x30\x2e\x78\x79\x20\x2a\x20\x77\x68\x29\x20\x2b\x20\x76\x65\x63\x32\x28\x30\x2e\x35\x29\x29\x20\x2a\x20\x75\x5f\x56\x69\x65\x77\x49\x6e\x66\x6f\x2e\x7a\x77\x3b\x0a\x0a\x09\x2f\x2f\x76\x65\x63\x32\x20\x73\x63\x72\x65\x65\x6e\x43\x6f\x6f\x72\x64\x73\x20\x3d\x20\x67\x6c\x5f\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2e\x78\x79\x20\x2f\x20\x67\x6c\x5f\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2e\x77\x3b\x0a\x09\x2f\x2f\x76\x61\x72\x5f\x53\x63\x72\x65\x65\x6e\x54\x65\x78\x20\x3d\x20\x73\x63\x72\x65\x65\x6e\x43\x6f\x6f\x72\x64\x73\x20\x2a\x20\x30\x2e\x35\x20\x2b\x20\x30\x2e\x35\x3b\x0a\x7d\x0a";
