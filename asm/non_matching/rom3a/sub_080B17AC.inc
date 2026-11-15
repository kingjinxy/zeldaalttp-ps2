	THUMB_FUNC_START sub_080B17AC
sub_080B17AC: @ 0x080B17AC
	push {lr}
	ldr r1, _080B17D0  @ =gUnknown_0816E96C
	ldr r0, _080B17D4  @ =gRam
	ldr r2, _080B17D8  @ =0x000009AD
	add r0, r0, r2
	ldrb r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	bl sub_080C1B40
	bl sub_080A3EE0
	pop {r0}
	bx r0
_080B17D0:
	.4byte gUnknown_0816E96C
_080B17D4:
	.4byte gRam
_080B17D8:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080B17AC

