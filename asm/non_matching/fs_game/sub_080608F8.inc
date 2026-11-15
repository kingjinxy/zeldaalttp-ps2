	THUMB_FUNC_START sub_080608F8
sub_080608F8: @ 0x080608F8
	push {r4,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	ldr r0, _080609A4  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	str r0, [r7, #4]
	ldr r0, _080609A4  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #4]
	cmp r1, #0
	bne _08060932
	ldr r0, [r7]
	bl DeleteThisEntity
_08060932:
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrh r2, [r0, #58]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #58]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #58]
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #0
	beq _080609E6
	ldr r0, _080609A4  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r2, r0, r1
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #33
	ldrb r0, [r1]
	cmp r0, #79
	bls _080609AC
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, _080609A4  @ =gUnknown_03006A30
	ldr r3, [r7]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r3, r1, r2
	add r1, r3, #0
	add r2, r3, #0
	add r2, r2, #33
	ldrb r1, [r2]
	strb r1, [r0]
	ldr r0, _080609A8  @ =gUnknown_08141A08
	str r0, [r7, #12]
	b _080609E4
_080609A4:
	.4byte gUnknown_03006A30
_080609A8:
	.4byte gUnknown_08141A08
_080609AC:
	ldr r0, _080609D8  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r2, r0, r1
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #33
	ldrb r0, [r1]
	cmp r0, #0
	beq _080609DE
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	b _08060CE6
	.byte 0x00
	.byte 0x00
_080609D8:
	.4byte gUnknown_03006A30
	.byte 0x02
	.byte 0xE0
_080609DE:
	ldr r0, [r7]
	bl DeleteThisEntity
_080609E4:
	b _08060A36
_080609E6:
	ldr r0, _08060A28  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #27]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08060A30
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, _08060A28  @ =gUnknown_03006A30
	ldr r3, [r7]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrb r2, [r1, #27]
	strb r2, [r0]
	ldr r0, _08060A2C  @ =gUnknown_08141A00
	str r0, [r7, #12]
	b _08060A36
	.byte 0x00
	.byte 0x00
_08060A28:
	.4byte gUnknown_03006A30
_08060A2C:
	.4byte gUnknown_08141A00
_08060A30:
	ldr r0, [r7]
	bl DeleteThisEntity
_08060A36:
	add r0, r7, #0
	add r0, r0, #8
	ldrb r1, [r0]
	cmp r1, #0
	bne _08060A42
	b _08060CE0
_08060A42:
	ldr r0, [r7]
	bl 0x08003828
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _08060AA6
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08060AA4
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #100
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #100
	ldrh r3, [r2]
	add r1, r3, #1
	add r2, r0, #0
	add r0, r0, #100
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
_08060AA4:
	b _08060B0E
_08060AA6:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #106
	ldrh r0, [r1]
	cmp r0, #0
	beq _08060AD8
	ldr r0, _08060AD4  @ =gUnknown_03000E20
	ldrh r1, [r0]
	mov r2, #31
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _08060AD0
	ldr r0, [r7]
	mov r1, #7
	mov r2, #0
	bl sub_0804CB38
_08060AD0:
	b _08060B0E
	.byte 0x00
	.byte 0x00
_08060AD4:
	.4byte gUnknown_03000E20
_08060AD8:
	mov r0, #27
	bl 0x08003DFC
	ldr r0, [r7]
	mov r1, #18
	mov r2, #0
	bl sub_0804CB38
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #106
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #106
	ldrh r3, [r2]
	add r1, r3, #1
	add r2, r0, #0
	add r0, r0, #106
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
_08060B0E:
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrb r2, [r1, #29]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #29]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #29]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #42
	ldrb r2, [r3]
	lsl r3, r2, #1
	ldr r4, [r7, #12]
	add r2, r3, r4
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r3, [r1, #50]
	add r1, r2, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #42
	ldrb r2, [r3]
	lsl r3, r2, #1
	ldr r4, [r7, #12]
	add r2, r3, r4
	add r3, r2, #1
	mov r4, #0
	ldrsb r4, [r3, r4]
	add r2, r4, #0
	ldrh r3, [r1, #54]
	add r1, r2, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	cmp r0, #1
	beq _08060BC8
	cmp r0, #1
	bgt _08060B9C
	cmp r0, #0
	beq _08060BA6
	b _08060C2E
_08060B9C:
	cmp r0, #2
	beq _08060BEA
	cmp r0, #3
	beq _08060C0C
	b _08060C2E
_08060BA6:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #100
	ldrh r1, [r1, #54]
	ldrh r2, [r3]
	sub r1, r1, r2
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	b _08060C2E
_08060BC8:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #100
	ldrh r1, [r1, #50]
	ldrh r2, [r3]
	add r1, r1, r2
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	b _08060C2E
_08060BEA:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #100
	ldrh r1, [r1, #54]
	ldrh r2, [r3]
	add r1, r1, r2
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	b _08060C2E
_08060C0C:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #100
	ldrh r1, [r1, #50]
	ldrh r2, [r3]
	sub r1, r1, r2
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	b _08060C2E
_08060C2E:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	sub r1, r2, #1
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #24]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #255
	bne _08060C8E
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #43
	ldrb r1, [r2]
	mov r2, #16
	eor r1, r1, r2
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_08060C8E:
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #0
	bne _08060CD8
	ldr r0, _08060CDC  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #27]
	mov r2, #64
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08060CD8
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
_08060CD8:
	b _08060CE6
	.byte 0x00
	.byte 0x00
_08060CDC:
	.4byte gUnknown_03006A30
_08060CE0:
	ldr r0, [r7]
	bl DeleteThisEntity
_08060CE6:
	add sp, sp, #16
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080608F8

	.byte 0x00
	.byte 0x00
