	THUMB_FUNC_START sub_080743AC
sub_080743AC: @ 0x080743AC
	push {lr}
	ldr r1, _080743C8  @ =gUnknown_0814D6C8
	ldr r0, _080743CC  @ =gRam
	ldr r2, _080743D0  @ =0x000009AD
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080743C8:
	.4byte gUnknown_0814D6C8
_080743CC:
	.4byte gRam
_080743D0:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080743AC

