	THUMB_FUNC_START sub_08120AB8
sub_08120AB8: @ 0x08120AB8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	ldr r2, _08120B40  @ =gRam
	ldr r1, _08120B44  @ =0x00000E1F
	add r0, r2, r1
	add r0, r0, r8
	ldrb r3, [r0]
	ldr r4, _08120B48  @ =0x00001732
	add r1, r2, r4
	strb r3, [r1]
	ldrb r4, [r0]
	add r5, r2, #0
	ldr r6, _08120B4C  @ =gUnknown_0816E6C4
	mov r10, r6
	mov r7, #0
	mov r9, r7
_08120AE6:
	ldr r0, _08120B50  @ =gUnknown_020069B6
	add r2, r4, r0
	ldrb r0, [r2]
	sub r1, r4, #1
	str r1, [sp, #8]
	cmp r0, #8
	beq _08120BEE
	ldr r3, _08120B54  @ =gUnknown_020069C6
	add r1, r4, r3
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08120BEE
	mov r0, #3
	strb r0, [r1]
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _08120BEE
	ldr r0, _08120B58  @ =gUnknown_02006AD7
	ldrb r0, [r0]
	cmp r0, #0
	bne _08120BEE
	ldr r6, _08120B48  @ =0x00001732
	add r1, r5, r6
	ldrb r0, [r1]
	add r3, r5, #0
	cmp r0, #15
	beq _08120B5C
	add r0, r0, #1
	cmp r0, #16
	bne _08120B32
	mov r0, #15
_08120B32:
	strb r0, [r1]
	ldr r7, _08120B48  @ =0x00001732
	add r0, r3, r7
	ldrb r1, [r0]
	sub r0, r4, #1
	str r0, [sp, #8]
	b _08120B76
_08120B40:
	.4byte gRam
_08120B44:
	.4byte 0x00000E1F
_08120B48:
	.4byte 0x00001732
_08120B4C:
	.4byte gUnknown_0816E6C4
_08120B50:
	.4byte gUnknown_020069B6
_08120B54:
	.4byte gUnknown_020069C6
_08120B58:
	.4byte gUnknown_02006AD7
_08120B5C:
	mov r1, #15
	ldr r2, _08120C68  @ =gUnknown_020069B6
_08120B60:
	lsl r0, r1, #24
	asr r3, r0, #24
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #8
	beq _08120B76
	sub r0, r3, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _08120B60
_08120B76:
	lsl r2, r1, #24
	asr r2, r2, #24
	ldr r3, _08120C68  @ =gUnknown_020069B6
	add r1, r2, r3
	mov r0, #0
	strb r0, [r1]
	ldr r6, _08120C6C  @ =gUnknown_020069C6
	add r1, r2, r6
	mov r0, #3
	strb r0, [r1]
	ldr r7, _08120C70  @ =gUnknown_03002BC6
	ldrb r1, [r7]
	mov r0, #63
	and r0, r0, r1
	mov r3, r10
	add r1, r0, r3
	ldrb r1, [r1]
	ldr r6, _08120C74  @ =gUnknown_03002B90
	strb r1, [r6]
	ldr r7, _08120C78  @ =0x00000961
	add r1, r5, r7
	mov r3, r9
	strb r3, [r1]
	add r0, r0, #3
	add r0, r0, r10
	ldrb r0, [r0]
	ldr r6, _08120C7C  @ =0x00000964
	add r3, r5, r6
	strb r0, [r3]
	add r7, r7, #4
	add r0, r5, r7
	mov r1, r9
	strb r1, [r0]
	lsl r2, r2, #1
	ldr r6, _08120C80  @ =gUnknown_020069D6
	add r1, r2, r6
	sub r7, r7, #13
	add r0, r5, r7
	ldrh r0, [r0]
	ldr r6, _08120C74  @ =gUnknown_03002B90
	ldrh r6, [r6]
	add r0, r0, r6
	strh r0, [r1]
	ldr r7, _08120C84  @ =gUnknown_02006A56
	add r2, r2, r7
	ldr r1, _08120C88  @ =gUnknown_03002B82
	ldrh r0, [r1]
	ldrh r6, [r3]
	add r0, r0, r6
	strh r0, [r2]
	ldr r7, _08120C74  @ =gUnknown_03002B90
	ldrh r1, [r7]
	lsl r1, r1, #16
	ldrh r0, [r3]
	orr r0, r0, r1
	str r0, [sp]
	mov r0, #41
	mov r1, sp
	bl sub_0812A324
_08120BEE:
	add r0, r4, #0
	bl sub_08120E98
	ldr r1, [sp, #8]
	lsl r0, r1, #24
	lsr r4, r0, #24
	cmp r0, #0
	blt _08120C00
	b _08120AE6
_08120C00:
	mov r4, #15
	ldr r3, _08120C8C  @ =gRam
	ldr r1, _08120C68  @ =gUnknown_020069B6
_08120C06:
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #8
	bne _08120CE0
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r0, #0
	bge _08120C06
	ldr r2, _08120C90  @ =0x00000E15
	add r0, r3, r2
	add r0, r0, r8
	mov r1, #0
	strb r1, [r0]
	ldr r4, _08120C94  @ =0x00000CA2
	add r2, r3, r4
	mov r4, #0
	mov r0, #1
	strh r0, [r2]
	ldr r6, _08120C98  @ =0x000017B0
	add r0, r3, r6
	strh r1, [r0]
	ldr r7, _08120C9C  @ =0x000017A6
	add r0, r3, r7
	strh r1, [r0]
	ldr r1, _08120CA0  @ =0x00001705
	add r0, r3, r1
	strb r4, [r0]
	ldr r2, _08120CA4  @ =0x00001605
	add r0, r3, r2
	strb r4, [r0]
	sub r6, r6, #152
	add r1, r3, r6
	ldrb r0, [r1]
	cmp r0, #26
	beq _08120CBC
	strb r4, [r1]
	sub r7, r7, #187
	add r0, r3, r7
	strb r4, [r0]
	ldr r1, _08120CA8  @ =0x000016EA
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08120CAC
	add r2, r2, #227
	add r0, r3, r2
	strb r4, [r0]
	b _08120CBC
_08120C68:
	.4byte gUnknown_020069B6
_08120C6C:
	.4byte gUnknown_020069C6
_08120C70:
	.4byte gUnknown_03002BC6
_08120C74:
	.4byte gUnknown_03002B90
_08120C78:
	.4byte 0x00000961
_08120C7C:
	.4byte 0x00000964
_08120C80:
	.4byte gUnknown_020069D6
_08120C84:
	.4byte gUnknown_02006A56
_08120C88:
	.4byte gUnknown_03002B82
_08120C8C:
	.4byte gRam
_08120C90:
	.4byte 0x00000E15
_08120C94:
	.4byte 0x00000CA2
_08120C98:
	.4byte 0x000017B0
_08120C9C:
	.4byte 0x000017A6
_08120CA0:
	.4byte 0x00001705
_08120CA4:
	.4byte 0x00001605
_08120CA8:
	.4byte 0x000016EA
_08120CAC:
	ldr r4, _08120CD0  @ =0x00000545
	add r0, r3, r4
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	ldr r6, _08120CD4  @ =0x000016E8
	add r1, r3, r6
	strb r0, [r1]
_08120CBC:
	ldr r7, _08120CD8  @ =0x00001719
	add r1, r3, r7
	mov r0, #0
	strb r0, [r1]
	ldr r0, _08120CDC  @ =0x000017B0
	add r1, r3, r0
	ldrb r0, [r1]
	strh r0, [r1]
	b _08120CEE
	.byte 0x00
	.byte 0x00
_08120CD0:
	.4byte 0x00000545
_08120CD4:
	.4byte 0x000016E8
_08120CD8:
	.4byte 0x00001719
_08120CDC:
	.4byte 0x000017B0
_08120CE0:
	ldr r1, _08120D14  @ =0x00000E1F
	add r0, r3, r1
	add r0, r0, r8
	ldr r2, _08120D18  @ =0x00001732
	add r1, r3, r2
	ldrb r1, [r1]
	strb r1, [r0]
_08120CEE:
	ldr r2, _08120D1C  @ =gUnknown_02006AD6
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08120D04
	ldr r1, _08120D20  @ =gUnknown_02006AD7
	mov r0, #1
	strb r0, [r1]
	strb r0, [r2]
_08120D04:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08120D14:
	.4byte 0x00000E1F
_08120D18:
	.4byte 0x00001732
_08120D1C:
	.4byte gUnknown_02006AD6
_08120D20:
	.4byte gUnknown_02006AD7
	THUMB_FUNC_END sub_08120AB8

