	THUMB_FUNC_START sub_0804DF3C
sub_0804DF3C: @ 0x0804DF3C
	push {r4,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, _0804DF7C  @ =gUnknown_03006C80
	ldrb r1, [r0, #5]
	cmp r1, #0
	beq _0804DF84
	ldr r0, _0804DF7C  @ =gUnknown_03006C80
	ldrb r1, [r0, #5]
	cmp r1, #0
	bne _0804DF6A
	b _0804E0AA
_0804DF6A:
	ldr r0, _0804DF80  @ =gUnknown_0201F000
	ldr r1, [r0]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	bne _0804DF84
	b _0804E0AA
	.byte 0x00
	.byte 0x00
_0804DF7C:
	.4byte gUnknown_03006C80
_0804DF80:
	.4byte gUnknown_0201F000
_0804DF84:
	add r0, r7, #5
	ldr r1, _0804DF98  @ =gMainState
	ldrb r2, [r1]
	cmp r2, #2
	bne _0804DFA0
	ldr r1, _0804DF9C  @ =gUnknown_03006C80
	ldrb r2, [r1]
	sub r3, r2, #1
	add r1, r3, #0
	b _0804DFA2
_0804DF98:
	.4byte gMainState
_0804DF9C:
	.4byte gUnknown_03006C80
_0804DFA0:
	mov r1, #3
_0804DFA2:
	strb r1, [r0]
	ldr r0, _0804DFC8  @ =gUnknown_0813FD90
	add r1, r7, #5
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	str r1, [r7, #12]
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_0804DFBA:
	add r0, r7, #4
	add r1, r7, #5
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bls _0804DFCC
	b _0804E046
_0804DFC8:
	.4byte gUnknown_0813FD90
_0804DFCC:
	ldr r0, [r7]
	ldrb r2, [r0, #11]
	mov r0, #4
	mov r1, #1
	bl sub_0804C8A8
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _0804E036
	ldr r0, [r7, #8]
	ldr r1, [r7]
	add r2, r7, #4
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #2
	ldr r4, [r7, #12]
	add r2, r3, r4
	ldrh r1, [r1, #50]
	ldrh r2, [r2]
	add r1, r1, r2
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	add r2, r7, #4
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #2
	ldr r4, [r7, #12]
	add r2, r3, r4
	add r3, r2, #2
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
	ldr r1, [r7, #8]
	add r0, r1, #0
	bl 0x08008D90
_0804E036:
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _0804DFBA
_0804E046:
	ldr r0, _0804E0B4  @ =gUnknown_03006C80
	ldrb r1, [r0, #2]
	cmp r1, #0
	bne _0804E070
	ldr r0, _0804E0B4  @ =gUnknown_03006C80
	ldrb r1, [r0, #5]
	cmp r1, #0
	bne _0804E070
	mov r0, #55
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _0804E070
	ldr r1, [r7, #8]
	ldr r0, [r7]
	bl sub_0803D3D0
_0804E070:
	ldr r0, _0804E0B4  @ =gUnknown_03006C80
	ldr r1, [r7]
	add r2, r0, #0
	add r0, r0, #128
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #50]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _0804E0B4  @ =gUnknown_03006C80
	ldr r1, [r7]
	add r2, r0, #0
	add r0, r0, #130
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #54]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	bl DeleteThisEntity
_0804E0AA:
	add sp, sp, #16
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0804E0B4:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_0804DF3C

