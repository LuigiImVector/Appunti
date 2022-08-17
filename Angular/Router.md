# Router
Tag: #angular 
URL: https://angular.io/guide/router

If you are reading this file it means that you want to create a multi-page website using a [[Single Page Application]].

You have to create a folder called `pages` and inside of it you have to create the components for each page:
- `pages/homepage`
- `pages/save`
- `pages/login`
- `pages/register`

In `app.component.html` you have to write only:
```html
<router-outlet></router-outlet>
```

In `app-routing.module.ts`:
```ts
import { NgModule } from '@angular/core';
import { RouterModule, Routes } from '@angular/router';

// the path and the name is the same as the one on app.module.ts 
import { HomepageComponent } from './pages/homepage/homepage.component';
import { SaveComponent } from './pages/save/save.component';

const routes: Routes = [
  { path: '', component: HomepageComponent },
  { path: 'save', component: SaveComponent },

  // otherwise redirect to home
  { path: '**', redirectTo: '' }
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
```

#### Change Page

You can use a normal `<a>` tag or write:
```html
<svg [routerLink]="'url'"></svg> <!-- for example -->
```

## Pass data using Router

1. `{ path: 'save', component: SaveComponent, data: {url: ''}}`
2. 
```html
<input #input type="text" placeholder="Insert URL" />
<svg [routerLink]="'save'" [state]="{url: input.value}"></svg>
```
3. 
```ts
ngOnInit(): void {
  console.log(window.history.state.url);
}
```

Also read https://stackoverflow.com/a/44865817 to know how to pass data using [[GET]].