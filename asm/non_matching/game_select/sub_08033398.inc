	THUMB_FUNC_START sub_08033398
sub_08033398: @ 0x08033398
	push {lr}
	mov r1, #8
	and r1, r1, r0
	ldr r2, _080333C8  @ =gUnknown_02016D60
	cmp r1, #0
	beq _080333B6
	mov r1, #6
	ldrsh r0, [r2, r1]
	mov r1, #128
	cmp r0, #128
	bne _080333B4
	mov r0, #128
	lsl r0, r0, #3
	add r1, r0, #0
_080333B4:
	strh r1, [r2, #6]
_080333B6:
	ldr r0, _080333CC  @ =gUnknown_08427A7C
	ldrb r1, [r2]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	bl _call_via_r0
	pop {r0}
	bx r0
_080333C8:
	.4byte gUnknown_02016D60
_080333CC:
	.4byte gUnknown_08427A7C
	THUMB_FUNC_END sub_08033398

