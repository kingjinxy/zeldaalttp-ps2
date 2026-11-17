	THUMB_FUNC_START sub_08016958
sub_08016958: @ 0x08016958
	push {r4,r5,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r2, r4, #0
	add r2, r2, #41
	ldrb r1, [r2]
	cmp r1, #1
	bne _080169C4
	mov r0, #0
	strb r0, [r2]
	add r0, r4, #0
	mov r1, #4
	mov r2, #0
	bl sub_0804411C
	add r2, r0, #0
	cmp r2, #0
	beq _080169F2
	ldr r1, _080169C0  @ =gUnknown_08139130
	add r3, r4, #0
	add r3, r3, #42
	ldrb r0, [r3]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r5, [r2, #50]
	add r0, r0, r5
	strh r0, [r2, #50]
	ldrb r0, [r3]
	lsl r0, r0, #1
	add r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r2, #54]
	add r0, r0, r1
	strh r0, [r2, #54]
	add r0, r4, #0
	add r0, r0, #43
	ldrb r1, [r0]
	add r0, r2, #0
	add r0, r0, #43
	strb r1, [r0]
	mov r0, #42
	bl sub_08003DFC
	b _080169F2
	.byte 0x00
	.byte 0x00
_080169C0:
	.4byte gUnknown_08139130
_080169C4:
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080169F2
	mov r0, #2
	strb r0, [r4, #20]
	mov r0, #30
	strb r0, [r4, #23]
	bl sub_0800099C
	mov r1, #63
	and r0, r0, r1
	add r0, r0, #180
	strb r0, [r4, #24]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #4
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_08003870
_080169F2:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08016958

