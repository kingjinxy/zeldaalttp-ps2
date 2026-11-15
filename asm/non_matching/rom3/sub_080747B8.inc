	THUMB_FUNC_START sub_080747B8
sub_080747B8: @ 0x080747B8
	push {lr}
	ldr r1, _080747E0  @ =gRam
	mov r0, #201
	lsl r0, r0, #4
	add r2, r1, r0
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
	ldr r2, _080747E4  @ =gUnknown_0814D678
	ldr r0, _080747E8  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080747E0:
	.4byte gRam
_080747E4:
	.4byte gUnknown_0814D678
_080747E8:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_080747B8

