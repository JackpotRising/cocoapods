Pod::Spec.new do |s|

  s.platform = :ios
  s.ios.deployment_target = '10.0'
  s.name = "JackpotRising"
  s.summary = "Jackpot Rising is a patented software solution that you can integrate into your games, that enables your users to compete against."
  s.requires_arc = true
  s.swift_version = '4.0'

  s.version = "3.5.34"

  s.license = { :type => "Apache", :file => "LICENSE" }

  s.author = { "Nick Wallace" => "developer@jackpotrising.com" }

  s.homepage = "https://github.com/JackpotRising"

  # 6 - Replace this URL with your own Git URL from "Quick Setup"
  s.source = { :git => "https://github.com/JackpotRising/cocoapods.git", :tag => "#{s.version}"}

  # 7
  s.framework = 'UIKit', 'Accelerate', 'MobileCoreServices', 'QuartzCore', 'Security', 'CoreLocation', 'CFNetwork', 'SystemConfiguration'

  s.vendored_frameworks = 'JackpotRising.framework'

  s.pod_target_xcconfig = { "OTHER_LDFLAGS" => "$(inherited) -ObjC -all_load",
  'CLANG_ENABLE_MODULES' => 'YES',
  'DEFINES_MODULE' => 'YES',
  'ALWAYS_EMBED_SWIFT_STANDARD_LIBRARIES' => 'YES',
  'LD_RUNPATH_SEARCH_PATHS' => "$(inherited)"}

  s.user_target_xcconfig = { "OTHER_LDFLAGS" => "$(inherited) -ObjC -all_load",
  'CLANG_ENABLE_MODULES' => 'YES',
  'DEFINES_MODULE' => 'YES',
  'ALWAYS_EMBED_SWIFT_STANDARD_LIBRARIES' => 'YES',
  'LD_RUNPATH_SEARCH_PATHS' => "$(inherited)"}

end
