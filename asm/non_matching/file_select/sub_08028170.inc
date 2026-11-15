	THUMB_FUNC_START sub_08028170
sub_08028170: @ 0x08028170
	push {r4,lr}
	add r2, r0, #0
	ldr r0, [r2, #120]
	ldrh r1, [r0]
	ldr r0, _0802819C  @ =0x0000FFFF
	cmp r1, r0
	bne _08028182
	ldr r0, [r2, #108]
	str r0, [r2, #120]
_08028182:
	ldr r3, [r2, #120]
	ldrh r4, [r3]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r4
	add r1, r3, #0
	cmp r0, #0
	beq _080281A0
	mov r0, #4
	strb r0, [r2, #21]
	ldrh r0, [r1, #2]
	str r0, [r2, #104]
	b _080281F4
_0802819C:
	.4byte 0x0000FFFF
_080281A0:
	add r0, r2, #0
	add r0, r0, #43
	strb r4, [r0]
	add r3, r1, #2
	lsl r0, r4, #24
	lsr r0, r0, #27
	strb r0, [r2, #21]
	ldrb r0, [r2, #21]
	cmp r0, #1
	beq _080281CC
	cmp r0, #1
	bgt _080281BE
	cmp r0, #0
	beq _080281C8
	b _080281EA
_080281BE:
	cmp r0, #2
	beq _080281D4
	cmp r0, #3
	beq _080281DC
	b _080281EA
_080281C8:
	ldrh r0, [r2, #54]
	b _080281DE
_080281CC:
	ldrh r0, [r1, #2]
	ldrh r1, [r2, #50]
	add r0, r0, r1
	b _080281E2
_080281D4:
	ldrh r0, [r1, #2]
	ldrh r1, [r2, #54]
	add r0, r0, r1
	b _080281E2
_080281DC:
	ldrh r0, [r2, #50]
_080281DE:
	ldrh r1, [r1, #2]
	sub r0, r0, r1
_080281E2:
	add r1, r2, #0
	add r1, r1, #116
	strh r0, [r1]
	add r3, r3, #2
_080281EA:
	ldrh r0, [r3]
	ldr r1, [r2, #120]
	cmp r0, #0
	beq _080281F4
	str r0, [r2, #12]
_080281F4:
	add r0, r1, #0
	add r0, r0, #8
	str r0, [r2, #120]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08028170

