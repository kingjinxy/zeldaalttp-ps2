	THUMB_FUNC_START sub_080D2840
sub_080D2840: @ 0x080D2840
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _080D286C  @ =gShovel
	ldrb r0, [r0]
	mov r1, #1
	and r1, r1, r0
	ldr r0, _080D2870  @ =gFlute
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D285A
	mov r1, #3
	and r1, r1, r0
_080D285A:
	ldr r0, _080D2874  @ =gUnknown_08174C34
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r2, #0
	bl _call_via_r1
	pop {r0}
	bx r0
_080D286C:
	.4byte gShovel
_080D2870:
	.4byte gFlute
_080D2874:
	.4byte gUnknown_08174C34
	THUMB_FUNC_END sub_080D2840

