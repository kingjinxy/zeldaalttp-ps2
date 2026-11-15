	THUMB_FUNC_START sub_08074594
sub_08074594: @ 0x08074594
	push {lr}
	ldr r2, _080745C8  @ =gRam
	ldr r1, _080745CC  @ =0x00000CF8
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080745B0
	ldr r3, _080745D0  @ =0x00000D02
	add r1, r2, r3
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
_080745B0:
	ldr r1, _080745D4  @ =gUnknown_0814D648
	ldr r3, _080745D8  @ =0x000009E8
	add r0, r2, r3
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080745C8:
	.4byte gRam
_080745CC:
	.4byte 0x00000CF8
_080745D0:
	.4byte 0x00000D02
_080745D4:
	.4byte gUnknown_0814D648
_080745D8:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08074594

