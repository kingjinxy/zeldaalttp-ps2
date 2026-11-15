	THUMB_FUNC_START sub_080746C4
sub_080746C4: @ 0x080746C4
	push {lr}
	ldr r2, _080746F8  @ =gRam
	ldr r1, _080746FC  @ =0x00000CF8
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080746E0
	ldr r3, _08074700  @ =0x00000D02
	add r1, r2, r3
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_080746E0:
	ldr r1, _08074704  @ =gUnknown_0814D660
	ldr r3, _08074708  @ =0x000009E8
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
_080746F8:
	.4byte gRam
_080746FC:
	.4byte 0x00000CF8
_08074700:
	.4byte 0x00000D02
_08074704:
	.4byte gUnknown_0814D660
_08074708:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_080746C4

