# Components communications
Tag: #angular
URL: https://www.youtube.com/watch?v=AAu8bjj6-UI

There is 4 methods to make the [[components]] communicate:
- [[Binding]]: `@Input` and `@Output`
- [[Reference]]: `@ViewChild` and `@ContentChild`
- [[Provider]]: Service
- [[Template Outlet]]
- (+1) Using [[router]] (see [[Router#Pass data using Router]])

## Parent to Child: using input decorator
In the `child.component.ts`:
```ts
import { Component, OnInit, Input } from '@angular/core';

@Component({
  selector: 'app-child',
  templateUrl: './child.component.html',
  styleUrls: ['./child.component.css']
})
export class ChildComponent implements OnInit {
  @Input() childMessage: string;
  constructor() { }

  ngOnInit(): void {
  }

}
```

In the `child.component.html`:
```html
Say {{childMessage}}
```

In the `parent.component.html`:
```html
<app-child [childMessage]="'Hello from Parents'"></app-child>
```

In the `app.component.html`:
```html
<app-parent></app-parent>
```

## Child to Parent: using output decorator
In the `child.component.ts`:
```ts
import { Component, OnInit, Output, EventEmitter } from '@angular/core';

@Component({
  selector: 'app-child',
  templateUrl: './child.component.html',
  styleUrls: ['./child.component.css']
})
export class ChildComponent implements OnInit {
  @Output() messageEvent = new EventEmitter<string>();
  constructor() { }

  ngOnInit(): void {
  }
  
  sendMessage() {
    this.messageEvent.emit('Hello from Child');
  }
}
```

In the `child.component.html`:
```html
<button (click)="sendMessage()">Send message to Parent</button>
```

In the `parent.component.ts`:
```ts
import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-parent',
  templateUrl: './parent.component.html',
  styleUrls: ['./parent.component.css']
})
export class ParentComponent implements OnInit {
  fromChild: string;

  constructor() { }

  ngOnInit(): void {
  }

  receiveMessage(msg:string) {
    this.fromChild = msg;
  }

}
```

In the `parent.component.html`:
```html
<app-child (messageEvent)="receiveMessage($event)"></app-child>
<br />This is from child: {{fromChild}}
```

In the `app.component.html`:
```html
<app-parent></app-parent>
```

## Child to Parent: using viewchild
In the `child.component.ts`:
```ts
import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-child',
  templateUrl: './child.component.html',
  styleUrls: ['./child.component.css']
})
export class ChildComponent implements OnInit {
  message = 'message from child component';
  constructor() { }

  ngOnInit(): void {
  }
}
```

In the `parent.component.ts`:
```ts
import { Component, OnInit, ViewChild, AfterViewInit } from '@angular/core';
import { ChildComponent } from '../child/child.component';

@Component({
  selector: 'app-parent',
  templateUrl: './parent.component.html',
  styleUrls: ['./parent.component.css']
})
export class ParentComponent implements OnInit {
  childComponentMessage: string;
  @ViewChild(ChildComponent) child: ChildComponent;

  constructor() { }

  ngOnInit(): void {
  }

  ngAfterViewInit() {
    this.childComponentMessage = this.child.message;
  }
}
```

In the `parent.component.html`:
```html
This is from child: {{childComponentMessage}}
```

In the `app.component.html`:
```html
<app-parent></app-parent>
```
