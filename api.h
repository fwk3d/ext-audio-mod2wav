#if CODE

AUTORUN {
    recipe(
        // paths and extensions. final ziplevel
        "**.mod;**.xm;**.s3m;**.it", 0,
        // conversion steps and expected outfile type
        "ext/ext-audio-mod2wav/mod2wav.EXE INPUT OUTPUT.wav"
    );
}

#endif
