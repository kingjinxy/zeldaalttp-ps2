	THUMB_FUNC_START sub_080B82B4
sub_080B82B4: @ 0x080B82B4
	push {r4,r5,lr}
	ldr r4, _080B8334  @ =gRam
	ldr r1, _080B8338  @ =0x000009B2
	add r0, r4, r1
	mov r5, #0
	strb r5, [r0]
	ldr r0, _080B833C  @ =0x00000C99
	add r1, r4, r0
	mov r0, #33
	strb r0, [r1]
	ldr r0, _080B8340  @ =0x00000C9A
	add r1, r4, r0
	mov r0, #59
	strb r0, [r1]
	ldr r0, _080B8344  @ =0x00000C9B
	add r1, r4, r0
	mov r0, #45
	strb r0, [r1]
	bl sub_0812E8DC
	ldr r1, _080B8348  @ =0x000009C6
	add r2, r4, r1
	ldrh r1, [r2]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	add r0, r0, #91
	strh r0, [r2]
	mov r0, #150
	lsl r0, r0, #4
	add r1, r4, r0
	mov r0, #19
	strb r0, [r1]
	ldr r0, _080B834C  @ =gUnknown_0814C8E8
	add r0, r0, #91
	ldrb r1, [r0]
	mov r0, #19
	bl sub_0813084C
	ldr r0, _080B8350  @ =0x00000CAD
	add r1, r4, r0
	mov r0, #3
	strb r0, [r1]
	bl sub_0813076C
	bl sub_08077D98
	bl sub_08072F1C
	ldr r1, _080B8354  @ =0x00000956
	add r0, r4, r1
	strh r5, [r0]
	sub r1, r1, #6
	add r0, r4, r1
	strh r5, [r0]
	ldr r0, _080B8358  @ =0x000009AD
	add r4, r4, r0
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B8334:
	.4byte gRam
_080B8338:
	.4byte 0x000009B2
_080B833C:
	.4byte 0x00000C99
_080B8340:
	.4byte 0x00000C9A
_080B8344:
	.4byte 0x00000C9B
_080B8348:
	.4byte 0x000009C6
_080B834C:
	.4byte gUnknown_0814C8E8
_080B8350:
	.4byte 0x00000CAD
_080B8354:
	.4byte 0x00000956
_080B8358:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080B82B4

