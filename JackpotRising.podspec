Pod::Spec.new do |s|

  s.platform = :ios
  s.ios.deployment_target = '9.0'
  s.name = "JackpotRising"
  s.summary = "Jackpot Rising is a patent pending software solution that you can integrate into your games, that enables your users to compete against."
  s.requires_arc = true

  s.version = "3.5.12"
  s.license = { :type => "Apache", :file => "LICENSE" }
  s.author = { "Nick Wallace" => "developer@jackpotrising.com" }

  s.homepage = "https://github.com/JackpotRising"

  s.source = { :git => "https://github.com/JackpotRising/cocoapods.git"}

  s.framework = 'UIKit', 'Accelerate', 'MobileCoreServices', 'QuartzCore', 'Security', 'CoreLocation', 'CFNetwork', 'SystemConfiguration'

  s.source_files = 'JackpotRising/**/*.{swift,h,m}'
  s.dependency  'Auth0', '~> 1.13'

  s.pod_target_xcconfig = { 'SWIFT_VERSION' => '4.0' }

  s.module_map = 'JackpotRising/JackpotRising.modulemap'
  s.resources = 'JackpotRising/Resources/*.{xcassets,ttf, plist}',
                'JackpotRising/**/*.{storyboard,xib}'

  s.libraries = 'icucore'
  s.vendored_frameworks = 'JackpotRising/External/ZooziOSStatic.framework'

  s.pod_target_xcconfig = { "OTHER_LDFLAGS" => "$(inherited) -ObjC -all_load", 'CLANG_ENABLE_MODULES' => 'YES',
  'DEFINES_MODULE' => 'YES',
  'ALWAYS_EMBED_SWIFT_STANDARD_LIBRARIES' => 'YES',
  'ENABLE_BITCODE' => 'NO'}

  s.user_target_xcconfig = { "OTHER_LDFLAGS" => "$(inherited) -ObjC -all_load", 'CLANG_ENABLE_MODULES' => 'YES',
  'DEFINES_MODULE' => 'YES',
  'ALWAYS_EMBED_SWIFT_STANDARD_LIBRARIES' => 'YES'}

  s.swift_version = '4.0'

end
