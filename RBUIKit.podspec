

Pod::Spec.new do |s|
  s.name             = 'RBUIKit'
  s.version="1.4.0"
  s.summary          = 'A short description of RBUIKit.'
  s.description      =  'UIKit '
  s.homepage         = 'https://github.com/RooboMobile/RBUIKit'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'baxiang' => 'baxiang@roobo.com' }
  s.source           = { :git => 'https://github.com/RooboMobile/RBUIKit.git', :tag => s.version.to_s }
  s.ios.deployment_target = '7.0'
  s.source_files = 'RBUIKit/*.{h,m}'
  s.frameworks       = 'Foundation', 'UIKit', 'CoreGraphics'

end
