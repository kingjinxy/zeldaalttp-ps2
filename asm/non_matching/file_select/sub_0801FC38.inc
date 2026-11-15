	THUMB_FUNC_START sub_0801FC38
sub_0801FC38: @ 0x0801FC38
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _0801FC5C
	add r0, r4, #0
	bl 0x0800963C
	add r0, r4, #0
	bl sub_0801FE00
	b _0801FC6A
_0801FC5C:
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801FC6A
	add r0, r4, #0
	bl sub_0801FD28
_0801FC6A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801FC38

