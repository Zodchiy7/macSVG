//
//  TspanPopoverViewController.h
//  TextElementEditor
//
//  Created by Douglas Ward on 8/26/13.
//  Copyright (c) 2013 ArkPhone LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>

@class TextElementEditor;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


@interface TspanPopoverViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource>
{
    IBOutlet TextElementEditor * textElementEditor;
    IBOutlet NSPopover * tspanPopover;
    
    IBOutlet WebView * tspanPreviewWebView;
    IBOutlet NSTableView * tspanTableView;
    
    IBOutlet NSTextView * cssStyleTextView;
    
    IBOutlet NSColorWell * shadowColorWell;
    IBOutlet NSTextField * horizontalOffsetTextField;
    IBOutlet NSPopUpButton * horizontalOffsetUnitPopUpButton;
    IBOutlet NSTextField * verticalOffsetTextField;
    IBOutlet NSPopUpButton * verticalOffsetUnitPopUpButton;
    IBOutlet NSTextField * blurRadiusTextField;
    IBOutlet NSPopUpButton * blurRadiusUnitPopUpButton;
    
    IBOutlet NSButton * addShadowButton;
    IBOutlet NSButton * cancelButton;
    IBOutlet NSButton * doneButton;
    
    IBOutlet NSButton * resetDXButton;
    IBOutlet NSButton * resetDYButton;
    IBOutlet NSButton * resetRotateButton;
}

@property(strong) NSMutableArray * tspanSettingsArray;

@property(strong) NSXMLElement * originalTextElement;
@property(strong) NSXMLElement * originalTspanElement;
@property(strong) NSXMLElement * masterTextElement;
@property(strong) NSXMLElement * masterTspanElement;
@property(strong) NSString * masterTextContentString;

@property(strong) NSXMLDocument * tspanPreviewXMLDocument;

- (void)loadSettingsForTspan:(NSXMLElement *)tspanElement textElement:(NSXMLElement *)textElement;

- (IBAction)tableCellChanged:(id)sender;

- (IBAction)addShadowButtonAction:(id)sender;
- (IBAction)cancelButtonAction:(id)sender;
- (IBAction)doneButtonAction:(id)sender;

- (IBAction)resetDXButtonAction:(id)sender;
- (IBAction)resetDYButtonAction:(id)sender;
- (IBAction)resetRotateButtonAction:(id)sender;

@end


#pragma clang diagnostic pop
