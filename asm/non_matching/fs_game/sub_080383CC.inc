	THUMB_FUNC_START sub_080383CC
sub_080383CC: @ 0x080383CC
	push {r4,r7,lr}
	mov r7, sp
	ldr r0, _080383E8  @ =gUnknown_08427BFC
	ldr r1, _080383EC  @ =gSubState
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r4, [r0]
	bl _call_via_r4
	pop {r4,r7}
	pop {r0}
	bx r0
_080383E8:
	.4byte gUnknown_08427BFC
_080383EC:
	.4byte gSubState
	THUMB_FUNC_END sub_080383CC

