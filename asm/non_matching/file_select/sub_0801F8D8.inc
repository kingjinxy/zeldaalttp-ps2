	THUMB_FUNC_START sub_0801F8D8
sub_0801F8D8: @ 0x0801F8D8
	push {r4,lr}
	add r4, r0, #0
	ldrb r1, [r4, #20]
	cmp r1, #0
	bne _0801F900
	mov r0, #1
	strb r0, [r4, #20]
	add r0, r4, #0
	add r0, r0, #60
	strb r1, [r0]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r0, [r2]
	mov r1, #3
	orr r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	mov r1, #1
	bl sub_08003870
_0801F900:
	ldr r0, [r4, #88]
	add r1, r4, #0
	bl sub_0803D3D0
	ldrh r0, [r4, #58]
	sub r0, r0, #4
	strh r0, [r4, #58]
	add r0, r4, #0
	bl GetNextFrame
	ldr r1, [r4, #88]
	add r0, r1, #0
	add r0, r0, #114
	ldrh r0, [r0]
	cmp r0, #0
	beq _0801F948
	cmp r0, #59
	bhi _0801F938
	ldrb r2, [r4, #28]
	lsl r1, r2, #30
	lsr r1, r1, #30
	mov r0, #1
	eor r1, r1, r0
	sub r0, r0, #5
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #28]
	b _0801F962
_0801F938:
	ldrb r0, [r4, #28]
	mov r1, #4
	neg r1, r1
	and r1, r1, r0
	mov r0, #1
	orr r1, r1, r0
	strb r1, [r4, #28]
	b _0801F962
_0801F948:
	ldr r2, _0801F968  @ =gUnknown_03006A30
	ldrb r0, [r1, #10]
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	ldr r0, _0801F96C  @ =0x0000BFFF
	and r0, r0, r2
	strh r0, [r1, #54]
	add r0, r4, #0
	bl DeleteThisEntity
_0801F962:
	pop {r4}
	pop {r0}
	bx r0
_0801F968:
	.4byte gUnknown_03006A30
_0801F96C:
	.4byte 0x0000BFFF
	THUMB_FUNC_END sub_0801F8D8

