	THUMB_FUNC_START sub_0810FC0C
sub_0810FC0C: @ 0x0810FC0C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r9, r5
	ldr r6, _0810FCE4  @ =gRam
	ldr r0, _0810FCE8  @ =0x00001122
	add r2, r6, r0
	add r2, r5, r2
	ldrb r0, [r2]
	mov r1, #241
	and r1, r1, r0
	strb r1, [r2]
	ldr r4, _0810FCEC  @ =gUnknown_0817D3A0
	ldr r0, _0810FCF0  @ =0x00001A56
	add r0, r0, r6
	mov r8, r0
	ldrh r3, [r0]
	mov r0, #1
	mov r10, r0
	mov r0, #1
	and r0, r0, r3
	add r0, r0, r4
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	add r0, r5, #0
	bl sub_080C5D18
	add r0, r5, #0
	bl sub_080C6240
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	bne _0810FD46
	add r0, r5, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810FC7C
	bl sub_080AF16C
	ldr r1, _0810FCF4  @ =0x00001719
	add r0, r6, r1
	strb r4, [r0]
	bl sub_0809945C
_0810FC7C:
	ldr r2, _0810FCF8  @ =0x00000FC2
	add r0, r6, r2
	add r7, r5, r0
	ldrb r0, [r7]
	cmp r0, #0
	bne _0810FCB2
	ldr r1, _0810FCFC  @ =0x00000996
	add r0, r6, r1
	ldrb r1, [r0]
	mov r4, #7
	add r0, r4, #0
	and r0, r0, r1
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	strh r0, [r1]
	bl GetRandomInt
	and r4, r4, r0
	ldr r1, _0810FD00  @ =0x00000964
	add r0, r6, r1
	strh r4, [r0]
	add r0, r5, #0
	bl sub_080C9A58
	mov r0, #31
	strb r0, [r7]
_0810FCB2:
	ldr r2, _0810FD04  @ =0x00001072
	add r0, r6, r2
	add r1, r5, r0
	ldrb r0, [r1]
	add r2, r0, #0
	cmp r2, #0
	bne _0810FD10
	ldr r1, _0810FD08  @ =0x00000F62
	add r0, r6, r1
	add r0, r5, r0
	strb r2, [r0]
	ldr r2, _0810FD0C  @ =0x000016EA
	add r0, r6, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	sub r0, r0, #1
	cmp r0, #7
	bgt _0810FD46
	mov r0, sp
	add r1, r5, #0
	bl sub_080C4948
	b _0810FD46
	.byte 0x00
	.byte 0x00
_0810FCE4:
	.4byte gRam
_0810FCE8:
	.4byte 0x00001122
_0810FCEC:
	.4byte gUnknown_0817D3A0
_0810FCF0:
	.4byte 0x00001A56
_0810FCF4:
	.4byte 0x00001719
_0810FCF8:
	.4byte 0x00000FC2
_0810FCFC:
	.4byte 0x00000996
_0810FD00:
	.4byte 0x00000964
_0810FD04:
	.4byte 0x00001072
_0810FD08:
	.4byte 0x00000F62
_0810FD0C:
	.4byte 0x000016EA
_0810FD10:
	sub r0, r0, #1
	strb r0, [r1]
	ldrb r0, [r1]
	cmp r0, #10
	bne _0810FD46
	ldr r1, _0810FD58  @ =0x00000F62
	add r0, r6, r1
	mov r2, r9
	add r4, r2, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _0810FD46
	mov r1, r8
	ldrh r0, [r1]
	mov r2, r10
	eor r0, r0, r2
	strh r0, [r1]
	ldr r0, _0810FD5C  @ =0x000009AD
	add r1, r6, r0
	mov r0, #23
	strb r0, [r1]
	mov r0, r9
	mov r1, #59
	bl sub_080CF140
	mov r1, r10
	strb r1, [r4]
_0810FD46:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810FD58:
	.4byte 0x00000F62
_0810FD5C:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0810FC0C

