ARCHS = armv7 arm64
THEOS_BUILD_DIR = debs
ADDITIONAL_OBJCFLAGS = -fobjc-arc
GO_EASY_ON_ME = 1

# PACKAGE_VERSION = 1.0

include theos/makefiles/common.mk

TWEAK_NAME = FaveBot
FaveBot_FILES = Tweak.xm SSKeychain/SSKeychain.m SSKeychain/SSKeychainQuery.m STTwitter/NSDateFormatter+STTwitter.m STTwitter/NSError+STTwitter.m STTwitter/NSString+STTwitter.m STTwitter/STHTTPRequest+STTwitter.m STTwitter/STTwitterAPI.m STTwitter/STTwitterAppOnly.m STTwitter/STTwitterHTML.m STTwitter/STTwitterOAuth.m STTwitter/STTwitterOS.m STTwitter/STTwitterOSRequest.m STTwitter/STHTTPRequest.m
FaveBot_FRAMEWORKS = Foundation UIKit Security Accounts Social

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 Tweetbot"
