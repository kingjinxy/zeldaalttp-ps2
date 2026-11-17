	THUMB_FUNC_START sub_0802FAEC
sub_0802FAEC: @ 0x0802FAEC
	push {lr}
	ldr r2, _0802FB18  @ =gUnknown_02016D60
	ldr r0, _0802FB1C  @ =gUnknown_03000BF0
	ldr r0, [r0]
	mov r1, #15
	and r0, r0, r1
	strb r0, [r2, #8]
	ldr r1, _0802FB20  @ =gUnknown_084278C0
	ldr r0, _0802FB24  @ =gSubState
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	bl sub_08137AFC
	bl sub_08000BAC
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802FB18:
	.4byte gUnknown_02016D60
_0802FB1C:
	.4byte gUnknown_03000BF0
_0802FB20:
	.4byte gUnknown_084278C0
_0802FB24:
	.4byte gSubState
	THUMB_FUNC_END sub_0802FAEC

