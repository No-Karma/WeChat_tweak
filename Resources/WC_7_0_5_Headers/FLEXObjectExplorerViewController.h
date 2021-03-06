//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UISearchBarDelegate.h"

@class NSArray, NSIndexSet, NSString, UISearchBar;

@interface FLEXObjectExplorerViewController : UITableViewController <UISearchBarDelegate>
{
    _Bool _includeInheritance;
    id _object;
    NSArray *_properties;
    NSArray *_inheritedProperties;
    NSArray *_filteredProperties;
    NSArray *_ivars;
    NSArray *_inheritedIvars;
    NSArray *_filteredIvars;
    NSArray *_methods;
    NSArray *_inheritedMethods;
    NSArray *_filteredMethods;
    NSArray *_classMethods;
    NSArray *_inheritedClassMethods;
    NSArray *_filteredClassMethods;
    NSArray *_superclasses;
    NSArray *_filteredSuperclasses;
    NSArray *_cachedCustomSectionRowCookies;
    NSIndexSet *_customSectionVisibleIndexes;
    UISearchBar *_searchBar;
    NSString *_filterText;
}

+ (id)inheritedIvarsForClass:(Class)arg1;
+ (id)inheritedMethodsForClass:(Class)arg1;
+ (id)inheritedPropertiesForClass:(Class)arg1;
+ (id)ivarsForClass:(Class)arg1;
+ (id)methodsForClass:(Class)arg1;
+ (id)propertiesForClass:(Class)arg1;
+ (id)superclassesForClass:(Class)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *cachedCustomSectionRowCookies; // @synthesize cachedCustomSectionRowCookies=_cachedCustomSectionRowCookies;
- (_Bool)canCallInstanceMethods;
- (_Bool)canDrillInToRow:(long long)arg1 inExplorerSection:(unsigned long long)arg2;
- (_Bool)canHaveInstanceState;
@property(retain, nonatomic) NSArray *classMethods; // @synthesize classMethods=_classMethods;
- (_Bool)customSectionCanDrillIntoRowWithCookie:(id)arg1;
- (id)customSectionDrillInViewControllerForRowCookie:(id)arg1;
- (id)customSectionRowCookieForVisibleRow:(unsigned long long)arg1;
- (id)customSectionRowCookies;
- (id)customSectionSubtitleForRowCookie:(id)arg1;
- (id)customSectionTitle;
- (id)customSectionTitleForRowCookie:(id)arg1;
@property(retain, nonatomic) NSIndexSet *customSectionVisibleIndexes; // @synthesize customSectionVisibleIndexes=_customSectionVisibleIndexes;
- (id)drillInViewControllerForRow:(unsigned long long)arg1 inExplorerSection:(unsigned long long)arg2;
- (unsigned long long)explorerSectionAtIndex:(long long)arg1;
@property(retain, nonatomic) NSString *filterText; // @synthesize filterText=_filterText;
@property(retain, nonatomic) NSArray *filteredClassMethods; // @synthesize filteredClassMethods=_filteredClassMethods;
@property(retain, nonatomic) NSArray *filteredIvars; // @synthesize filteredIvars=_filteredIvars;
@property(retain, nonatomic) NSArray *filteredMethods; // @synthesize filteredMethods=_filteredMethods;
- (id)filteredMethodsFromMethods:(id)arg1 inheritedMethods:(id)arg2 areClassMethods:(_Bool)arg3;
@property(retain, nonatomic) NSArray *filteredProperties; // @synthesize filteredProperties=_filteredProperties;
@property(retain, nonatomic) NSArray *filteredSuperclasses; // @synthesize filteredSuperclasses=_filteredSuperclasses;
@property(nonatomic) _Bool includeInheritance; // @synthesize includeInheritance=_includeInheritance;
@property(retain, nonatomic) NSArray *inheritedClassMethods; // @synthesize inheritedClassMethods=_inheritedClassMethods;
@property(retain, nonatomic) NSArray *inheritedIvars; // @synthesize inheritedIvars=_inheritedIvars;
@property(retain, nonatomic) NSArray *inheritedMethods; // @synthesize inheritedMethods=_inheritedMethods;
@property(retain, nonatomic) NSArray *inheritedProperties; // @synthesize inheritedProperties=_inheritedProperties;
- (id)initWithStyle:(long long)arg1;
@property(retain, nonatomic) NSArray *ivars; // @synthesize ivars=_ivars;
@property(retain, nonatomic) NSArray *methods; // @synthesize methods=_methods;
- (long long)numberOfRowsForExplorerSection:(unsigned long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (id)possibleExplorerSections;
@property(retain, nonatomic) NSArray *properties; // @synthesize properties=_properties;
- (void)refreshControlDidRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (id)sectionTitleWithBaseName:(id)arg1 totalCount:(unsigned long long)arg2 filteredCount:(unsigned long long)arg3;
@property(retain, nonatomic) NSArray *superclasses; // @synthesize superclasses=_superclasses;
- (_Bool)shouldShowDescription;
- (id)subtitleForRow:(long long)arg1 inExplorerSection:(unsigned long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)titleForClassMethodAtIndex:(long long)arg1;
- (id)titleForExplorerSection:(unsigned long long)arg1;
- (id)titleForIvarAtIndex:(long long)arg1;
- (id)titleForMethodAtIndex:(long long)arg1;
- (id)titleForPropertyAtIndex:(long long)arg1;
- (id)titleForRow:(long long)arg1 inExplorerSection:(unsigned long long)arg2;
- (void)updateClassMethods;
- (void)updateCustomData;
- (void)updateDisplayedData;
- (void)updateFilteredClassMethods;
- (void)updateFilteredCustomData;
- (void)updateFilteredIvars;
- (void)updateFilteredMethods;
- (void)updateFilteredProperties;
- (void)updateFilteredSuperclasses;
- (void)updateIvars;
- (void)updateMethods;
- (void)updateProperties;
- (void)updateSuperclasses;
- (void)updateTableData;
- (id)valueForIvarAtIndex:(long long)arg1;
- (id)valueForPropertyAtIndex:(long long)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)visibleExplorerSections;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

