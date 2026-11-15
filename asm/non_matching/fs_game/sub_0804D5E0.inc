	THUMB_FUNC_START sub_0804D5E0
sub_0804D5E0: @ 0x0804D5E0
	push {r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	bne _0804D5F2
	b _0804D6DE
_0804D5F2:
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
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #124
	ldrb r2, [r1]
	lsl r0, r2, #4
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	mov r3, #1
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	lsl r2, r1, #3
	add r0, r0, r2
	ldr r1, _0804D644  @ =gUnknown_0813FBC4
	add r0, r1, r0
	str r0, [r7, #8]
	add r0, r7, #0
	add r0, r0, #12
	mov r1, #0
	strb r1, [r0]
_0804D638:
	add r0, r7, #0
	add r0, r0, #12
	ldrb r1, [r0]
	cmp r1, #7
	bls _0804D648
	b _0804D6DC
_0804D644:
	.4byte gUnknown_0813FBC4
_0804D648:
	add r0, r7, #0
	add r0, r0, #8
	ldr r2, [r0]
	ldrb r1, [r2]
	add r2, r2, #1
	str r2, [r0]
	mov r0, #0
	mov r2, #1
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804D6C0
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	lsl r1, r2, #4
	add r2, r7, #0
	add r2, r2, #12
	ldrb r3, [r2]
	lsl r2, r3, #1
	add r1, r1, r2
	add r2, r1, #0
	mov r3, #31
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	mov r3, #128
	neg r3, r3
	add r1, r2, #0
	orr r1, r1, r3
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
	ldr r0, [r7, #4]
	mov r1, #96
	str r1, [r0, #12]
	bl sub_0800099C
	add r1, r0, #0
	ldr r0, [r7, #4]
	ldr r2, _0804D6D8  @ =gUnknown_0842883C
	mov r3, #3
	and r1, r1, r3
	add r2, r2, r1
	ldrb r1, [r2]
	lsl r2, r1, #12
	str r2, [r0, #16]
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
_0804D6C0:
	add r1, r7, #0
	add r1, r1, #12
	add r0, r7, #0
	add r0, r0, #12
	add r1, r7, #0
	add r1, r1, #12
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _0804D638
	.byte 0x00
	.byte 0x00
_0804D6D8:
	.4byte gUnknown_0842883C
_0804D6DC:
	b _0804D846
_0804D6DE:
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #44
	bne _0804D700
	mov r0, #103
	mov r1, #1
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804D700
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
_0804D700:
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #15
	beq _0804D716
	mov r0, #4
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	b _0804D722
_0804D716:
	mov r0, #102
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
_0804D722:
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804D788
	ldr r0, [r7, #4]
	ldr r1, _0804D79C  @ =gUnknown_0813FBB4
	ldr r2, _0804D7A0  @ =gUnknown_03006C80
	ldrb r3, [r2, #1]
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #4]
	ldr r1, _0804D79C  @ =gUnknown_0813FBB4
	ldr r2, _0804D7A0  @ =gUnknown_03006C80
	ldrb r3, [r2, #1]
	add r2, r3, #0
	lsl r3, r2, #1
	add r2, r3, #1
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r0, r0, #80
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	lsl r3, r3, #7
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
_0804D788:
	add r0, r7, #0
	add r0, r0, #12
	mov r1, #0
	strb r1, [r0]
_0804D790:
	add r0, r7, #0
	add r0, r0, #12
	ldrb r1, [r0]
	cmp r1, #3
	bls _0804D7A4
	b _0804D834
_0804D79C:
	.4byte gUnknown_0813FBB4
_0804D7A0:
	.4byte gUnknown_03006C80
_0804D7A4:
	mov r0, #0
	mov r1, #7
	mov r2, #1
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804D816
	ldr r0, [r7, #4]
	ldr r1, _0804D82C  @ =gUnknown_0813FBB4
	ldr r2, _0804D830  @ =gUnknown_03006C80
	ldrb r3, [r2, #1]
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #4]
	ldr r1, _0804D82C  @ =gUnknown_0813FBB4
	ldr r2, _0804D830  @ =gUnknown_03006C80
	ldrb r3, [r2, #1]
	add r2, r3, #0
	lsl r3, r2, #1
	add r2, r3, #1
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r0, r0, #80
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	lsl r3, r3, #7
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
_0804D816:
	add r1, r7, #0
	add r1, r1, #12
	add r0, r7, #0
	add r0, r0, #12
	add r1, r7, #0
	add r1, r1, #12
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _0804D790
_0804D82C:
	.4byte gUnknown_0813FBB4
_0804D830:
	.4byte gUnknown_03006C80
_0804D834:
	ldr r0, _0804D850  @ =gUnknown_0201F000
	ldr r1, _0804D850  @ =gUnknown_0201F000
	ldr r2, [r1]
	mov r1, #1
	orr r2, r2, r1
	str r2, [r0]
	ldr r0, [r7]
	bl DeleteThisEntity
_0804D846:
	add sp, sp, #16
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0804D850:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_0804D5E0

