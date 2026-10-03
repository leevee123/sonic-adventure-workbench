# Tools researched for Sonic Adventure DX

Research date: October 2, 2026. Technical capabilities below were checked against project source or official documentation. X search results are incomplete; a social demonstration alone does not establish a finished port.

| Tool or project | Use here | Status |
|---|---|---|
| [Ghidra](https://github.com/NationalSecurityAgency/ghidra) + [GameCube Loader](https://github.com/Cuyler36/Ghidra-GameCube-Loader) | Gekko disassembly, REL linking, symbols and pseudocode | Ghidra 12.1.4 installed with JDK 21 and loader; full game research project saved |
| [ghidra-headless-mcp](https://github.com/mrphrazer/ghidra-headless-mcp) | Headless Ghidra access from an AI client | Installed and registered as `ghidra_sonic`; 212 tools; actual retail-function decompilation tested |
| [DolRecomp](https://github.com/ExpansionPak/DolRecomp) | PowerPC CPU translation to C/native code | Built the exact fork pinned by Wind Waker; local SADX compatibility patch retained; current runtime-compatible translator also built |
| [ModernGekko](https://github.com/ExpansionPak/ModernGekko) / [RecompCore](https://github.com/ExpansionPak/RecompCore) | Graphics, audio, controllers, hardware and fallback execution | Pinned source and 31 dependencies fetched; Windows runtime and DOL module built; boot validation recorded separately |
| [decomp-toolkit](https://github.com/encounter/decomp-toolkit) | RVZ extraction, binary splitting and matching-project support | 1.8.4 installed; community project also uses its pinned 0.9.2 |
| [objdiff](https://github.com/encounter/objdiff) | Compare rebuilt objects with original PowerPC code | 3.8.2 GUI/CLI installed; local SADX report generated |
| [doldecomp/sadx](https://github.com/doldecomp/sadx) | Existing GameCube source recovery, symbol addresses and module hashes | Pinned checkout builds the supplied USA executable with the expected SHA-1 |
| [SACompGC](https://github.com/X-Hax/SACompGC) | Decode SADX's custom module compression | Native tool and Python decoder checked against the same hashes for all 268 modules |
| [Mizuchi](https://github.com/macabeus/mizuchi) | Automated write/compile/compare loops for matching source recovery | Researched; its Claude integration requires separate credentials. Its optional m2c phase does not establish PowerPC support by itself |
| [LaurieWired/GhidraMCP](https://github.com/LaurieWired/GhidraMCP), [pyghidra-mcp](https://github.com/clearbluejar/pyghidra-mcp), [GhidrAssistMCP](https://github.com/jtang613/GhidrAssistMCP) | Other Ghidra integrations | Compared as alternatives; the installed headless server avoids depending on an open GUI |

[Wind-Waker-Recomp](https://github.com/elliotttate/Wind-Waker-Recomp) is the architectural reference. Its pipeline translates a DOL plus 415 REL modules, combines them into dispatch tables, and supplies a substantial hardware/rendering runtime. CPU translation is one part of that implementation. Our disc has 268 modules and uses SaCompGC, so its extraction and address layout require SADX-specific handling. The Wind Waker source commit and translator pin are recorded in the local manifests.

The strongest X lead with a directly readable post was [Zachary Canann's February 2, 2026 FFCC demonstration](https://x.com/zcanann/status/2018405547934884278), linking [FFCC-Decomp](https://github.com/zcanann/FFCC-Decomp). It demonstrates an AI-assisted matching workflow. Its source notes that debug/release symbols substantially help that particular game; its reported progress cannot be transferred directly to SADX.

LaurieWired's [Ghidra MCP announcement](https://x.com/lauriewired/status/1904582573046878333) is another relevant social lead. The post was inaccessible through this search interface, so the repository was used to verify functionality. Bruno Macabeus's [matching-decompilation write-up](https://macabeus.medium.com/can-llms-really-do-matching-decompilation-i-tested-60-functions-to-find-out-4e39b0ae4288) links Mizuchi and his [X account](https://x.com/bmacabeus); its benchmark covers GBA/N64 functions, rather than Sonic Adventure's Gekko code.

The ReShine demonstration by [binsento](https://x.com/binsent_o) led to DolRecomp/ModernGekko. The current ModernGekko source credits binsento's Sunshine/Brawl work. A directly readable original ReShine post was not available, so this report makes no independent release-status claim about that port.

For a usable PC build, static recompilation with a tested runtime is the practical path to evaluate first. Matching source recovery can proceed alongside it using the existing SADX project and objdiff. Ghidra pseudocode alone is not a buildable source port.
