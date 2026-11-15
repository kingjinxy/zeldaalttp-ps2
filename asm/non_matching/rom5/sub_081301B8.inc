	THUMB_FUNC_START sub_081301B8
sub_081301B8: @ 0x081301B8
	push {r4-r7,lr}
	mov r3, #7
	ldr r2, _08130244  @ =gRam
	ldr r1, _08130248  @ =0x000009C6
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #64
	and r0, r0, r1
	add r6, r2, #0
	cmp r0, #0
	beq _081301D0
	mov r3, #9
_081301D0:
	ldr r2, _0813024C  @ =0x00000CB2
	add r0, r6, r2
	ldrh r0, [r0]
	mov r5, #132
	lsl r5, r5, #1
	cmp r0, #0
	beq _081301E0
	add r5, r5, #112
_081301E0:
	ldr r1, _08130250  @ =gUnknown_0822BB64
	lsl r0, r3, #1
	add r0, r0, r1
	ldrh r0, [r0]
	mov r4, #7
	lsl r0, r0, #1
	ldr r7, _08130254  @ =gUnknown_02030210
	add r2, r0, r7
	mov r7, #202
	lsl r7, r7, #4
	add r0, r6, r7
	ldrh r0, [r0]
	add r0, r5, r0
	add r5, r1, #0
	sub r1, r3, #1
	lsl r0, r0, #1
	ldr r7, _08130258  @ =gUnknown_02000800
	add r3, r0, r7
_08130204:
	ldrh r0, [r2]
	strh r0, [r3]
	add r2, r2, #2
	add r3, r3, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _08130204
	lsl r0, r1, #1
	add r0, r0, r5
	ldrh r0, [r0]
	mov r3, #7
	lsl r0, r0, #1
	ldr r2, _08130254  @ =gUnknown_02030210
	add r1, r0, r2
	mov r4, #202
	lsl r4, r4, #4
	add r0, r6, r4
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r7, _0813025C  @ =gUnknown_02000AD0
	add r2, r0, r7
_0813022E:
	ldrh r0, [r1]
	strh r0, [r2]
	add r1, r1, #2
	add r2, r2, #2
	sub r3, r3, #1
	cmp r3, #0
	bge _0813022E
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08130244:
	.4byte gRam
_08130248:
	.4byte 0x000009C6
_0813024C:
	.4byte 0x00000CB2
_08130250:
	.4byte gUnknown_0822BB64
_08130254:
	.4byte gUnknown_02030210
_08130258:
	.4byte gUnknown_02000800
_0813025C:
	.4byte gUnknown_02000AD0
	THUMB_FUNC_END sub_081301B8

