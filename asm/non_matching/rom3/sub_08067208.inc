	THUMB_FUNC_START sub_08067208
sub_08067208: @ 0x08067208
	push {lr}
	bl sub_0800099C
	add r1, r0, #0
	mov r0, #255
	and r1, r1, r0
	cmp r1, #63
	bhi _08067238
	ldr r0, _0806722C  @ =gUnknown_0814C558
	mov r1, #0
	bl sub_0801386C
	ldr r0, _08067230  @ =gUnknown_0814C565
	mov r1, #0
	bl sub_0801386C
	ldr r0, _08067234  @ =gUnknown_0814C572
	b _08067266
_0806722C:
	.4byte gUnknown_0814C558
_08067230:
	.4byte gUnknown_0814C565
_08067234:
	.4byte gUnknown_0814C572
_08067238:
	cmp r1, #127
	bhi _08067250
	ldr r0, _08067248  @ =gUnknown_0814C558
	mov r1, #0
	bl sub_0801386C
	ldr r0, _0806724C  @ =gUnknown_0814C565
	b _0806725E
_08067248:
	.4byte gUnknown_0814C558
_0806724C:
	.4byte gUnknown_0814C565
_08067250:
	cmp r1, #191
	bhi _0806727C
	ldr r0, _08067270  @ =gUnknown_0814C558
	mov r1, #0
	bl sub_0801386C
	ldr r0, _08067274  @ =gUnknown_0814C572
_0806725E:
	mov r1, #0
	bl sub_0801386C
	ldr r0, _08067278  @ =gUnknown_0814C57F
_08067266:
	mov r1, #0
	bl sub_0801386C
	b _08067294
	.byte 0x00
	.byte 0x00
_08067270:
	.4byte gUnknown_0814C558
_08067274:
	.4byte gUnknown_0814C572
_08067278:
	.4byte gUnknown_0814C57F
_0806727C:
	ldr r0, _08067298  @ =gUnknown_0814C565
	mov r1, #0
	bl sub_0801386C
	ldr r0, _0806729C  @ =gUnknown_0814C572
	mov r1, #0
	bl sub_0801386C
	ldr r0, _080672A0  @ =gUnknown_0814C57F
	mov r1, #0
	bl sub_0801386C
_08067294:
	pop {r0}
	bx r0
_08067298:
	.4byte gUnknown_0814C565
_0806729C:
	.4byte gUnknown_0814C572
_080672A0:
	.4byte gUnknown_0814C57F
	THUMB_FUNC_END sub_08067208

