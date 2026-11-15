	THUMB_FUNC_START sub_0803FAE8
sub_0803FAE8: @ 0x0803FAE8
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r0, _0803FB38  @ =gUnknown_03006A30
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
	ldr r0, _0803FB38  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #44
	add r1, r0, r1
	ldr r0, [r1]
	ldr r1, [r7]
	cmp r0, r1
	beq _0803FB3C
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	ldr r1, [r0, #72]
	add r0, r1, #0
	bl sub_0800BE50
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0803FE9E
_0803FB38:
	.4byte gUnknown_03006A30
_0803FB3C:
	ldr r0, _0803FB9C  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #4]
	cmp r1, #0
	bne _0803FBA0
	ldr r0, _0803FB9C  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #44
	add r1, r0, r1
	mov r0, #0
	str r0, [r1]
	ldr r0, _0803FB9C  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #27]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #27]
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	ldr r1, [r0, #72]
	add r0, r1, #0
	bl sub_0800BE50
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0803FE9E
	.byte 0x00
	.byte 0x00
_0803FB9C:
	.4byte gUnknown_03006A30
_0803FBA0:
	ldr r0, _0803FDA8  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #4]
	mov r2, #128
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0803FBDE
	ldr r0, _0803FDA8  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	add r0, r2, #0
	mov r1, #20
	bl 0x08003E10
_0803FBDE:
	ldr r0, _0803FDA8  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #27]
	cmp r1, #0
	beq _0803FCCE
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #64
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #12
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803FDA8  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #27]
	mov r2, #32
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0803FC54
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #30]
	lsl r3, r2, #28
	lsr r1, r3, #28
	mov r2, #3
	eor r1, r1, r2
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
_0803FC54:
	ldr r0, _0803FDA8  @ =gUnknown_03006A30
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
	beq _0803FCCE
	ldr r0, [r7]
	ldr r1, _0803FDA8  @ =gUnknown_03006A30
	ldr r3, [r7]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r3, r1, r2
	add r1, r3, #0
	add r2, r3, #0
	add r2, r2, #62
	ldrb r1, [r2]
	lsl r2, r1, #30
	lsr r1, r2, #30
	lsl r2, r1, #24
	lsr r1, r2, #24
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r1, #0
	add r1, r2, #0
	add r1, r1, #8
	add r2, r0, #0
	add r0, r0, #68
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #64
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_0803FCCE:
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_08040074
	ldr r0, [r7]
	bl sub_0803F0E4
	ldr r0, [r7]
	bl sub_0804055C
	ldr r0, _0803FDA8  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #27]
	cmp r1, #0
	beq _0803FCFA
	b _0803FE6C
_0803FCFA:
	ldr r0, _0803FDA8  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r2, r0, r1
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #62
	ldrb r0, [r1]
	lsl r1, r0, #30
	lsr r0, r1, #30
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0803FD20
	b _0803FE66
_0803FD20:
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #64
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0803FD38
	b _0803FE66
_0803FD38:
	bl sub_080123E8
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	bne _0803FD46
	b _0803FE66
_0803FD46:
	ldr r0, [r7, #8]
	ldrb r1, [r0, #8]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #8]
	ldr r0, [r7, #8]
	ldrb r1, [r0, #9]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #9]
	ldr r0, _0803FDA8  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r2, r0, r1
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #62
	ldrb r0, [r1]
	lsl r1, r0, #30
	lsr r0, r1, #30
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #1
	bne _0803FDAC
	ldr r0, [r7, #8]
	ldrb r1, [r0, #10]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #20
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #10]
	b _0803FDC0
_0803FDA8:
	.4byte gUnknown_03006A30
_0803FDAC:
	ldr r0, [r7, #8]
	ldrb r1, [r0, #10]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #18
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #10]
_0803FDC0:
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	lsl r2, r1, #29
	lsr r0, r2, #31
	cmp r0, #0
	beq _0803FE00
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, _0803FDFC  @ =gUnknown_0813EABC
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #33
	ldrb r3, [r4]
	add r4, r3, #0
	lsl r3, r4, #1
	add r2, r2, r3
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r3, [r1, #50]
	sub r1, r3, r2
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	b _0803FE2E
_0803FDFC:
	.4byte gUnknown_0813EABC
_0803FE00:
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, _0803FE68  @ =gUnknown_0813EABC
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #33
	ldrb r3, [r4]
	add r4, r3, #0
	lsl r3, r4, #1
	add r2, r2, r3
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
_0803FE2E:
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, _0803FE68  @ =gUnknown_0813EABC
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #33
	ldrb r3, [r4]
	add r4, r3, #0
	lsl r3, r4, #1
	add r4, r3, #1
	add r2, r2, r4
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
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
	ldr r1, [r7, #8]
	mov r0, #6
	bl sub_08012728
_0803FE66:
	b _0803FE9E
_0803FE68:
	.4byte gUnknown_0813EABC
_0803FE6C:
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #32
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0803FE9E
	ldr r0, _0803FEA8  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	add r0, r2, #0
	mov r1, #28
	bl 0x08003E10
_0803FE9E:
	add sp, sp, #12
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0803FEA8:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_0803FAE8

