Pod::Spec.new do |s|
  s.name         = 'W1UrlScheme'
  s.version      = '0.0.1'
  s.summary      = 'Library for sending and receiving your payment information in third-party applications'
  s.description  = <<-DESC
                   Library for sending and receiving your payment information in third-party applications
                   DESC
  s.homepage     = 'http://www.walletone.com/ru/merchant/'
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.platform     = :ios, '7.0'
  s.source       = { :git => 'git@github.com:bespalown/W1UrlScheme.git', :branch => 'master' }
  s.source_files = 'W1UrlScheme_Lib/**/*.h'
  s.preserve_paths = 'W1UrlScheme_Lib/W1UrlScheme.a' 
  s.library = 'W1UrlScheme'
  s.xcconfig = { 'LIBRARY_SEARCH_PATHS' => '$(PODS_ROOT)/W1UrlScheme/W1UrlScheme_Lib' }
  s.requires_arc = true

end
