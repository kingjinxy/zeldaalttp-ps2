	THUMB_FUNC_START sub_080BD828
sub_080BD828: @ 0x080BD828
	push {lr}
	ldr r1, _080BD85C  @ =gRam
	ldr r0, _080BD860  @ =0x0000162A
	add r2, r1, r0
	mov r3, #0
	mov r0, #48
	strh r0, [r2]
	ldr r0, _080BD864  @ =0x0000162C
	add r2, r1, r0
	mov r0, #232
	lsl r0, r0, #1
	strh r0, [r2]
	ldr r2, _080BD868  @ =0x0000162E
	add r0, r1, r2
	strh r3, [r0]
	ldr r2, _080BD86C  @ =gUnknown_081709AC
	ldr r0, _080BD870  @ =0x000009AD
	add r1, r1, r0
	ldrb r0, [r1]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
_080BD85C:
	.4byte gRam
_080BD860:
	.4byte 0x0000162A
_080BD864:
	.4byte 0x0000162C
_080BD868:
	.4byte 0x0000162E
_080BD86C:
	.4byte gUnknown_081709AC
_080BD870:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080BD828

