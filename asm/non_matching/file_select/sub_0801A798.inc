	THUMB_FUNC_START sub_0801A798
sub_0801A798: @ 0x0801A798
	push {r4,lr}
	add r3, r0, #0
	add r0, r0, #43
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	mov r1, #54
	add r1, r1, r3
	mov r12, r1
	cmp r0, #0
	beq _0801A7B4
	mov r0, #50
	add r0, r0, r3
	mov r12, r0
_0801A7B4:
	mov r1, r12
	ldrh r4, [r1]
	mov r2, #15
	and r2, r2, r4
	ldr r1, [r3, #12]
	mov r0, #128
	lsl r0, r0, #1
	cmp r1, r0
	bgt _0801A7CE
	cmp r2, #8
	bne _0801A7E8
	mov r0, #1
	b _0801A7EA
_0801A7CE:
	sub r0, r2, #7
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #2
	bhi _0801A7E8
	mov r0, #252
	lsl r0, r0, #2
	and r0, r0, r4
	add r0, r0, #8
	mov r1, r12
	strh r0, [r1]
	mov r0, #1
	b _0801A7EA
_0801A7E8:
	mov r0, #0
_0801A7EA:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0801A798

