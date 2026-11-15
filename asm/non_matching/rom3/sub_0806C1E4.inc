	THUMB_FUNC_START sub_0806C1E4
sub_0806C1E4: @ 0x0806C1E4
	push {lr}
	ldr r1, _0806C208  @ =gUnknown_0814C9E4
	ldr r0, _0806C20C  @ =gRam
	ldr r2, _0806C210  @ =0x000009AD
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	bl sub_080C1B40
	bl sub_080A3EE0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806C208:
	.4byte gUnknown_0814C9E4
_0806C20C:
	.4byte gRam
_0806C210:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0806C1E4

