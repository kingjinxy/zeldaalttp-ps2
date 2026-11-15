	THUMB_FUNC_START sub_08085A4C
sub_08085A4C: @ 0x08085A4C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r0, _08085CC0  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r4, r0, r1
	ldr r1, _08085CC4  @ =0x00003030
	strh r1, [r4]
	mov r3, #0
	ldr r5, _08085CC8  @ =0x00000ADE
	add r2, r0, r5
	ldrh r1, [r2]
	add r7, r0, #0
	cmp r1, #0
	beq _08085A80
	add r1, r4, #0
	ldr r0, _08085CCC  @ =0x00000101
	add r4, r0, #0
	ldrh r2, [r2]
_08085A74:
	ldrh r5, [r1]
	add r0, r4, r5
	strh r0, [r1]
	add r3, r3, #1
	cmp r3, r2
	bne _08085A74
_08085A80:
	ldr r0, _08085CD0  @ =0x00000B26
	add r1, r7, r0
	ldrh r2, [r1]
	cmp r3, r2
	beq _08085AF0
	mov r4, #94
	mov r12, r4
	mov r5, #150
	lsl r5, r5, #4
	add r6, r7, r5
	mov r5, #0
	lsl r0, r3, #1
	ldr r2, _08085CD4  @ =0x00000C22
	add r0, r0, r2
	add r4, r0, r7
	mov r8, r1
_08085AA0:
	ldrh r2, [r4]
	ldr r1, _08085CD8  @ =gUnknown_0200CBA1
	add r0, r2, r1
	mov r1, r12
	strb r1, [r0]
	ldr r1, _08085CDC  @ =gUnknown_0200CBA2
	add r0, r2, r1
	mov r1, r12
	strb r1, [r0]
	ldr r0, _08085CE0  @ =gUnknown_0200CBE1
	add r1, r2, r0
	ldrh r0, [r6]
	strb r0, [r1]
	ldr r0, _08085CE4  @ =gUnknown_0200CBE2
	add r1, r2, r0
	ldrh r0, [r6]
	strb r0, [r1]
	ldr r1, _08085CE8  @ =gUnknown_0200CC21
	add r0, r2, r1
	strb r5, [r0]
	add r1, r1, #1
	add r0, r2, r1
	strb r5, [r0]
	add r1, r1, #63
	add r0, r2, r1
	strb r5, [r0]
	add r1, r1, #1
	add r0, r2, r1
	strb r5, [r0]
	ldr r2, _08085CCC  @ =0x00000101
	add r0, r2, #0
	ldrh r1, [r6]
	add r0, r0, r1
	strh r0, [r6]
	add r4, r4, #2
	add r3, r3, #1
	mov r2, r8
	ldrh r2, [r2]
	cmp r3, r2
	bne _08085AA0
_08085AF0:
	ldr r4, _08085CEC  @ =0x00000B2A
	add r1, r7, r4
	ldrh r5, [r1]
	cmp r3, r5
	beq _08085B60
	mov r0, #95
	mov r12, r0
	mov r2, #150
	lsl r2, r2, #4
	add r6, r7, r2
	mov r5, #0
	lsl r0, r3, #1
	add r4, r4, #248
	add r0, r0, r4
	add r4, r0, r7
	mov r8, r1
_08085B10:
	ldrh r2, [r4]
	ldr r1, _08085CD8  @ =gUnknown_0200CBA1
	add r0, r2, r1
	mov r1, r12
	strb r1, [r0]
	ldr r1, _08085CDC  @ =gUnknown_0200CBA2
	add r0, r2, r1
	mov r1, r12
	strb r1, [r0]
	ldr r0, _08085CE0  @ =gUnknown_0200CBE1
	add r1, r2, r0
	ldrh r0, [r6]
	strb r0, [r1]
	ldr r0, _08085CE4  @ =gUnknown_0200CBE2
	add r1, r2, r0
	ldrh r0, [r6]
	strb r0, [r1]
	ldr r1, _08085CE8  @ =gUnknown_0200CC21
	add r0, r2, r1
	strb r5, [r0]
	add r1, r1, #1
	add r0, r2, r1
	strb r5, [r0]
	add r1, r1, #63
	add r0, r2, r1
	strb r5, [r0]
	add r1, r1, #1
	add r0, r2, r1
	strb r5, [r0]
	ldr r2, _08085CCC  @ =0x00000101
	add r0, r2, #0
	ldrh r1, [r6]
	add r0, r0, r1
	strh r0, [r6]
	add r4, r4, #2
	add r3, r3, #1
	mov r2, r8
	ldrh r2, [r2]
	cmp r3, r2
	bne _08085B10
_08085B60:
	ldr r4, _08085CF0  @ =0x00000B4A
	add r0, r7, r4
	ldrh r0, [r0]
	cmp r3, r0
	beq _08085B82
	mov r5, #150
	lsl r5, r5, #4
	add r1, r7, r5
	ldr r2, _08085CCC  @ =0x00000101
	add r4, r2, #0
	add r2, r0, #0
_08085B76:
	ldrh r5, [r1]
	add r0, r4, r5
	strh r0, [r1]
	add r3, r3, #1
	cmp r3, r2
	bne _08085B76
_08085B82:
	ldr r1, _08085CF4  @ =0x00000B4C
	add r0, r7, r1
	ldrh r0, [r0]
	cmp r3, r0
	beq _08085BA4
	mov r2, #150
	lsl r2, r2, #4
	add r1, r7, r2
	ldr r5, _08085CCC  @ =0x00000101
	add r4, r5, #0
	add r2, r0, #0
_08085B98:
	ldrh r5, [r1]
	add r0, r4, r5
	strh r0, [r1]
	add r3, r3, #1
	cmp r3, r2
	bne _08085B98
_08085BA4:
	mov r0, #150
	lsl r0, r0, #4
	add r2, r7, r0
	ldrh r1, [r2]
	ldr r0, _08085CF8  @ =0x00000707
	and r0, r0, r1
	ldr r4, _08085CFC  @ =0x00003434
	add r1, r4, #0
	orr r0, r0, r1
	strh r0, [r2]
	mov r5, #174
	lsl r5, r5, #4
	add r0, r7, r5
	ldrh r0, [r0]
	cmp r3, r0
	beq _08085BD8
	add r1, r2, #0
	ldr r2, _08085CCC  @ =0x00000101
	add r4, r2, #0
	add r2, r0, #0
_08085BCC:
	ldrh r5, [r1]
	add r0, r4, r5
	strh r0, [r1]
	add r3, r3, #1
	cmp r3, r2
	bne _08085BCC
_08085BD8:
	ldr r0, _08085D00  @ =0x00000B28
	add r1, r7, r0
	ldrh r2, [r1]
	cmp r3, r2
	beq _08085C48
	mov r4, #94
	mov r12, r4
	mov r5, #150
	lsl r5, r5, #4
	add r6, r7, r5
	mov r5, #0
	lsl r0, r3, #1
	ldr r2, _08085CD4  @ =0x00000C22
	add r0, r0, r2
	add r4, r0, r7
	mov r8, r1
_08085BF8:
	ldrh r2, [r4]
	ldr r1, _08085CD8  @ =gUnknown_0200CBA1
	add r0, r2, r1
	mov r1, r12
	strb r1, [r0]
	ldr r1, _08085CDC  @ =gUnknown_0200CBA2
	add r0, r2, r1
	mov r1, r12
	strb r1, [r0]
	ldr r0, _08085CE0  @ =gUnknown_0200CBE1
	add r1, r2, r0
	ldrh r0, [r6]
	strb r0, [r1]
	ldr r0, _08085CE4  @ =gUnknown_0200CBE2
	add r1, r2, r0
	ldrh r0, [r6]
	strb r0, [r1]
	ldr r1, _08085CE8  @ =gUnknown_0200CC21
	add r0, r2, r1
	strb r5, [r0]
	add r1, r1, #1
	add r0, r2, r1
	strb r5, [r0]
	add r1, r1, #63
	add r0, r2, r1
	strb r5, [r0]
	add r1, r1, #1
	add r0, r2, r1
	strb r5, [r0]
	ldr r2, _08085CCC  @ =0x00000101
	add r0, r2, #0
	ldrh r1, [r6]
	add r0, r0, r1
	strh r0, [r6]
	add r4, r4, #2
	add r3, r3, #1
	mov r2, r8
	ldrh r2, [r2]
	cmp r3, r2
	bne _08085BF8
_08085C48:
	ldr r4, _08085D04  @ =0x00000B2C
	add r1, r7, r4
	ldrh r5, [r1]
	cmp r3, r5
	beq _08085CB6
	mov r0, #95
	mov r12, r0
	mov r2, #150
	lsl r2, r2, #4
	add r6, r7, r2
	mov r5, #0
	lsl r0, r3, #1
	add r4, r4, #246
	add r0, r0, r4
	add r4, r0, r7
	add r7, r1, #0
_08085C68:
	ldrh r2, [r4]
	ldr r1, _08085CD8  @ =gUnknown_0200CBA1
	add r0, r2, r1
	mov r1, r12
	strb r1, [r0]
	ldr r1, _08085CDC  @ =gUnknown_0200CBA2
	add r0, r2, r1
	mov r1, r12
	strb r1, [r0]
	ldr r0, _08085CE0  @ =gUnknown_0200CBE1
	add r1, r2, r0
	ldrh r0, [r6]
	strb r0, [r1]
	ldr r0, _08085CE4  @ =gUnknown_0200CBE2
	add r1, r2, r0
	ldrh r0, [r6]
	strb r0, [r1]
	ldr r1, _08085CE8  @ =gUnknown_0200CC21
	add r0, r2, r1
	strb r5, [r0]
	add r1, r1, #1
	add r0, r2, r1
	strb r5, [r0]
	add r1, r1, #63
	add r0, r2, r1
	strb r5, [r0]
	add r1, r1, #1
	add r0, r2, r1
	strb r5, [r0]
	ldr r2, _08085CCC  @ =0x00000101
	add r0, r2, #0
	ldrh r1, [r6]
	add r0, r0, r1
	strh r0, [r6]
	add r4, r4, #2
	add r3, r3, #1
	ldrh r2, [r7]
	cmp r3, r2
	bne _08085C68
_08085CB6:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08085CC0:
	.4byte gRam
_08085CC4:
	.4byte 0x00003030
_08085CC8:
	.4byte 0x00000ADE
_08085CCC:
	.4byte 0x00000101
_08085CD0:
	.4byte 0x00000B26
_08085CD4:
	.4byte 0x00000C22
_08085CD8:
	.4byte gUnknown_0200CBA1
_08085CDC:
	.4byte gUnknown_0200CBA2
_08085CE0:
	.4byte gUnknown_0200CBE1
_08085CE4:
	.4byte gUnknown_0200CBE2
_08085CE8:
	.4byte gUnknown_0200CC21
_08085CEC:
	.4byte 0x00000B2A
_08085CF0:
	.4byte 0x00000B4A
_08085CF4:
	.4byte 0x00000B4C
_08085CF8:
	.4byte 0x00000707
_08085CFC:
	.4byte 0x00003434
_08085D00:
	.4byte 0x00000B28
_08085D04:
	.4byte 0x00000B2C
	THUMB_FUNC_END sub_08085A4C

