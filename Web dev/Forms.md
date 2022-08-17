# Forms

[[HTML]] [[form]] [[elements]] let you collect [[input]] from your [[website]]'s visitors. There are many type of form [[element]].
In this note I will go over justa  few.

---
#### GET vs POST

[[GET]] method is used to request data from a specified resource and the variable passed is visible in the URL:
```url
https://example.com/get-example.php?variable1=xxx&variable2=yyy
```
Don't use it to pass [[sensible data]].


[[POST]] method is used to send data to a server to create/update a resource. Use it for sensible [[Data masking]].

---

#### Radio buttons
Every [[radio button]] group you create should:
-   Be wrapped in a `<fieldset>`, which is labeled with a `<legend>`.
-   Associate a `<label>` element with each radio button.
-   Use the same `name` attribute for each radio button in the group.
-   Use different `value` attributes for each radio button.

![](https://internetingishard.netlify.app/radio-label-fieldset-legend-elements-0affe5.75239169.png)

```html
<fieldset class='legacy-form-row'>
  <legend>Type of Talk</legend>
  <input id='talk-type-1' name='talk-type' type='radio' value='main-stage' />
  <label for='talk-type-1' class='radio-label'>Main Stage</label>
  <input id='talk-type-2' name='talk-type' type='radio' value='workshop' checked />
  <label for='talk-type-2' class='radio-label'>Workshop</label>
</fieldset>
```

---

#### Attribute for `<input>`
There are a lot of useful [[attributes]] for the `<input>` tag, for example: `disabled`, `minlength`, `maxlength`, `required`...
You can find a list of it [here](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/input).

---

#### Pseudoclasses
Two useful [[pseudoclasses]] for the `<input>` are: `:invalid` and `:valid`.

---

#### Risorse

https://internetingishard.netlify.app/html-and-css/forms/index.html
https://www.w3schools.com/html/html_forms.asp
https://developer.mozilla.org/en-US/docs/Web/HTML/Element/input