# Lifecycle hooks
Tag: #angular
URL: https://www.youtube.com/watch?v=AAu8bjj6-UI

Lifecycle hooks are a special functionality in [[Angular]] that allow us to “hook into” and run [[code]] at a specific lifecycle [[event]] of a [[component]] or directive.
All the lifecycle hooks in order of they get initialized:
1. `ngOnChanges`
2. `ngOnInit`
3. `ngDoCheck`
4. `ngAfterContentInit`
5. `ngAfterContentChecked`
6. `ngAfterViewInit`
7. `ngAfterViewChecked`
8. `ngOnDestroy`

In the code you have to include the lifecycle hook(s) in the [[import]] and implement it in the [[class]]:
```ts
import { Component, OnInit, OnDestroy } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})

export class AppComponent implements OnInit, OnDestroy {
  intervalSub: number = 0;

  ngOnInit() {
    this.intervalSub = window.setInterval(() => {
      console.log('Hello from ngOnInit');
    }, 1000)
  }

  ngOnDestroy() {
    if(this.intervalSub) {
      clearInterval(this.intervalSub);
    }
  }
}
```
